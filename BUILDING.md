# Building Guide

This guide will help you build the project on your local machine. The game's
recompiled code is checked in as `RecompiledFuncs/`, so building needs no ROM;
you pick your US 2.0 dump in the launcher when you play. CI builds the same
packages for Linux x64 and ARM64, Windows and macOS.

Regenerating `RecompiledFuncs/` (step 4) is only needed after changing
`bm64u2.us.toml` or `dump.toml`, and that step does need the ROM.

## 1. Clone the repository

This project makes use of submodules, so clone it with `--recurse-submodules`.

```bash
git clone --recurse-submodules https://github.com/bdragoncore/pommy-recomp
# if you forgot the flag:
# cd pommy-recomp && git submodule update --init --recursive
```

## 2. Install dependencies

### Linux

The instructions for Ubuntu are provided; use the equivalent packages for your
distribution.

```bash
sudo apt-get install cmake ninja-build make libsdl2-dev libgtk-3-dev libfreetype-dev libvulkan-dev lld llvm clang
```

### Windows

Install CMake, Ninja, Make, and LLVM 19 (clang and ld.lld). The MIPS patches
need a `make` that can run the existing Makefile, and `clang -target mips`.

### macOS

```bash
brew install cmake ninja sdl2 freetype llvm lld
```

Apple clang is fine for the host build. The MIPS patches need Homebrew `clang`
and `ld.lld` (`lld` is a separate formula).

## 3. Obtain the ROM (only to regenerate the code)

You need the US 2.0 N64 release of Bomberman 64: The Second Attack! (SHA-1
`66b1fd763793ecc6e03aa6c5d023df8de5351b9e`), as a `.z64` file. Put it in the
repository root as:

```
bomberman64u2.z64
```

## 4. Regenerate the C code (optional)

The game's code modules are stored compressed in the ROM, so decompress them
into a build image first:

```bash
python3 make_build_rom.py bomberman64u2.z64
```

This writes `bomberman64u2.build.z64`, which only the recompiler reads.

Build N64Recomp from the submodule:

```bash
cmake -S N64ModernRuntime/N64Recomp -B n64recomp-build -G Ninja -DCMAKE_BUILD_TYPE=Release
cmake --build n64recomp-build --target N64RecompCLI -j "$(nproc)"
```

Then generate the game code from the repository root:

```bash
./n64recomp-build/N64Recomp bm64u2.us.toml
```

The toml file lists the functions to stub or ignore and the instruction patches
for this game; `dump.toml` supplies the function boundaries. Commit the
regenerated `RecompiledFuncs/`.

The RSP microcode is already recompiled in `rsp/aspMain.cpp`, so you don't need
RSPRecomp.

## 5. Build the project

```bash
cmake -S . -B build-cmake -G Ninja -DCMAKE_BUILD_TYPE=Release -DCMAKE_C_COMPILER=clang -DCMAKE_CXX_COMPILER=clang++
cmake --build build-cmake -j "$(nproc)"
```

The build also compiles the patches in `patches/` for MIPS and links the
recompiled result into the executable.

## 6. Run it

You should now have a `BM64U2Recompiled` executable in the build directory. Run
it from the build directory (the launcher and the game write their configuration
and saves there) and pick your ROM in the launcher:

```bash
cd build-cmake && ./BM64U2Recompiled --game bm64u2
```

> [!IMPORTANT]
> Use your original `bomberman64u2.z64` in the launcher, not
> `bomberman64u2.build.z64`. The build image is only for the recompiler.

## Release packages

`.github/linux/release.sh` builds the Linux AppImage and `.tar.gz` the way the
CI makes them. It runs the steps above inside an `ubuntu:22.04` container, so
the packages only need glibc 2.35. It needs podman or docker; pass the ROM as
well to regenerate the code first:

```bash
.github/linux/release.sh v1.0.0 [path/to/bomberman64u2.z64]
```

The packages and their SHA-256 sums go to `out/`, and the build trees to
`build-release/`.
