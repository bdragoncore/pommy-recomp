#!/usr/bin/env python3
"""Write the ROM image N64Recomp reads to generate RecompiledFuncs.

The game's code modules are stored compressed in the ROM and only
decompressed when the game loads them, but the recompiler needs their
instructions. This copies the ROM and writes each module, decompressed from
it, at the offset bm64u2.us.toml's symbol file gives the module's section.

    python3 make_build_rom.py <your ROM>.z64

writes bomberman64u2.build.z64 next to this script. Only N64Recomp reads it;
the game itself runs from the ROM you pick in the launcher.
"""
import sys
from pathlib import Path

import rom_overlays


def overlays(retail):
    """(rom offset, name, image) for every module section."""
    return [(entry["rom"], entry["name"], entry["image"])
            for entry in rom_overlays.overlay_modules(retail)]


def main() -> int:
    base = Path(__file__).resolve().parent
    retail = Path(sys.argv[1]) if len(sys.argv) > 1 else next(
        (p for p in (base / "bomberman64u2.z64", base.parent / "baserom.z64")
         if p.is_file()),
        base / "bomberman64u2.z64",
    )
    out = Path(sys.argv[2]) if len(sys.argv) > 2 else base / "bomberman64u2.build.z64"
    if not retail.is_file():
        print("usage: make_build_rom.py <Bomberman 64: The Second Attack (US) ROM>.z64")
        return 2

    data = bytearray(retail.read_bytes())
    for offset, name, image in overlays(retail):
        end = offset + len(image)
        if end > len(data):
            print(f"{name} does not fit in ROM (needs {end:#x}, rom is {len(data):#x})")
            return 1
        data[offset:end] = image
        print(f"overlay {name:14s} {len(image):#07x} bytes at {offset:#07x}")

    out.write_bytes(data)
    print(f"Wrote {out} ({len(data)} bytes)")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
