#include "bm64_launcher.hpp"

#include <algorithm>
#include <atomic>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <cstdio>
#include <fstream>
#include <memory>
#include <vector>

#include "elements/ui_image.h"
#include "util/file.h"

namespace {
    class ZIndexStyle : public recompui::Style {
    public:
        explicit ZIndexStyle(float z_index) {
            set_property(Rml::PropertyId::ZIndex,
                         Rml::Property(z_index, Rml::Unit::NUMBER));
        }
    };

    constexpr float shadow_scale = 2.0f;
    constexpr float shadow_margin = 48.0f;
    constexpr float rect_inset_x = 4.0f;
    constexpr float rect_inset_y = 3.0f;
    constexpr float rect_corner_radius = 8.0f;
    constexpr float rect_alpha_left = 0.50f;
    constexpr float rect_alpha_right = 0.90f;

    struct ShadowRect {
        float left;
        float top;
        float right;
        float bottom;
    };

    // Bake one rounded, horizontally graded bar per menu row into a single
    // image. The bars sit behind the transparent option boxes, which avoids
    // per-row z-index and texture-coordinate problems in the RT64 adapter.
    std::vector<char> make_shadow_map(
        const std::vector<ShadowRect>& rects,
        int pixel_width, int pixel_height) {
        std::vector<char> pixels(
            static_cast<size_t>(pixel_width) * pixel_height * 4, 0);

        for (const ShadowRect& rect : rects) {
            const float left = rect.left * shadow_scale;
            const float top = rect.top * shadow_scale;
            const float right = rect.right * shadow_scale;
            const float bottom = rect.bottom * shadow_scale;
            const float cx = (left + right) * 0.5f;
            const float cy = (top + bottom) * 0.5f;
            const float half_width = (right - left) * 0.5f;
            const float half_height = (bottom - top) * 0.5f;
            const float radius = rect_corner_radius * shadow_scale;

            const int min_x = std::max(
                0, static_cast<int>(std::floor(left)));
            const int max_x = std::min(
                pixel_width - 1, static_cast<int>(std::ceil(right)));
            const int min_y = std::max(
                0, static_cast<int>(std::floor(top)));
            const int max_y = std::min(
                pixel_height - 1, static_cast<int>(std::ceil(bottom)));

            for (int y = min_y; y <= max_y; y++) {
                for (int x = min_x; x <= max_x; x++) {
                    const float px = x + 0.5f;
                    const float py = y + 0.5f;

                    // Rounded-box signed distance, used for a one-pixel
                    // anti-aliased edge.
                    const float qx =
                        std::abs(px - cx) - half_width + radius;
                    const float qy =
                        std::abs(py - cy) - half_height + radius;
                    const float outside = std::sqrt(
                        std::max(qx, 0.0f) * std::max(qx, 0.0f) +
                        std::max(qy, 0.0f) * std::max(qy, 0.0f));
                    const float inside = std::min(std::max(qx, qy), 0.0f);
                    const float distance = outside + inside - radius;
                    const float coverage =
                        std::clamp(0.5f - distance, 0.0f, 1.0f);
                    if (coverage <= 0.0f) {
                        continue;
                    }

                    const float t = std::clamp(
                        (px - left) / (right - left), 0.0f, 1.0f);
                    const float alpha_value =
                        (rect_alpha_left +
                         (rect_alpha_right - rect_alpha_left) * t) *
                        coverage;
                    const unsigned char alpha =
                        static_cast<unsigned char>(alpha_value * 255.0f);

                    const size_t index =
                        (static_cast<size_t>(y) * pixel_width + x) * 4;
                    const unsigned char current =
                        static_cast<unsigned char>(pixels[index + 3]);
                    if (alpha > current) {
                        pixels[index + 3] = static_cast<char>(alpha);
                    }
                }
            }
        }

        return pixels;
    }

    struct LauncherContext {
        float wrapper_phase = -1.0f;
        std::chrono::steady_clock::time_point last_update_time;
        float seconds = 0.0f;
        bool started = false;
        bool options_enabled = false;
        bool animation_skipped = false;
        std::atomic<bool> skip_animation_next_update = false;
        std::unique_ptr<ZIndexStyle> option_stack_style;
        std::unique_ptr<ZIndexStyle> shadow_stack_style;
        recompui::Image* shadow_image = nullptr;
        bool shadow_map_queued = false;
    };

