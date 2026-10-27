#include <chrono>
#include <csignal>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <filesystem>
#include <span>
#include <string>
#include <vector>

#include "recomp.h"
#include "bm64_audio.hpp"
#include "bm64_config.hpp"
#include "bm64_input.hpp"
#include "librecomp/game.hpp"
#include "librecomp/overlays.hpp"
#ifdef BM64_RECOMP_UI
#include "bm64_launcher.hpp"
#include "bm64_theme.hpp"
#include "recompinput/input_events.h"
#include "recompinput/recompinput.h"
#include "recompui/program_config.h"
#include "recompui/recompui.h"
#include "recompui_host.hpp"
#include "util/file.h"
#endif
#include <ultramodern/ultramodern.hpp>
#include <ultramodern/renderer_context.hpp>

#include "icon_bytes.h"

// From RecompiledFuncs (lookup.cpp is C++, the functions are C)
extern "C" void recomp_entrypoint(uint8_t* rdram, recomp_context* ctx);
gpr get_entrypoint_address();

namespace bm64u2 {
    void register_overlays();
    void register_overlay_functions();
    void register_patches();
}

// RT64 render context
#include "render_context.hpp"

extern "C" bool bm64u2_tlb_init(uint8_t* rdram);

static uint8_t* g_rdram = nullptr;
extern "C" uint8_t* bm64u2_rdram() { return g_rdram; }

static std::unique_ptr<ultramodern::renderer::RendererContext> create_rt64_renderer(
    uint8_t* rdram, ultramodern::renderer::WindowHandle window_handle, bool developer_mode) {
    g_rdram = rdram;
    return bm64::renderer::create_render_context(rdram, window_handle, developer_mode);
}

// RSP microcode. The audio microcode is recompiled (rsp/aspMain.cpp). Graphics
// tasks need no RSP work, since RT64 interprets the display lists directly, and
// any other task gets a stub that finishes immediately.
extern RspExitReason aspMain(uint8_t* rdram, uint32_t ucode_addr);

static RspExitReason rsp_noop_ucode(uint8_t* rdram, uint32_t ucode_addr) {
    return RspExitReason::Broke;
}

static RspUcodeFunc* stub_get_rsp_microcode(const OSTask* task) {
    if (task->t.type == M_AUDTASK) {
        return aspMain;
    }
    return rsp_noop_ucode;
}

// Audio callbacks, implemented in audio.cpp.
static void stub_queue_samples(int16_t* samples, size_t count) { bm64::audio::queue_samples(samples, count); }
static size_t stub_get_frames_remaining() { return bm64::audio::frames_remaining(); }
static void stub_set_frequency(uint32_t freq) { bm64::audio::set_frequency(freq); }

// Input callbacks, implemented in input.cpp.
static void stub_poll_input() { bm64::input::poll(); }
static bool stub_get_input(int32_t controller, uint16_t* buttons, float* x, float* y) {
    return bm64::input::get(controller, buttons, x, y);
}
static void stub_set_rumble(int32_t controller, bool rumble) { bm64::input::set_rumble(controller, rumble); }
static ultramodern::input::connected_device_info_t stub_get_connected_device_info(int32_t controller) {
    return bm64::input::device_info(controller);
}

// Stub GFX callbacks
static void* stub_create_gfx() { return nullptr; }
static ultramodern::renderer::WindowHandle stub_create_window(void* gfx_data) {
#ifdef BM64_RECOMP_UI
    return bm64::ui_frontend::create_window();
#else
    return {};
#endif
}
static void stub_update_gfx(void* gfx_data) {
    (void)gfx_data;
#ifdef BM64_RECOMP_UI
    // Opens every SDL GameController, feeds the settings UI, and scans for
    // binding edits. Must run every frame, not only on the launcher.
    recompinput::handle_events();
#endif
}

#ifdef BM64_RECOMP_UI
static void stub_vi_callback() { recompinput::update_rumble(); }
#else
static void stub_vi_callback() {}
#endif
static void stub_gfx_init_callback() {}

// Stub error handling
static void stub_message_box(const char* msg) { fprintf(stderr, "Message: %s\n", msg); }

// Stub threads
static std::string stub_get_game_thread_name(const OSThread* t) { return "[Game]"; }

static recomp::Version project_version{1, 0, 0};

static recomp::GameEntry make_game_entry() {
    return recomp::GameEntry{
        .rom_hash = 0xaf4ed5dd14ce9000ULL,
        .internal_name = "BOMBERMAN64U2",
        .display_name = "Bomberman 64: The Second Attack!",
        .game_id = u8"bm64u2_us",
        .mod_game_id = "bm64u2",
        .save_type = recomp::SaveType::AllowAll,
        .thumbnail_bytes = std::span<const char>(icon_bytes),
        .is_enabled = true,
        .entrypoint_address = get_entrypoint_address(),
        .entrypoint = recomp_entrypoint,
        // Runs right after init(), which is what clears the overlay function map.
        .on_init_callback = [](uint8_t* rdram, recomp_context* ctx) {
            if (!bm64u2_tlb_init(rdram)) {
                fprintf(stderr, "Failed to set up the TLB memory mapping\n");
                std::exit(EXIT_FAILURE);
            }
            bm64u2::register_overlay_functions();
        },
    };
}

