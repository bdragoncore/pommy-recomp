# Bomberman 64: The Second Attack! Recompiled

[Bomberman 64: The Second Attack! Recompiled](https://github.com/bdragoncore/pommy-recomp) is a project that uses [N64: Recompiled](https://github.com/N64Recomp/N64Recomp) to **statically recompile** Bomberman 64: The Second Attack! into a native port with widescreen support, launcher cheats and mod support. This project uses [RT64](https://github.com/rt64/rt64) as the rendering engine.

This is an unofficial fan project and is not affiliated with the rights holders.

### **This repository and its releases do not contain game assets. The original game is required to build or run this project.**

## Table of Contents
* [System Requirements](#system-requirements)
* [Features](#features)
  * [Plug and Play](#plug-and-play)
  * [Fully Intact N64 Effects](#fully-intact-n64-effects)
  * [Easy-to-Use Menus](#easy-to-use-menus)
  * [Widescreen](#widescreen)
  * [Cheats](#cheats)
  * [Mod Support](#mod-support)
  * [Fast Load Times](#fast-load-times)
* [Controls](#controls)
* [FAQ](#faq)
* [Known Issues](#known-issues)
* [Building](#building)
* [Libraries Used and Projects Referenced](#libraries-used-and-projects-referenced)
* [Special Thanks](#special-thanks)
* [License](#license)

## System Requirements
The project currently provides a **Linux** build for x86-64; Windows is not supported. A GPU supporting Vulkan 1.2 is required. The oldest GPUs that should be supported are:
* GeForce GT 630
* Radeon HD 7750 (the one from 2012, not to be confused with the RX 7000 series) and newer
* Intel HD 510 (Skylake)

On x86-64, a CPU supporting the SSE4.1 instruction set is also required (Intel Core 2 Penryn series or AMD Bulldozer and newer).

If you have issues with crashes on startup, make sure your graphics drivers are fully up to date.

## Features

#### Plug and Play
Provide your copy of the US 2.0 version of the game in the launcher and start playing. The port loads assets from the provided copy, so there is no separate extraction or build step. The dump must be a `.z64` file with SHA-1 `66b1fd763793ecc6e03aa6c5d023df8de5351b9e`.

#### Fully Intact N64 Effects
RT64 renders the game's display lists, so the original effects are intact. The RT64 fork adds the game's sprite path and a small viewport fix; the display lists are unmodified apart from the widescreen projection and the tags that let frame interpolation follow each model part.

#### Easy-to-Use Menus
Graphics, audio, cheats and mods are configured in the launcher and the in-game settings menu, opened with **Escape**. The menus can be used with the mouse, keyboard or controller.

#### Widescreen
The **Widescreen** switch on the Graphics tab widens the 3D view to the window's aspect ratio, while the 2D layer keeps its original 4:3 framing and the HUD stays centered. It only takes effect while the stock **Aspect Ratio** option is set to **Expand**. Some full-screen 2D art was drawn for 4:3; see [Known Issues](#known-issues).

#### Cheats
The **Cheats** tab has the game's published GameShark codes, so you don't have to enter them on the Code Entry screen. It also has Pommy's forms, the two unused test maps and an Unlock All Custom Parts action. The built-in cheats are applied while they are enabled.

#### Mod Support
Install community mods and texture packs through the launcher's mods menu. Mods can change the game or add new content; texture packs follow [RT64's texture pack format](https://github.com/rt64/rt64/blob/main/TEXTURE-PACKS.md).

#### Fast Load Times
Loading and saving are faster than on the original hardware, and the game runs natively on the host CPU.

## Controls
The port uses a fixed keyboard and gamepad mapping; the Controls tab is hidden.

| N64 | Keyboard | Gamepad |
| --- | --- | --- |
| Control stick | Arrow keys | Left stick |
| D-pad | W A S D | D-pad |
| A | X | A |
| B | Z | B |
| C buttons | I / J / K / L (up / down / left / right) | Right stick |
| L | Q | Left shoulder |
| R | E | Right shoulder |
| Z | C | Y or left trigger |
| Start | Enter | Start |

## FAQ

#### What is static recompilation?
Static recompilation is the process of automatically translating an application from one platform to another. For more details, see [N64: Recompiled](https://github.com/N64Recomp/N64Recomp).

#### How is this related to the decompilation project?
This port is not built from decompiled source; the game's code is recompiled from the ROM. The [Bomberman 64: The Second Attack! decompilation](https://github.com/Bomberhackers/TSA) was used as a reference for the game's function layout and for some of the patch work. Many thanks to the decompilation team.

#### Where is the savefile stored?
The port writes saves to a `saves` folder in the working directory and its settings to JSON files next to it. If you build with [BUILDING.md](BUILDING.md) or run the `.tar.gz` release, that is the game's folder. The AppImage uses `~/.config/bm64u2`, or the directory you launch it from when a `portable.txt` file is there.

#### How do I choose a different ROM?
**You don't.** This project is only a port of Bomberman 64: The Second Attack! and only accepts the US 2.0 `.z64` release with SHA-1 `66b1fd763793ecc6e03aa6c5d023df8de5351b9e`. It is not an emulator and cannot run arbitrary ROMs. To change the game, install mods.

## Known Issues
* In widescreen, full-screen 2D art (such as the title screen backdrop) was drawn for 4:3 and shows the clear color at the sides. The 3D view and HUD are unaffected.

## Building
Building instructions can be found in [BUILDING.md](BUILDING.md).

## Libraries Used and Projects Referenced
* [N64Recomp](https://github.com/N64Recomp/N64Recomp) and [N64ModernRuntime](https://github.com/N64Recomp/N64ModernRuntime) for the static recompilation and runtime
* [RT64](https://github.com/rt64/rt64) for the rendering engine, with the widescreen changes in [pommy-recomp-rt64](https://github.com/bdragoncore/pommy-recomp-rt64)
* [RecompFrontend](https://github.com/N64Recomp/RecompFrontend) for the launcher and settings menu
* [RmlUi](https://github.com/mikke89/RmlUi) for the menus, with [lunasvg](https://github.com/sammycage/lunasvg) and [FreeType](https://freetype.org/)
* [moodycamel::ConcurrentQueue](https://github.com/cameron314/concurrentqueue) for queues and semaphores
* [Gamepad Motion Helpers](https://github.com/JibbSmart/GamepadMotionHelpers) for controller sensor handling
* [PromptFont](https://github.com/Shinmera/promptfont) for the controller glyphs
* [Bomberman 64: The Second Attack! decompilation](https://github.com/Bomberhackers/TSA) for reference on function boundaries and symbols
* [Ares](https://github.com/ares-emulator/ares) for the RSP vector reference used by RSPRecomp

## Special Thanks
* [Wiseguy](https://github.com/Mr-Wiseguy) and [DarioSamo](https://github.com/DarioSamo) for N64Recomp, RT64 and their help along the way.
* The [Bomberman 64: The Second Attack! decompilation team](https://github.com/Bomberhackers/TSA) for the reverse engineering this port builds on.

## License
The project's own code is GPL-3.0; see [COPYING](COPYING). `RecompiledFuncs/` and the executable contain the game's code, recompiled from a dump; the ROM is not included, and the game itself remains the property of its rights holders.