    LauncherContext launcher_context;

    float interpolate_value(float a, float b, float t) {
        // Smootherstep, matching the frontend's own easing.
        return a + (b - a) * (t * t * t * (t * (t * 6.0f - 15.0f) + 10.0f));
    }

    bool check_skip_input(const SDL_Event* event) {
        switch (event->type) {
        case SDL_KEYDOWN:
            return event->key.keysym.scancode == SDL_SCANCODE_ESCAPE ||
                   event->key.keysym.scancode == SDL_SCANCODE_SPACE ||
                   (event->key.keysym.scancode == SDL_SCANCODE_RETURN &&
                    (event->key.keysym.mod & (KMOD_LALT | KMOD_RALT)) == KMOD_NONE);
        case SDL_CONTROLLERBUTTONDOWN:
        case SDL_MOUSEBUTTONDOWN:
            return true;
        default:
            return false;
        }
    }

    int launcher_event_watch(void*, SDL_Event* event) {
        if (!launcher_context.animation_skipped && check_skip_input(event)) {
            launcher_context.animation_skipped = true;
            launcher_context.skip_animation_next_update = true;
            return 0;
        }
        return 1;
    }

    constexpr float options_slide_length = 1.5f;
    constexpr float animation_skip_time = 10.0f;

    void ensure_shadow_map(recompui::LauncherMenu* menu) {
        if (launcher_context.shadow_map_queued) {
            return;
        }

        auto* options = menu->get_game_options_menu();
        const float menu_width = options->get_client_width();
        const float menu_height = options->get_client_height();
        if (menu_width <= 0.0f || menu_height <= 0.0f) {
            return;
        }

        std::vector<ShadowRect> rects;
        for (recompui::GameOption* option : options->get_options()) {
            const float option_left = option->get_offset_left();
            const float option_top = option->get_offset_top();
            const float option_width = option->get_client_width();
            const float option_height = option->get_client_height();
            if (option_width <= 0.0f || option_height <= 0.0f ||
                option->get_label()->get_client_width() <= 0.0f) {
                return;
            }

            rects.push_back({
                shadow_margin + option_left + rect_inset_x,
                shadow_margin + option_top + rect_inset_y,
                shadow_margin + option_left + option_width - rect_inset_x,
                shadow_margin + option_top + option_height - rect_inset_y
            });
        }

        const float canvas_width = menu_width + shadow_margin * 2.0f;
        const float canvas_height = menu_height + shadow_margin * 2.0f;
        const int texture_width =
            std::max(1, static_cast<int>(canvas_width * shadow_scale));
        const int texture_height =
            std::max(1, static_cast<int>(canvas_height * shadow_scale));

        const std::vector<char> pixels =
            make_shadow_map(rects, texture_width, texture_height);
        recompui::queue_image_from_bytes_rgba32(
            "?/menu-shadow-map", pixels, texture_width, texture_height);

        auto context = recompui::get_current_context();
        launcher_context.shadow_image = context.create_element<recompui::Image>(
            options, "?/menu-shadow-map");
        launcher_context.shadow_image->set_position(recompui::Position::Absolute);
        launcher_context.shadow_image->set_left(
            -shadow_margin, recompui::Unit::Px);
        launcher_context.shadow_image->set_top(
            -shadow_margin, recompui::Unit::Px);
        launcher_context.shadow_image->set_width(
            canvas_width, recompui::Unit::Px);
        launcher_context.shadow_image->set_height(
            canvas_height, recompui::Unit::Px);
        launcher_context.shadow_image->set_pointer_events(recompui::PointerEvents::None);
        launcher_context.shadow_image->set_style_enabled("stack", true);
        launcher_context.shadow_image->add_style(
            launcher_context.shadow_stack_style.get(), "stack");
        launcher_context.shadow_image->apply_styles();
        launcher_context.shadow_image->set_opacity(
            launcher_context.options_enabled ? 1.0f : 0.0f);
        launcher_context.shadow_map_queued = true;
    }
}

