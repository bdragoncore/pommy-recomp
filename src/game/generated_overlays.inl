// Module image table, generated from overlay/overlays.json and
// overlay/functions.json. Do not edit.
//
// One entry per module image the game can decompress into a TLB window.
// The trampolines in src/game/overlay_switch.cpp look the image up here.
#define BM64_OVERLAY_MAX_PROBES 1

struct Bm64OverlayModule {
    const char* name;       // overlay name
    uint32_t base;          // TLB window the loader maps it into
    uint32_t entry;         // entry point encoded in the header vector
    uint32_t size;          // decompressed content size
    uint32_t rom;           // build-rom offset of the recompiler section
    uint16_t id;            // module id in the game's file directory
    uint16_t num_probes;    // extra words that identify the image
    uint32_t probe_off[BM64_OVERLAY_MAX_PROBES];
    uint32_t probe_val[BM64_OVERLAY_MAX_PROBES];
};

static const Bm64OverlayModule bm64_overlay_modules[] = {
    { "actor_main", 0x40000000, 0x40008CBC, 0x201C0, 0x420000, 0x0A, 0, { 0 }, { 0 } },
    { "item_main", 0x41000000, 0x41000F50, 0x71E0, 0x4401C0, 0x0B, 0, { 0 }, { 0 } },
    { "blast_light", 0x42000000, 0x42002B48, 0x42B0, 0x4473A0, 0x45, 1, { 0x8 }, { 0x24422B48 } },
    { "blast_dark", 0x42000000, 0x42002B98, 0x4730, 0x44B660, 0x46, 1, { 0x8 }, { 0x24422B98 } },
    { "blast_elec", 0x42000000, 0x42002C20, 0x4460, 0x44FDA0, 0x44, 1, { 0x8 }, { 0x24422C20 } },
    { "blast_flame", 0x42000000, 0x42002CFC, 0x3660, 0x454200, 0x40, 1, { 0x8 }, { 0x24422CFC } },
    { "blast_ground", 0x42000000, 0x42002DE8, 0x4710, 0x457860, 0x43, 1, { 0x8 }, { 0x24422DE8 } },
    { "blast_ice", 0x42000000, 0x42002F3C, 0x3FC0, 0x45BF80, 0x41, 1, { 0x8 }, { 0x24422F3C } },
    { "blast_wind", 0x42000000, 0x42002F70, 0x44B0, 0x45FF40, 0x42, 1, { 0x8 }, { 0x24422F70 } },
    { "boss_demon", 0x43000000, 0x43000F50, 0xA7F0, 0x464400, 0x60, 1, { 0x1FE0 }, { 0xC7AC0030 } },
    { "boss_devil", 0x43000000, 0x43000F50, 0xB7A0, 0x46EC00, 0x61, 1, { 0x1FE0 }, { 0x0CC00777 } },
    { "boss_angel", 0x43000000, 0x43000F50, 0xBFF0, 0x47A3A0, 0x62, 1, { 0x1FE0 }, { 0x00000000 } },
    { "enemy_world1", 0x43000000, 0x43008B40, 0xA780, 0x4863A0, 0x50, 1, { 0x1FE0 }, { 0x8F399E00 } },
    { "enemy_world2", 0x43000000, 0x43008B40, 0xA920, 0x490B20, 0x51, 1, { 0x1FE0 }, { 0x8F399FD0 } },
    { "enemy_world3", 0x43000000, 0x43008B40, 0xA610, 0x49B440, 0x52, 1, { 0x1FE0 }, { 0x8F399CA0 } },
    { "enemy_world4", 0x43000000, 0x43008B40, 0x9F90, 0x4A5A60, 0x53, 1, { 0x1FE0 }, { 0x8F399750 } },
    { "enemy_world5", 0x43000000, 0x43008B40, 0xA280, 0x4AFA00, 0x54, 1, { 0x1FE0 }, { 0x8F399AB0 } },
    { "enemy_world6", 0x43000000, 0x43008B40, 0xA4E0, 0x4B9C80, 0x55, 1, { 0x1FE0 }, { 0x8F399BE0 } },
    { "enemy_world7", 0x43000000, 0x43008B40, 0xA290, 0x4C4160, 0x56, 1, { 0x1FE0 }, { 0x8F3999E0 } },
    { "enemy_world8", 0x43000000, 0x43008B40, 0xAC70, 0x4CE400, 0x57, 1, { 0x1FE0 }, { 0x8F39A230 } },
    { "enemy_battle", 0x43000000, 0x43008B40, 0x98A0, 0x4D9080, 0x58, 1, { 0x1FE0 }, { 0x8F399080 } },
    { "coll_main", 0x44000000, 0x44001E14, 0x6D20, 0x4E2920, 0x0E, 0, { 0 }, { 0 } },
    { "mobj_main", 0x45000000, 0x45003F00, 0x12CF0, 0x4E9640, 0x0F, 0, { 0 }, { 0 } },
    { "demo_guide", 0x60000000, 0x60001A74, 0x1D00, 0x4FC340, 0x2B, 1, { 0x8 }, { 0x24421A74 } },
    { "menu_file", 0x60000000, 0x60001CDC, 0x3360, 0x4FE040, 0x1B, 1, { 0x8 }, { 0x24421CDC } },
    { "menu_card", 0x60000000, 0x60001D9C, 0x3740, 0x5013A0, 0x19, 1, { 0x8 }, { 0x24421D9C } },
    { "menu_custom", 0x60000000, 0x60002558, 0x5730, 0x504AE0, 0x1F, 1, { 0x8 }, { 0x24422558 } },
    { "menu_stage", 0x60000000, 0x60002A98, 0x6930, 0x50A220, 0x1D, 1, { 0x8 }, { 0x24422A98 } },
    { "menu_title", 0x60000000, 0x60002E5C, 0x49C0, 0x510B60, 0x1A, 1, { 0x8 }, { 0x24422E5C } },
    { "stage_world5", 0x60000000, 0x60003710, 0x3C30, 0x515520, 0x26, 1, { 0x8 }, { 0x24423710 } },
    { "menu_battle", 0x60000000, 0x60003808, 0xC040, 0x519160, 0x1C, 1, { 0x8 }, { 0x24423808 } },
    { "stage_world1", 0x60000000, 0x60003DD4, 0x4210, 0x5251A0, 0x22, 1, { 0x8 }, { 0x24423DD4 } },
    { "stage_world6", 0x60000000, 0x600056A0, 0x65E0, 0x5293C0, 0x27, 1, { 0x8 }, { 0x244256A0 } },
    { "stage_world7", 0x60000000, 0x600056A4, 0x5B50, 0x52F9A0, 0x28, 1, { 0x8 }, { 0x244256A4 } },
    { "stage_world2", 0x60000000, 0x600056B8, 0x5CB0, 0x535500, 0x23, 1, { 0x8 }, { 0x244256B8 } },
    { "stage_world3", 0x60000000, 0x600062F4, 0x6AA0, 0x53B1C0, 0x24, 1, { 0x8 }, { 0x244262F4 } },
    { "demo_story", 0x60000000, 0x6000681C, 0x7A00, 0x541C60, 0x20, 1, { 0x8 }, { 0x2442681C } },
    { "stage_world4", 0x60000000, 0x60006D8C, 0x7530, 0x549660, 0x25, 1, { 0x8 }, { 0x24426D8C } },
    { "stage_world8", 0x60000000, 0x60008F38, 0x9810, 0x550BA0, 0x29, 1, { 0x8 }, { 0x24428F38 } },
};

static const uint32_t bm64_overlay_window_bases[] = {
    0x40000000,  // actor_main
    0x41000000,  // item_main
    0x42000000,  // blast_light, blast_dark, blast_elec, blast_flame, blast_ground, blast_ice, blast_wind
    0x43000000,  // boss_demon, boss_devil, boss_angel, enemy_world1, enemy_world2, enemy_world3, enemy_world4, enemy_world5, enemy_world6, enemy_world7, enemy_world8, enemy_battle
    0x44000000,  // coll_main
    0x45000000,  // mobj_main
    0x60000000,  // demo_guide, menu_file, menu_card, menu_custom, menu_stage, menu_title, stage_world5, menu_battle, stage_world1, stage_world6, stage_world7, stage_world2, stage_world3, demo_story, stage_world4, stage_world8
};
