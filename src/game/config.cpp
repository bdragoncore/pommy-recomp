#include "bm64_config.hpp"

#ifdef BM64_RECOMP_UI

#include <variant>

#include "bm64_audio.hpp"
#include "bm64_cheats.hpp"
#include "bm64_input.hpp"
#include "bm64_widescreen.hpp"
#include "recompinput/recompinput.h"
#include "recompui/config.h"
#include "ultramodern/config.hpp"

namespace {

using recomp::config::ConfigValueVariant;
using recomp::config::OptionChangeContext;

constexpr const char* kCheatsId = "cheats";
constexpr const char* kPommyModifier = "pommy_modifier";
constexpr const char* kPommyForm = "pommy_form";
constexpr const char* kTestMap = "test_map_warp";
constexpr const char* kUnlockParts = "unlock_custom_parts";
constexpr const char* kWidescreen = "widescreen";
constexpr const char* kAccessory = "controller_accessory";

enum class TestMap : uint32_t { Off = 0, Slope = 0x08, Checkerboard = 0x09 };
enum class WidescreenMode : uint32_t { Off = 0, On = 1 };
enum class AccessoryMode : uint32_t { ControllerPak = 0, RumblePak = 1, Both = 2 };

void apply_accessory(ConfigValueVariant value) {
    switch (static_cast<AccessoryMode>(std::get<uint32_t>(value))) {
        case AccessoryMode::ControllerPak:
            bm64::input::set_accessory(bm64::input::Accessory::ControllerPak);
            break;
        case AccessoryMode::RumblePak:
            bm64::input::set_accessory(bm64::input::Accessory::RumblePak);
            break;
        default:
            bm64::input::set_accessory(bm64::input::Accessory::Both);
            break;
    }
}

// A real controller holds one accessory: the Controller Pak the game saves
// Custom Bomberman designs to (src/game/controller_pak.cpp), or the Rumble Pak.
// Both is the port's addition.
void add_accessory_option(recomp::config::Config& general) {
    general.add_enum_option(kAccessory, "Controller Accessory",
        "What is plugged into the controller. The <recomp-color primary>Controller Pak</recomp-color> "
        "holds Custom Bomberman designs for Battle Mode; the "
        "<recomp-color primary>Rumble Pak</recomp-color> makes a gamepad rumble. "
        "<recomp-color primary>Both</recomp-color> gives you both, which a real controller cannot. "
        "Rumble is set up when the game starts, so changing it takes effect after a restart.",
        {
            { AccessoryMode::Both, "Both", "Both" },
            { AccessoryMode::ControllerPak, "Controller Pak", "Controller Pak" },
            { AccessoryMode::RumblePak, "Rumble Pak", "Rumble Pak" },
        },
        AccessoryMode::Both);
    general.add_option_change_callback(kAccessory,
        [](ConfigValueVariant current, ConfigValueVariant, OptionChangeContext) {
            apply_accessory(current);
        });
}

void apply_widescreen(ConfigValueVariant value) {
    bm64::widescreen::set_enabled(
        std::get<uint32_t>(value) == static_cast<uint32_t>(WidescreenMode::On));
}

void apply_aspect_mode(ConfigValueVariant value) {
    bm64::widescreen::set_expand(
        std::get<uint32_t>(value) == static_cast<uint32_t>(ultramodern::renderer::AspectRatio::Expand));
}

// Adds a Widescreen row to the Graphics tab. Aspect Ratio only controls how
// RT64 fills the window; this widens the 3D projection.
void add_widescreen_option(recomp::config::Config& graphics) {
    graphics.add_enum_option(kWidescreen, "Widescreen",
        "Renders the 3D view at the window's aspect ratio instead of stretching the "
        "original 4:3 image. Use <recomp-color primary>Aspect Ratio</recomp-color> above to "
        "control how the image fills the window. Scenes drawn for 4:3 (the title screen "
        "backdrop, for example) keep their original framing.",
        {
            { WidescreenMode::Off, "Off", "Off" },
            { WidescreenMode::On, "On", "On" },
        },
        WidescreenMode::On);
    graphics.add_option_change_callback(kWidescreen,
        [](ConfigValueVariant current, ConfigValueVariant, OptionChangeContext) {
            apply_widescreen(current);
        });

    // The stock Aspect Ratio option decides whether RT64 expands the image to
    // the window, so the projection has to follow it.
    graphics.add_option_change_callback(recompui::config::graphics::options::ar_option,
        [](ConfigValueVariant current, ConfigValueVariant, OptionChangeContext) {
            apply_aspect_mode(current);
        });
}

void push_pommy(recomp::config::Config& cheats) {
    const bool on = std::get<bool>(cheats.get_option_value(kPommyModifier));
    const int form = static_cast<int>(std::get<double>(cheats.get_option_value(kPommyForm)));
    bm64::cheats::set_pommy_form(on ? form : -1);
}

// The Cheats tab: one toggle per built-in GameShark code, the Pommy Modifier,
// the TCRF test map warp and the one-shot Unlock All Custom Parts.
void create_cheats_tab() {
    recomp::config::Config& cheats = recompui::config::create_config_tab("Cheats", kCheatsId, false);

    for (const bm64::cheats::Cheat& cheat : bm64::cheats::builtin()) {
        cheats.add_bool_option(cheat.id, cheat.name, cheat.description, false);
        const std::string id = cheat.id;
        cheats.add_option_change_callback(id,
            [id](ConfigValueVariant current, ConfigValueVariant, OptionChangeContext) {
                bm64::cheats::set_enabled(id, std::get<bool>(current));
            });
    }

    std::string forms;
    const auto& names = bm64::cheats::pommy_forms();
    for (size_t i = 0; i < names.size(); i++) {
        forms += (i == 0 ? "" : ", ") + std::to_string(i) + " " + names[i];
    }
    cheats.add_bool_option(kPommyModifier, "Pommy Modifier",
        "Changes which form Pommy takes. Pick the form below.", false);
    cheats.add_number_option(kPommyForm, "Pommy Form",
        "Which form Pommy takes: " + forms + ".",
        0, static_cast<double>(names.size() - 1), 1, 0, false, 0);
    cheats.add_option_hidden_dependency(kPommyForm, kPommyModifier, false);
    for (const char* id : { kPommyModifier, kPommyForm }) {
        cheats.add_option_change_callback(id,
            [&cheats](ConfigValueVariant, ConfigValueVariant, OptionChangeContext) {
                push_pommy(cheats);
            });
    }

    // A one-shot action rather than a code: the config has no button, so this
    // toggle applies the unlock and turns itself back off.
    cheats.add_bool_option(kUnlockParts, "Unlock All Custom Parts",
        "Switch on to mark every Custom Bomberman part as owned, including the ones "
        "hidden in the stages. It happens once; save the game to keep them.",
        false);
    cheats.add_option_change_callback(kUnlockParts,
        [&cheats](ConfigValueVariant current, ConfigValueVariant, OptionChangeContext) {
            if (std::get<bool>(current)) {
                bm64::cheats::unlock_custom_parts();
                cheats.update_option_value(kUnlockParts, false);
            }
        });

    cheats.add_enum_option(kTestMap, "Test Map Warp",
        "Unused developer maps. Enter Story Mode and hold <recomp-color primary>L + R</recomp-color> "
        "to warp to the chosen map.",
        {
            { TestMap::Off, "Off", "Off" },
            { TestMap::Slope, "Slope", "Slope" },
            { TestMap::Checkerboard, "Checkerboard", "Checkerboard" },
        },
        TestMap::Off);
    cheats.add_option_change_callback(kTestMap,
        [](ConfigValueVariant current, ConfigValueVariant, OptionChangeContext) {
            bm64::cheats::set_test_map(static_cast<int>(std::get<uint32_t>(current)));
        });
}

// Keyboard defaults match the map this port shipped before the Controls tab
// existed, so existing muscle memory still works until the user remaps.
void set_control_defaults() {
    using recompinput::InputField;
    using recompinput::GameInput;
    recompinput::set_default_mapping_for_keyboard(GameInput::A, { InputField::keyboard(SDL_SCANCODE_X) });
    recompinput::set_default_mapping_for_keyboard(GameInput::B, { InputField::keyboard(SDL_SCANCODE_Z) });
    recompinput::set_default_mapping_for_keyboard(GameInput::Z, { InputField::keyboard(SDL_SCANCODE_C) });
    recompinput::set_default_mapping_for_keyboard(GameInput::START, { InputField::keyboard(SDL_SCANCODE_RETURN) });
    recompinput::set_default_mapping_for_keyboard(GameInput::L, { InputField::keyboard(SDL_SCANCODE_Q) });
    recompinput::set_default_mapping_for_keyboard(GameInput::R, { InputField::keyboard(SDL_SCANCODE_E) });
    recompinput::set_default_mapping_for_keyboard(GameInput::C_UP, { InputField::keyboard(SDL_SCANCODE_I) });
    recompinput::set_default_mapping_for_keyboard(GameInput::C_DOWN, { InputField::keyboard(SDL_SCANCODE_K) });
    recompinput::set_default_mapping_for_keyboard(GameInput::C_LEFT, { InputField::keyboard(SDL_SCANCODE_J) });
    recompinput::set_default_mapping_for_keyboard(GameInput::C_RIGHT, { InputField::keyboard(SDL_SCANCODE_L) });
    recompinput::set_default_mapping_for_keyboard(GameInput::DPAD_UP, { InputField::keyboard(SDL_SCANCODE_W) });
    recompinput::set_default_mapping_for_keyboard(GameInput::DPAD_DOWN, { InputField::keyboard(SDL_SCANCODE_S) });
    recompinput::set_default_mapping_for_keyboard(GameInput::DPAD_LEFT, { InputField::keyboard(SDL_SCANCODE_A) });
    recompinput::set_default_mapping_for_keyboard(GameInput::DPAD_RIGHT, { InputField::keyboard(SDL_SCANCODE_D) });
    recompinput::set_default_mapping_for_keyboard(GameInput::X_AXIS_NEG, { InputField::keyboard(SDL_SCANCODE_LEFT) });
    recompinput::set_default_mapping_for_keyboard(GameInput::X_AXIS_POS, { InputField::keyboard(SDL_SCANCODE_RIGHT) });
    recompinput::set_default_mapping_for_keyboard(GameInput::Y_AXIS_POS, { InputField::keyboard(SDL_SCANCODE_UP) });
    recompinput::set_default_mapping_for_keyboard(GameInput::Y_AXIS_NEG, { InputField::keyboard(SDL_SCANCODE_DOWN) });
}

void set_control_descriptions() {
    using recompinput::GameInput;
    recompinput::set_game_input_description(GameInput::Y_AXIS_POS, "Move.");
    recompinput::set_game_input_description(GameInput::Y_AXIS_NEG, "Move.");
    recompinput::set_game_input_description(GameInput::X_AXIS_NEG, "Move.");
    recompinput::set_game_input_description(GameInput::X_AXIS_POS, "Move.");
    recompinput::set_game_input_description(GameInput::A, "Places a bomb.");
    recompinput::set_game_input_description(GameInput::B, "Kicks a bomb.");
    recompinput::set_game_input_description(GameInput::Z, "Pumps a bomb.");
    recompinput::set_game_input_description(GameInput::L, "Rotates the camera.");
    recompinput::set_game_input_description(GameInput::R, "Rotates the camera.");
    recompinput::set_game_input_description(GameInput::START, "Pauses the game.");
    recompinput::set_game_input_description(GameInput::C_UP, "Looks up.");
    recompinput::set_game_input_description(GameInput::C_DOWN, "Looks down.");
    recompinput::set_game_input_description(GameInput::C_LEFT, "Looks left.");
    recompinput::set_game_input_description(GameInput::C_RIGHT, "Looks right.");
    recompinput::set_game_input_description(GameInput::DPAD_UP, "Camera / menus.");
    recompinput::set_game_input_description(GameInput::DPAD_DOWN, "Camera / menus.");
    recompinput::set_game_input_description(GameInput::DPAD_LEFT, "Camera / menus.");
    recompinput::set_game_input_description(GameInput::DPAD_RIGHT, "Camera / menus.");
}

// Pushes the values loaded by finalize() into the cheat engine; the change
// callbacks only fire for edits made after that.

void apply_saved_cheats() {
    recomp::config::Config& cheats = recompui::config::get_config(kCheatsId);
    for (const bm64::cheats::Cheat& cheat : bm64::cheats::builtin()) {
        bm64::cheats::set_enabled(cheat.id, std::get<bool>(cheats.get_option_value(cheat.id)));
    }
    push_pommy(cheats);
    bm64::cheats::set_test_map(static_cast<int>(std::get<uint32_t>(cheats.get_option_value(kTestMap))));
}

}