void bm64::launcher::animation_setup(recompui::LauncherMenu* menu) {
    auto context = recompui::get_current_context();
    recompui::Element* background_container = menu->get_background_container();

    // Use the gameplay screenshot as the launcher backdrop instead of a flat
    // colour; the box art stays in the game thumbnail.
    std::vector<char> background_bytes;
    {
        std::ifstream file(recompui::file::get_asset_path("Background.png"), std::ios::binary);
        if (file) {
            file.seekg(0, std::ios::end);
            const size_t size = static_cast<size_t>(file.tellg());
            file.seekg(0, std::ios::beg);
            background_bytes.resize(size);
            file.read(background_bytes.data(), static_cast<std::streamsize>(size));
        }
    }
    if (!background_bytes.empty()) {
        // RmlUi joins a relative src with the document path; the leading "?"
        // keeps this key exactly as queued (the same convention the frontend
        // uses for its own generated thumbnails).
        recompui::queue_image_from_bytes_file("?/background", background_bytes);
    } else {
        std::fprintf(stderr, "Missing assets/Background.png\n");
    }

    recompui::Image* background =
        context.create_element<recompui::Image>(background_container, "?/background");
    background->set_position(recompui::Position::Absolute);
    background->set_top(50.0f, recompui::Unit::Percent);
    background->set_left(0);
    background->set_height_auto();
    background->set_width(100.0f, recompui::Unit::Percent);
    background->set_translate_2D(0.0f, -50.0f, recompui::Unit::Percent);
    background_container->set_overflow(recompui::Overflow::Hidden);

    auto* options = menu->get_game_options_menu();
    options->set_overflow(recompui::Overflow::Visible);
    launcher_context.option_stack_style = std::make_unique<ZIndexStyle>(1.0f);
    launcher_context.shadow_stack_style = std::make_unique<ZIndexStyle>(0.0f);
    launcher_context.shadow_map_queued = false;

    // Hide the options until the slide-in finishes. They are also disabled so
    // keyboard focus cannot land on an invisible item.
    for (auto* option : options->get_options()) {
        option->get_label()->set_background_color(recompui::theme::color::Transparent);
        option->set_style_enabled("stack", true);
        option->add_style(launcher_context.option_stack_style.get(), "stack");
        option->apply_styles();
        option->set_enabled(false);
        option->set_opacity(0.0f);
    }

    SDL_AddEventWatch(&launcher_event_watch, nullptr);
}

void bm64::launcher::animation_update(recompui::LauncherMenu* menu) {
    const auto now = std::chrono::steady_clock::now();
    float delta_time = launcher_context.started
        ? std::chrono::duration_cast<std::chrono::milliseconds>(
              now - launcher_context.last_update_time).count() / 1000.0f
        : 0.0f;

    if (launcher_context.skip_animation_next_update) {
        delta_time = std::max(animation_skip_time - launcher_context.seconds, 0.0f);
        launcher_context.skip_animation_next_update = false;
    }

    launcher_context.seconds += delta_time;
    launcher_context.last_update_time = now;
    launcher_context.started = true;

    const float phase = std::clamp(
        launcher_context.seconds / options_slide_length, 0.0f, 1.0f);

    if (phase != launcher_context.wrapper_phase) {
        auto* options = menu->get_game_options_menu();
        options->set_right(interpolate_value(options_right_start, options_right_end, phase));

        const float opacity = interpolate_value(0.0f, 1.0f, phase);
        for (auto* option : options->get_options()) {
            option->set_opacity(opacity);
        }
        if (launcher_context.shadow_image) {
            launcher_context.shadow_image->set_opacity(opacity);
        }

        launcher_context.wrapper_phase = phase;
    }

    if (!launcher_context.options_enabled &&
        launcher_context.seconds >= options_slide_length) {
        SDL_DelEventWatch(&launcher_event_watch, nullptr);

        for (auto* option : menu->get_game_options_menu()->get_options()) {
            option->set_enabled(true);
            option->set_opacity(1.0f);
        }
        if (launcher_context.shadow_image) {
            launcher_context.shadow_image->set_opacity(1.0f);
        }

        launcher_context.options_enabled = true;
    }

    ensure_shadow_map(menu);
}
