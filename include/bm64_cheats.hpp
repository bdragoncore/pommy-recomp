#pragma once

#include <cstdint>
#include <string>
#include <vector>

// GameShark-style cheats. The codes run once per game frame from the scheduler
// patch (patches/scheduler.c) before the process list is stepped, so every
// process sees the patched values. The built-in table holds the published US
// codes; each can be switched on from the Cheats tab.
namespace bm64::cheats {
    struct Cheat {
        const char* id;
        const char* name;
        const char* description;
        const char* codes;
    };

    // The built-in codes, in the order the Cheats tab lists them.
    const std::vector<Cheat>& builtin();

    // Pommy's forms for the Pommy Modifier (index = value written).
    const std::vector<const char*>& pommy_forms();

    void set_enabled(const std::string& id, bool enabled);
    void set_pommy_form(int form);      // -1 disables the modifier
    void set_test_map(int map);         // 0 disables, otherwise 0x08 or 0x09
    void set_custom_codes(const std::string& codes);
    // Marks every Custom Bomberman part as owned, once, on the next game
    // frame. The game saves the result like a part bought in the shop.
    void unlock_custom_parts();

}