// RecompFrontend's launcher reads the game list from this global. Filled in
// main() rather than at static initialization: get_entrypoint_address() must
// not run before the generated lookup table is ready.
std::vector<recomp::GameEntry> supported_games;

#ifdef BM64_RECOMP_UI
namespace {
void on_launcher_init(recompui::LauncherMenu* menu) {
    auto* game_options_menu = menu->init_game_options_menu(
        supported_games[0].game_id,
        supported_games[0].mod_game_id,
        supported_games[0].display_name,
        supported_games[0].thumbnail_bytes,
        recompui::GameOptionsMenuLayout::Center);

    game_options_menu->add_start_game_or_load_rom_option();
    game_options_menu->add_setup_controls_option();
    game_options_menu->add_settings_option();
    game_options_menu->add_mods_option();
    game_options_menu->add_exit_option();
    game_options_menu->set_width(30.0f, recompui::Unit::Percent);

    for (auto* option : game_options_menu->get_options()) {
        option->set_justify_content(recompui::JustifyContent::FlexEnd);
        option->set_border_radius(6.0f);

        // The background art is the focus; keep the hover/focus background
        // out of the way and let the text and focus marker carry the state.
        option->hover_style.set_background_color(recompui::theme::color::Transparent);
        option->focus_style.set_background_color(recompui::theme::color::Transparent);
    }

    // Right-align the option column over the box art. The container is wider
    // than the window on purpose: it keeps the column in the same place when
    // the window is resized, while the background keeps its aspect ratio.
    recompui::Element* menu_container = menu->get_menu_container();
    menu_container->set_width(1440);
    menu_container->unset_left();
    menu_container->set_right(50.0f, recompui::Unit::Percent);
    menu_container->set_translate_2D(50.0f, 0.0f, recompui::Unit::Percent);

    game_options_menu->unset_left();
    game_options_menu->set_bottom(50.0f, recompui::Unit::Percent);
    game_options_menu->set_translate_2D(0.0f, 50.0f, recompui::Unit::Percent);
    game_options_menu->set_right(bm64::launcher::options_right_start);

    menu->remove_default_title();
    bm64::launcher::animation_setup(menu);
}

void on_launcher_update(recompui::LauncherMenu* menu) {
    bm64::launcher::animation_update(menu);
}
}
#endif

namespace {
void handle_sigterm(int) {
    // SDL can keep the process alive after SIGTERM; exit immediately.
    std::_Exit(0);
}
}

int main(int argc, char* argv[]) {
    std::signal(SIGTERM, handle_sigterm);
    supported_games.push_back(make_game_entry());
    for (const recomp::GameEntry& game : supported_games) {
        recomp::register_game(game);
    }

    // Register overlays and patches
    bm64u2::register_overlays();
    bm64u2::register_patches();

#ifdef BM64_RECOMP_UI
    // The frontend builds its menus during RT64's init hook, so fonts, theme
    // and configs have to be in place first.
    bm64::ui_theme::set_custom_theme();
    recompui::programconfig::set_program_name(bm64::program_name);
    recompui::programconfig::set_program_id(bm64::program_id);
    recompui::register_primary_font("InterVariable.ttf", "Inter Variable");
    recomp::register_config_path(recompui::file::get_app_folder_path());
    bm64::config::init();

    recompui::register_launcher_init_callback(on_launcher_init);
    recompui::register_launcher_update_callback(on_launcher_update);
#endif

    recomp::Configuration cfg{
        .argc = argc,
        .argv = argv,
        .project_version = project_version,
        .window_handle = {},
        .rsp_callbacks = {
            .get_rsp_microcode = stub_get_rsp_microcode,
        },
        .renderer_callbacks = {
            .create_render_context = create_rt64_renderer,
        },
        .audio_callbacks = {
            .queue_samples = stub_queue_samples,
            .get_frames_remaining = stub_get_frames_remaining,
            .set_frequency = stub_set_frequency,
        },
        .input_callbacks = {
            .poll_input = stub_poll_input,
            .get_input = stub_get_input,
            .set_rumble = stub_set_rumble,
            .get_connected_device_info = stub_get_connected_device_info,
        },
        .gfx_callbacks = {
            .create_gfx = stub_create_gfx,
            .create_window = stub_create_window,
            .update_gfx = stub_update_gfx,
        },
        .events_callbacks = {
            .vi_callback = stub_vi_callback,
            .gfx_init_callback = stub_gfx_init_callback,
        },
        .error_handling_callbacks = {
            .message_box = stub_message_box,
        },
        .threads_callbacks = {
            .get_game_thread_name = stub_get_game_thread_name,
        },
    };

    recomp::start(cfg);
    return 0;
}