void bm64::config::init() {
    recompui::config::GeneralTabOptions general_options{};
    general_options.has_rumble_strength = true;
    general_options.has_gyro_sensitivity = false;
    general_options.has_mouse_sensitivity = false;
    recomp::config::Config& general = recompui::config::create_general_tab(general_options);
    add_accessory_option(general);
    recomp::config::Config& graphics = recompui::config::create_graphics_tab();
    add_widescreen_option(graphics);

    // Single-player ORs every connected pad into player 1, the same as
    // battle-tanx-recomp. Must be set before the Controls tab is built.
    recompinput::players::set_single_player_mode(true);
    set_control_defaults();
    set_control_descriptions();
    recompui::config::create_controls_tab();

    recomp::config::Config& sound = recompui::config::create_sound_tab();
    sound.add_option_change_callback(
        recompui::config::sound::options::main_volume,
        [](recomp::config::ConfigValueVariant current,
           recomp::config::ConfigValueVariant,
           recomp::config::OptionChangeContext) {
            bm64::audio::set_volume(static_cast<int>(std::get<double>(current)));
        });

    create_cheats_tab();

    recompui::config::finalize();

    apply_saved_cheats();
    apply_accessory(recompui::config::get_general_config().get_option_value(kAccessory));

    // Apply the persisted widescreen settings now that the graphics config is loaded.
    apply_widescreen(recompui::config::get_graphics_config().get_option_value(kWidescreen));
    apply_aspect_mode(recompui::config::get_graphics_config().get_option_value(
        recompui::config::graphics::options::ar_option));

    // Apply the persisted volume now that the config has been loaded.
    bm64::audio::set_volume(static_cast<int>(recompui::config::sound::get_main_volume()));
}

#endif
