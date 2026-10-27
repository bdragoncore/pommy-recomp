"""Decompress the game's code modules from the retail ROM.

The modules (actors, enemies, bosses, menus, stages, blast effects) are stored
compressed in the ROM's data blocks and only decompressed by the game when it
loads them. The recompiler needs the plain instructions, so the build
decompresses them from the user's ROM; overlay/overlays.json says where each
one lives.

A data block is 64 KB aligned:

    0x0000  header
    0x8008  directory: u8 count, then count * (u16 id, u8 slot)
    after   records in slot order, 2-byte packed:
                u32 content size, u32 bss size, compressed stream

The stream is LZ with a 0x400-byte window that starts zeroed with the write
position at 0x3BE. Each flag byte is read LSB first: 1 is a literal byte, 0 a
back-reference of two bytes b1, b2 with offset b1 | ((b2 & 0xC0) << 2) and
length (b2 & 0x3F) + 3.
"""

import json
import struct
from pathlib import Path

_MAX_SIZE = 0x40000
_MAX_BSS = 0x100000


def decode(rom, off, size):
    """Decompress `size` bytes starting at rom[off]; returns (data, end)."""
    window = bytearray(0x400)
    pos = 0x3BE
    out = bytearray()
    i = off
    flags = 0
    n = len(rom)
    while len(out) < size:
        flags >>= 1
        if not flags & 0x100:
            if i >= n:
                raise ValueError("compressed stream runs past the end of the ROM")
            flags = rom[i] | 0xFF00
            i += 1
        if flags & 1:
            if i >= n:
                raise ValueError("compressed stream runs past the end of the ROM")
            b = rom[i]
            i += 1
            window[pos] = b
            pos = (pos + 1) & 0x3FF
            out.append(b)
        else:
            if i + 1 >= n:
                raise ValueError("compressed stream runs past the end of the ROM")
            b1, b2 = rom[i], rom[i + 1]
            i += 2
            src = b1 | ((b2 & 0xC0) << 2)
            for k in range((b2 & 0x3F) + 3):
                v = window[(src + k) & 0x3FF]
                window[pos] = v
                pos = (pos + 1) & 0x3FF
                out.append(v)
    return bytes(out[:size]), i


def _is_module(image):
    # Every module starts with `lui $v0,hi; jr $ra; addiu $v0,$v0,lo`, which
    # returns its entry point.
    if len(image) < 12:
        return False
    lui, jr, addiu = struct.unpack(">III", image[:12])
    return (lui >> 16) == 0x3C02 and jr == 0x03E00008 and (addiu >> 16) == 0x2442


def _first_record(rom, block):
    count = rom[block + 0x8008]
    dir_end = block + 0x8009 + 3 * count
    # The directory count does not always match the entries listed, so try the
    # packed position and its neighbours and keep the one that decodes to a
    # module.
    candidates = [dir_end + d for d in range(-4, 6) if dir_end + d >= block + 0x8009]
    candidates.sort(key=lambda c: (c & 1, abs(c - dir_end)))
    for c in candidates:
        size, bss = struct.unpack(">II", rom[c:c + 8])
        if not 0 < size < _MAX_SIZE or bss > _MAX_BSS:
            continue
        try:
            head, _ = decode(rom, c + 8, min(size, 0x40))
        except ValueError:
            continue
        if _is_module(head):
            return c
    raise ValueError(f"no records found in the data block at {block:#x}")


def record(rom, block, slot):
    """Decompressed content of record `slot` (1-based) of a data block."""
    off = _first_record(rom, block)
    for current in range(1, slot + 1):
        size, bss = struct.unpack(">II", rom[off:off + 8])
        if not 0 < size < _MAX_SIZE or bss > _MAX_BSS:
            raise ValueError(f"block {block:#x} has no record {slot}")
        data, end = decode(rom, off + 8, size)
        if current == slot:
            return data
        off = end + (end & 1)
    raise ValueError(f"block {block:#x} has no record {slot}")


def module_image(rom, entry):
    """The decompressed image of one overlays.json entry, checked against it."""
    image = record(rom, entry["block"], entry["slot"])
    if len(image) != entry["size"] or not _is_module(image):
        raise ValueError(f"{entry['name']}: the ROM does not hold the expected module "
                         f"(is it the US Bomberman 64: The Second Attack ROM?)")
    return image


# Layout of the build ROM: the retail ROM with each module, decompressed,
# written past 0x411E40, where the retail ROM holds nothing the recompiler
# reads. overlay/overlays.json lists the modules (id, load base, entry point,
# size and where they are stored) and overlay/functions.json their function
# offsets; the symbol file declares one section per module at these offsets.
OVERLAY_DIR = Path(__file__).resolve().parent / "overlay"
OVERLAY_ROM_BASE = 0x420000
OVERLAY_ROM_ALIGN = 0x20

# The TLB windows the game loads modules into. A window holds one module at a
# time, so the runtime swaps sections whenever the game loads another module
# into the same window.
MODULE_WINDOW_BASES = (
    0x40000000,  # actor
    0x41000000,  # item
    0x42000000,  # blast effects (seven)
    0x43000000,  # enemies (nine) and bosses (three)
    0x44000000,  # collision
    0x45000000,  # map objects
    0x60000000,  # menus (six), demos (two), stages (eight)
)


def overlay_modules(retail_rom):
    """Every module with its build ROM offset, function offsets and image."""
    manifest = json.loads((OVERLAY_DIR / "overlays.json").read_text())
    functions = json.loads((OVERLAY_DIR / "functions.json").read_text())
    rom_bytes = Path(retail_rom).read_bytes()

    modules = []
    rom = OVERLAY_ROM_BASE
    for entry in sorted(manifest, key=lambda o: (o["base"], o["entry"])):
        name = entry["name"]
        try:
            image = module_image(rom_bytes, entry)
        except ValueError as err:
            raise SystemExit(str(err))
        if entry["base"] not in MODULE_WINDOW_BASES:
            raise SystemExit(f"{name}: unexpected load base {entry['base']:#x}")
        if not 0 <= entry["entry"] - entry["base"] < entry["size"]:
            raise SystemExit(f"{name}: entry {entry['entry']:#x} is outside the image")
        info = functions.get(name)
        if info is None:
            raise SystemExit(f"{name}: overlay/functions.json has no entry")
        offsets = sorted(set(info["functions"]))
        if not offsets or offsets[0] != 0:
            raise SystemExit(f"{name}: function list must start at offset 0")
        if any(off < 0 or off + 4 > len(image) for off in offsets):
            raise SystemExit(f"{name}: function offset outside the image")

        modules.append({
            **entry,
            "rom": rom,
            "offsets": offsets,
            "code_end": info["code_end"],
            "image": image,
        })
        rom += (entry["size"] + OVERLAY_ROM_ALIGN - 1) & ~(OVERLAY_ROM_ALIGN - 1)

    if rom > 0x1000000:
        raise SystemExit(f"overlay images end at {rom:#x}, past the 16 MB ROM")
    return modules
