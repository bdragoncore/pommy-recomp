#include "elements/ui_theme.h"
#include "bm64_theme.hpp"

void bm64::ui_theme::set_custom_theme() {
    using namespace recompui;

    // Palette from the title art; keep the alpha variants in sync for RmlUi's
    // derived borders and hover states.
    theme::set_theme_color(theme::color::Background1, Color{8, 10, 18, 255});
    theme::set_theme_color(theme::color::Background2, Color{17, 19, 31, 255});
    theme::set_theme_color(theme::color::Background3, Color{26, 28, 44, 255});
    theme::set_theme_color(theme::color::BGOverlay, Color{200, 210, 235, 26});
    theme::set_theme_color(theme::color::ModalOverlay, Color{8, 10, 18, 242});
    theme::set_theme_color(theme::color::BGShadow, Color{0, 0, 0, 89});
    theme::set_theme_color(theme::color::BGShadow2, Color{8, 10, 18, 184});
    theme::set_theme_color(theme::color::Text, Color{242, 246, 255, 255});
    theme::set_theme_color(theme::color::TextActive, Color{255, 255, 255, 255});
    theme::set_theme_color(theme::color::TextDim, Color{200, 208, 228, 255});
    theme::set_theme_color(theme::color::TextInactive, Color{255, 255, 255, 153});
    theme::set_theme_color(theme::color::TextA5, Color{242, 246, 255, 13});
    theme::set_theme_color(theme::color::TextA20, Color{242, 246, 255, 51});
    theme::set_theme_color(theme::color::TextA30, Color{242, 246, 255, 77});
    theme::set_theme_color(theme::color::TextA50, Color{242, 246, 255, 128});
    theme::set_theme_color(theme::color::TextA80, Color{242, 246, 255, 204});
    theme::set_theme_color(theme::color::Primary, Color{45, 120, 255, 255});
    theme::set_theme_color(theme::color::PrimaryL, Color{170, 205, 255, 255});
    theme::set_theme_color(theme::color::PrimaryD, Color{0, 55, 150, 255});
    theme::set_theme_color(theme::color::PrimaryA5, Color{45, 120, 255, 13});
    theme::set_theme_color(theme::color::PrimaryA20, Color{45, 120, 255, 51});
    theme::set_theme_color(theme::color::PrimaryA30, Color{45, 120, 255, 77});
    theme::set_theme_color(theme::color::PrimaryA50, Color{45, 120, 255, 128});
    theme::set_theme_color(theme::color::PrimaryA80, Color{45, 120, 255, 204});
    theme::set_theme_color(theme::color::Secondary, Color{255, 184, 32, 255});
    theme::set_theme_color(theme::color::SecondaryL, Color{255, 225, 150, 255});
    theme::set_theme_color(theme::color::SecondaryD, Color{210, 130, 0, 255});
    theme::set_theme_color(theme::color::SecondaryA5, Color{255, 184, 32, 13});
    theme::set_theme_color(theme::color::SecondaryA20, Color{255, 184, 32, 51});
    theme::set_theme_color(theme::color::SecondaryA30, Color{255, 184, 32, 77});
    theme::set_theme_color(theme::color::SecondaryA50, Color{255, 184, 32, 128});
    theme::set_theme_color(theme::color::SecondaryA80, Color{255, 184, 32, 204});
    theme::set_theme_color(theme::color::Warning, Color{255, 254, 0, 255});
    theme::set_theme_color(theme::color::WarningL, Color{255, 254, 143, 255});
    theme::set_theme_color(theme::color::WarningD, Color{197, 163, 2, 255});
    theme::set_theme_color(theme::color::WarningA5, Color{255, 254, 0, 13});
    theme::set_theme_color(theme::color::WarningA20, Color{255, 254, 0, 51});
    theme::set_theme_color(theme::color::WarningA30, Color{255, 254, 0, 77});
    theme::set_theme_color(theme::color::WarningA50, Color{255, 254, 0, 128});
    theme::set_theme_color(theme::color::WarningA80, Color{255, 254, 0, 204});
    theme::set_theme_color(theme::color::Danger, Color{255, 53, 31, 255});
    theme::set_theme_color(theme::color::DangerL, Color{255, 149, 138, 255});
    theme::set_theme_color(theme::color::DangerD, Color{163, 16, 0, 255});
    theme::set_theme_color(theme::color::DangerA5, Color{255, 53, 31, 13});
    theme::set_theme_color(theme::color::DangerA20, Color{255, 53, 31, 51});
    theme::set_theme_color(theme::color::DangerA30, Color{255, 53, 31, 77});
    theme::set_theme_color(theme::color::DangerA50, Color{255, 53, 31, 128});
    theme::set_theme_color(theme::color::DangerA80, Color{255, 53, 31, 204});
    theme::set_theme_color(theme::color::Success, Color{40, 238, 32, 255});
    theme::set_theme_color(theme::color::SuccessL, Color{155, 247, 151, 255});
    theme::set_theme_color(theme::color::SuccessD, Color{18, 157, 12, 255});
    theme::set_theme_color(theme::color::SuccessA5, Color{40, 238, 32, 13});
    theme::set_theme_color(theme::color::SuccessA20, Color{40, 238, 32, 51});
    theme::set_theme_color(theme::color::SuccessA30, Color{40, 238, 32, 77});
    theme::set_theme_color(theme::color::SuccessA50, Color{40, 238, 32, 128});
    theme::set_theme_color(theme::color::SuccessA80, Color{40, 238, 32, 204});
    theme::set_theme_color(theme::color::Border, Color{255, 255, 255, 51});
    theme::set_theme_color(theme::color::BorderSoft, Color{255, 255, 255, 26});
    theme::set_theme_color(theme::color::BorderHard, Color{255, 255, 255, 77});
    theme::set_theme_color(theme::color::BorderSolid, Color{255, 255, 255, 153});
    theme::set_theme_color(theme::color::Transparent, Color{0, 0, 0, 0});
    theme::set_theme_color(theme::color::A, Color{51, 51, 255, 255});
    theme::set_theme_color(theme::color::AL, Color{178, 178, 255, 255});
    theme::set_theme_color(theme::color::AD, Color{32, 32, 172, 255});
    theme::set_theme_color(theme::color::AA5, Color{51, 51, 255, 13});
    theme::set_theme_color(theme::color::AA20, Color{51, 51, 255, 51});
    theme::set_theme_color(theme::color::AA30, Color{51, 51, 255, 77});
    theme::set_theme_color(theme::color::AA50, Color{51, 51, 255, 128});
    theme::set_theme_color(theme::color::AA80, Color{51, 51, 255, 204});
    theme::set_theme_color(theme::color::White, Color{255, 255, 255, 255});
    theme::set_theme_color(theme::color::WhiteA5, Color{255, 255, 255, 13});
    theme::set_theme_color(theme::color::WhiteA20, Color{255, 255, 255, 51});
    theme::set_theme_color(theme::color::WhiteA30, Color{255, 255, 255, 77});
    theme::set_theme_color(theme::color::WhiteA50, Color{255, 255, 255, 128});
    theme::set_theme_color(theme::color::WhiteA80, Color{255, 255, 255, 204});
    theme::set_theme_color(theme::color::BW05, Color{13, 13, 13, 255});
    theme::set_theme_color(theme::color::BW10, Color{26, 26, 26, 255});
    theme::set_theme_color(theme::color::BW25, Color{64, 64, 64, 255});
    theme::set_theme_color(theme::color::BW50, Color{128, 128, 128, 255});
    theme::set_theme_color(theme::color::BW75, Color{191, 191, 191, 255});
    theme::set_theme_color(theme::color::BW90, Color{229, 229, 229, 255});

    theme::set_border_radius_sm(12.0f);
    theme::set_border_radius_md(18.0f);
    theme::set_border_radius_lg(24.0f);

    const uint32_t header_weight = 700;
    const uint32_t label_weight = 500;
    const uint32_t base_weight = 400;
    theme::set_typography_preset(theme::Typography::Header1, 68.0f, 0.01f, header_weight);
    theme::set_typography_preset(theme::Typography::Header2, 52.0f, 0.01f, header_weight);
    theme::set_typography_preset(theme::Typography::Header3, 36.0f, 0.01f, header_weight);
    theme::set_typography_preset(theme::Typography::LabelLG, 36.0f, 0.05f, label_weight);
    theme::set_typography_preset(theme::Typography::LabelMD, 28.0f, 0.05f, label_weight);
    theme::set_typography_preset(theme::Typography::LabelSM, 20.0f, 0.07f, label_weight);
    theme::set_typography_preset(theme::Typography::LabelXS, 18.0f, 0.07f, base_weight);
    theme::set_typography_preset(theme::Typography::Body, 20.0f, 0.0f, base_weight);
}
