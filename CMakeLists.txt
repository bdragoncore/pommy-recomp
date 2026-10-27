cmake_minimum_required(VERSION 3.20)

# APPLE is not set until after project(); the host name is.
if(CMAKE_HOST_SYSTEM_NAME STREQUAL "Darwin")
    project(BM64U2Recompiled LANGUAGES C CXX OBJC OBJCXX)
else()
    project(BM64U2Recompiled LANGUAGES C CXX)
endif()

set(CMAKE_C_STANDARD 17)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

if (CMAKE_VERSION VERSION_GREATER_EQUAL "3.24.0")
    cmake_policy(SET CMP0135 NEW)
endif()

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

# --- RT64 (static, Vulkan on Linux; D3D12 on Windows, Metal on macOS) ---
set(RT64_STATIC TRUE)
if(CMAKE_SYSTEM_NAME MATCHES "Linux")
    set(RT64_SDL_WINDOW_VULKAN TRUE)
else()
    set(RT64_SDL_WINDOW_VULKAN FALSE)
endif()
add_compile_definitions(HLSL_CPU)

add_subdirectory(lib/rt64 ${CMAKE_BINARY_DIR}/rt64)

# --- N64ModernRuntime (librecomp + ultramodern + N64Recomp) ---
add_subdirectory(N64ModernRuntime)

# --- RecompiledFuncs ---
# clang-cl wants /FI; GNU clang wants -include.
if(MSVC)
    set(BM64_FORCE_INCLUDE /FI ${CMAKE_CURRENT_SOURCE_DIR}/include/bm64_recomp_defs.h)
else()
    set(BM64_FORCE_INCLUDE -include ${CMAKE_CURRENT_SOURCE_DIR}/include/bm64_recomp_defs.h)
endif()
# Windows maps views only at 64 KB boundaries, too coarse for the game's TLB
# pages, so the memory macros translate TLB addresses there instead
# (src/main/tlb.cpp). Elsewhere the windows are host mappings.
if(WIN32)
    set(BM64_SOFT_TLB_DEFAULT ON)
else()
    set(BM64_SOFT_TLB_DEFAULT OFF)
endif()
option(BM64_SOFT_TLB "Translate TLB addresses in software instead of mapping them" ${BM64_SOFT_TLB_DEFAULT})
if(BM64_SOFT_TLB)
    add_compile_definitions(BM64_SOFT_TLB)
endif()

add_library(RecompiledFuncs STATIC)
target_compile_options(RecompiledFuncs PRIVATE
    ${BM64_FORCE_INCLUDE}
    -fno-strict-aliasing
    -Wno-unused-variable
    -Wno-unused-but-set-variable
    -Wno-implicit-function-declaration
    -g
)

target_include_directories(RecompiledFuncs PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    ${CMAKE_CURRENT_SOURCE_DIR}/N64ModernRuntime/ultramodern/include
    ${CMAKE_CURRENT_SOURCE_DIR}/N64ModernRuntime/librecomp/include
    ${CMAKE_CURRENT_SOURCE_DIR}/N64ModernRuntime/N64Recomp/include
)
file(GLOB FUNC_C_SOURCES CONFIGURE_DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/RecompiledFuncs/*.c)
file(GLOB FUNC_CXX_SOURCES CONFIGURE_DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/RecompiledFuncs/*.cpp)

if (NOT FUNC_C_SOURCES AND NOT FUNC_CXX_SOURCES)
    # The game code is generated from the ROM, which is not shipped, so a fresh
    # clone has none. Keep an empty placeholder so the libraries and patches
    # still build; the executable needs the generated sources from N64Recomp.
    message(STATUS "RecompiledFuncs/ is empty - building without the recompiled game code.")
    file(WRITE ${CMAKE_BINARY_DIR}/recompiled_funcs_placeholder.c "")
    set(FUNC_C_SOURCES ${CMAKE_BINARY_DIR}/recompiled_funcs_placeholder.c)
endif()

target_sources(RecompiledFuncs PRIVATE ${FUNC_C_SOURCES} ${FUNC_CXX_SOURCES})

# --- RecompiledPatches: N64Recomp patch mode ---
# Game patches are authored in patches/*.c, built into a MIPS ELF, recompiled
# by N64Recomp (patches.toml), then linked into PatchesLib. PatchesLib is placed
# before RecompiledFuncs so the patch definitions win (see the link line below).
set(BM64_PATCH_DIR ${CMAKE_CURRENT_SOURCE_DIR}/patches)
set(BM64_RECOMPILED_PATCH_DIR ${CMAKE_CURRENT_SOURCE_DIR}/RecompiledPatches)
file(GLOB BM64_PATCH_SOURCES CONFIGURE_DEPENDS
    ${BM64_PATCH_DIR}/*.c
    ${BM64_PATCH_DIR}/*.h
)
if(WIN32)
    find_program(BM64_MAKE_EXECUTABLE NAMES make gmake mingw32-make)
    if(NOT BM64_MAKE_EXECUTABLE)
        message(FATAL_ERROR "make is required to build the MIPS patches")
    endif()
else()
    find_program(BM64_MAKE_EXECUTABLE NAMES make gmake REQUIRED)
endif()

add_custom_command(
    OUTPUT ${BM64_PATCH_DIR}/patches.elf
    COMMAND ${BM64_MAKE_EXECUTABLE} -C ${BM64_PATCH_DIR} CC=clang LD=ld.lld
    DEPENDS
        ${BM64_PATCH_SOURCES}
        ${BM64_PATCH_DIR}/Makefile
        ${BM64_PATCH_DIR}/patches.ld
        ${BM64_PATCH_DIR}/syms.ld
    COMMENT "Building recomp patch ELF"
    VERBATIM
)

add_custom_command(
    OUTPUT
        ${BM64_PATCH_DIR}/patches.bin
        ${BM64_RECOMPILED_PATCH_DIR}/patches.c
        ${BM64_RECOMPILED_PATCH_DIR}/funcs.h
        ${BM64_RECOMPILED_PATCH_DIR}/recomp_overlays.inl
    COMMAND $<TARGET_FILE:N64RecompCLI> patches.toml
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
    DEPENDS
        ${BM64_PATCH_DIR}/patches.elf
        ${CMAKE_CURRENT_SOURCE_DIR}/patches.toml
        ${CMAKE_CURRENT_SOURCE_DIR}/dump.toml
        N64RecompCLI
    COMMENT "Recompiling patch ELF"
    VERBATIM
)

add_custom_command(
    OUTPUT
        ${BM64_RECOMPILED_PATCH_DIR}/patches_bin.c
        ${BM64_RECOMPILED_PATCH_DIR}/patches_bin.h
    COMMAND $<TARGET_FILE:file_to_c>
        ${BM64_PATCH_DIR}/patches.bin
        bm64_patches_bin
        ${BM64_RECOMPILED_PATCH_DIR}/patches_bin.c
        ${BM64_RECOMPILED_PATCH_DIR}/patches_bin.h
    DEPENDS ${BM64_PATCH_DIR}/patches.bin file_to_c
    COMMENT "Embedding patch binary"
    VERBATIM
)

add_library(PatchesLib STATIC)
target_compile_options(PatchesLib PRIVATE
    ${BM64_FORCE_INCLUDE}
    -fno-strict-aliasing
    -Wno-unused-variable
    -Wno-unused-but-set-variable
    -Wno-implicit-function-declaration
    -g
)
target_include_directories(PatchesLib PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    ${CMAKE_CURRENT_SOURCE_DIR}/patches
    ${CMAKE_CURRENT_SOURCE_DIR}/N64ModernRuntime/ultramodern/include
    ${CMAKE_CURRENT_SOURCE_DIR}/N64ModernRuntime/librecomp/include
    ${CMAKE_CURRENT_SOURCE_DIR}/N64ModernRuntime/N64Recomp/include
)
target_sources(PatchesLib PRIVATE
    ${BM64_RECOMPILED_PATCH_DIR}/patches.c
    ${BM64_RECOMPILED_PATCH_DIR}/patches_bin.c
)

# --- RecompFrontend (recompui + recompinput): the shared N64: Recompiled UI ---
set(BM64_RECOMP_UI_DIR ${CMAKE_CURRENT_SOURCE_DIR}/lib/RecompFrontend)
option(BM64_RECOMP_UI "Build the RecompFrontend in-game UI (launcher + settings menu)" ON)
if(BM64_RECOMP_UI AND EXISTS ${BM64_RECOMP_UI_DIR}/CMakeLists.txt)
    set(BM64_RECOMP_UI_AVAILABLE ON)
else()
    set(BM64_RECOMP_UI_AVAILABLE OFF)
    message(STATUS "RecompFrontend not vendored (lib/RecompFrontend); building without the in-game UI")
endif()

# --- Main executable ---
set(MAIN_SOURCES
    src/main/main.cpp
    src/main/register_overlays.cpp
    src/main/register_patches.cpp
    src/main/render_context.cpp
    src/main/stubs.cpp
    src/main/tlb.cpp
)

set(GAME_SOURCES
    src/game/audio.cpp
    src/game/cheats.cpp
    src/game/config.cpp
    src/game/controller_pak.cpp
    src/game/input.cpp
    src/game/interpolation.cpp
    src/game/overlay_switch.cpp
    src/game/scheduler.cpp
    src/game/widescreen.cpp
)

set(RSP_SOURCES
    rsp/aspMain.cpp
)

add_executable(BM64U2Recompiled
    ${MAIN_SOURCES}
    ${GAME_SOURCES}
    ${RSP_SOURCES}
)

if(BM64_RECOMP_UI_AVAILABLE)
    target_sources(BM64U2Recompiled PRIVATE
        src/main/recompui_host.cpp
        src/main/theme.cpp
        src/main/launcher_animation.cpp
    )
endif()

# The launcher thumbnail and window icon come from the same embedded PNG, so
# the executable runs straight from the build directory.
set(BM64_ICON_DIR ${CMAKE_CURRENT_SOURCE_DIR}/icons)
add_custom_command(
    OUTPUT
        ${CMAKE_CURRENT_BINARY_DIR}/icon_bytes.c
        ${CMAKE_CURRENT_BINARY_DIR}/icon_bytes.h
    COMMAND $<TARGET_FILE:file_to_c>
        ${BM64_ICON_DIR}/app.png
        icon_bytes
        ${CMAKE_CURRENT_BINARY_DIR}/icon_bytes.c
        ${CMAKE_CURRENT_BINARY_DIR}/icon_bytes.h
    DEPENDS ${BM64_ICON_DIR}/app.png file_to_c
    COMMENT "Embedding application icon"
    VERBATIM
)
target_sources(BM64U2Recompiled PRIVATE
    ${CMAKE_CURRENT_BINARY_DIR}/icon_bytes.c
)
if(WIN32)
    target_sources(BM64U2Recompiled PRIVATE ${BM64_ICON_DIR}/app.rc)
endif()

target_include_directories(BM64U2Recompiled PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    ${CMAKE_CURRENT_SOURCE_DIR}/src/main
    ${CMAKE_CURRENT_SOURCE_DIR}/src/game
    ${CMAKE_CURRENT_BINARY_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/N64ModernRuntime/N64Recomp/include
    ${CMAKE_CURRENT_SOURCE_DIR}/N64ModernRuntime/librecomp/include
    ${CMAKE_CURRENT_SOURCE_DIR}/N64ModernRuntime/ultramodern/include
    ${CMAKE_CURRENT_SOURCE_DIR}/lib/rt64/src
    ${CMAKE_CURRENT_SOURCE_DIR}/lib/rt64/src/rhi
    ${CMAKE_CURRENT_SOURCE_DIR}/lib/rt64/src/render
    ${CMAKE_CURRENT_SOURCE_DIR}/lib/rt64/src/contrib
    ${CMAKE_CURRENT_SOURCE_DIR}/lib/rt64/src/contrib/imgui
    ${CMAKE_CURRENT_SOURCE_DIR}/lib/rt64/src/contrib/hlslpp/include
    ${CMAKE_CURRENT_SOURCE_DIR}/lib/rt64/src/contrib/dxc/inc
    ${CMAKE_BINARY_DIR}/rt64/src
)

target_compile_options(BM64U2Recompiled PRIVATE
    -fno-strict-aliasing
    -fms-extensions
    -g
)

# The recompiled RSP microcode uses the SSE vector helpers in rsp_vu_impl.hpp.
if(CMAKE_SYSTEM_PROCESSOR MATCHES "x86_64|AMD64")
    set_source_files_properties(rsp/aspMain.cpp PROPERTIES COMPILE_OPTIONS "-mssse3;-msse4.1")
endif()

if(CMAKE_SYSTEM_NAME MATCHES "Linux")
    target_compile_definitions(BM64U2Recompiled PRIVATE RT64_SDL_WINDOW_VULKAN)
endif()

# --- Host dependencies ---
if (CMAKE_SYSTEM_NAME MATCHES "Linux")
    find_package(SDL2 REQUIRED)
    find_package(X11 REQUIRED)
    find_package(Freetype REQUIRED)
    find_package(Vulkan REQUIRED)
    find_package(Threads REQUIRED)

    target_include_directories(BM64U2Recompiled PRIVATE
        ${SDL2_INCLUDE_DIRS}
        ${X11_INCLUDE_DIR}
        ${FREETYPE_INCLUDE_DIRS}
    )
    target_link_libraries(BM64U2Recompiled PRIVATE
        ${X11_LIBRARIES}
        ${FREETYPE_LIBRARIES}
        SDL2::SDL2
        Vulkan::Vulkan
        Threads::Threads
        ${CMAKE_DL_LIBS}
        -latomic
        -static-libstdc++
    )
elseif (APPLE)
    find_package(SDL2 REQUIRED)
    find_package(Freetype REQUIRED)
    find_package(Threads REQUIRED)
    target_include_directories(BM64U2Recompiled PRIVATE
        ${SDL2_INCLUDE_DIRS}
        ${FREETYPE_INCLUDE_DIRS}
    )
    target_link_libraries(BM64U2Recompiled PRIVATE
        ${FREETYPE_LIBRARIES}
        SDL2::SDL2
        Threads::Threads
    )
elseif (WIN32)
    set(sdl2_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/lib/rt64/src/contrib/mupen64plus-win32-deps/SDL2-2.26.3")
    set(SDL2_INCLUDE_DIRS "${sdl2_SOURCE_DIR}/include")
    # windows.h's min/max macros break std::min in RT64's headers.
    target_compile_definitions(BM64U2Recompiled PRIVATE NOMINMAX)
    target_include_directories(BM64U2Recompiled PRIVATE ${SDL2_INCLUDE_DIRS})
    target_link_directories(BM64U2Recompiled PRIVATE ${sdl2_SOURCE_DIR}/lib/x64)
    target_link_libraries(BM64U2Recompiled PRIVATE SDL2 Winmm.lib)
    # The SDL2 and dxc DLLs ship next to the executable.
    add_custom_command(TARGET BM64U2Recompiled POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_if_different
            ${sdl2_SOURCE_DIR}/lib/x64/SDL2.dll
            ${CMAKE_CURRENT_SOURCE_DIR}/lib/rt64/src/contrib/dxc/bin/x64/dxil.dll
            ${CMAKE_CURRENT_SOURCE_DIR}/lib/rt64/src/contrib/dxc/bin/x64/dxcompiler.dll
            $<TARGET_FILE_DIR:BM64U2Recompiled>
        COMMENT "Copying the SDL2 and dxc DLLs"
    )
    set_target_properties(BM64U2Recompiled PROPERTIES
        LINK_FLAGS_RELEASE "/SUBSYSTEM:WINDOWS /ENTRY:mainCRTStartup"
        LINK_FLAGS_RELWITHDEBINFO "/SUBSYSTEM:WINDOWS /ENTRY:mainCRTStartup"
    )
endif()

# --- RecompFrontend (recompui + recompinput), the shared N64: Recompiled UI ---
if (BM64_RECOMP_UI_AVAILABLE)
    # RT64's shader helper functions read DXC and the DXC_* option variables
    # from the caller's directory scope, which does not inherit lib/rt64's.
    set(BM64_RT64_DIR ${CMAKE_CURRENT_SOURCE_DIR}/lib/rt64)
    if (CMAKE_SYSTEM_NAME MATCHES "Linux")
        add_compile_definitions(PLUME_SDL_VULKAN_ENABLED RT64_SDL_WINDOW_VULKAN)
    endif()
    if (WIN32)
        set(DXC "${BM64_RT64_DIR}/src/contrib/dxc/bin/x64/dxc.exe")
    elseif (APPLE)
        if (CMAKE_SYSTEM_PROCESSOR STREQUAL "x86_64")
            set(DXC "DYLD_LIBRARY_PATH=${BM64_RT64_DIR}/src/contrib/dxc/lib/x64" "${BM64_RT64_DIR}/src/contrib/dxc/bin/x64/dxc-macos")
        else()
            set(DXC "DYLD_LIBRARY_PATH=${BM64_RT64_DIR}/src/contrib/dxc/lib/arm64" "${BM64_RT64_DIR}/src/contrib/dxc/bin/arm64/dxc-macos")
        endif()
    elseif (CMAKE_SYSTEM_PROCESSOR STREQUAL "x86_64")
        set(DXC "LD_LIBRARY_PATH=${BM64_RT64_DIR}/src/contrib/dxc/lib/x64" "${BM64_RT64_DIR}/src/contrib/dxc/bin/x64/dxc-linux")
    else()
        set(DXC "LD_LIBRARY_PATH=${BM64_RT64_DIR}/src/contrib/dxc/lib/arm64" "${BM64_RT64_DIR}/src/contrib/dxc/bin/arm64/dxc-linux")
    endif()
    set(DXC_COMMON_OPTS "-I${BM64_RT64_DIR}/src")
    set(DXC_DXIL_OPTS "-Wno-ignored-attributes")
    set(DXC_SPV_OPTS "-spirv" "-fspv-target-env=vulkan1.0" "-fvk-use-dx-layout")
    set(DXC_PS_OPTS "${DXC_COMMON_OPTS}" "-E" "PSMain" "-T" "ps_6_3")
    set(DXC_VS_OPTS "${DXC_COMMON_OPTS}" "-E" "VSMain" "-T" "vs_6_3" "-fvk-invert-y")

    set(RECOMP_FRONTEND_N64MODERNRUNTIME_PATH ${CMAKE_CURRENT_SOURCE_DIR}/N64ModernRuntime CACHE STRING "N64ModernRuntime path used by RecompFrontend")
    set(RECOMP_FRONTEND_RT64_PATH ${CMAKE_CURRENT_SOURCE_DIR}/lib/rt64 CACHE STRING "RT64 path used by RecompFrontend")
    set(SDL2_INCLUDE_DIRS "${SDL2_INCLUDE_DIRS}" CACHE STRING "SDL2 include dirs used by RecompFrontend")
    # recompui's nested project() is C/CXX only, then adds support_apple.mm.
    # Enable OBJCXX here so the generate step has CMAKE_OBJCXX_COMPILE_OBJECT.
    if(APPLE)
        enable_language(OBJC OBJCXX)
    endif()
    # RmlUi's bundled robin_hood.h predates the stricter transitive-include
    # rules of newer GCC releases; force <cstdint> into the frontend's TUs.
    # clang-cl does not accept -include (it wants /FI) and does not need this.
    set(_bm64_saved_cxx_flags "${CMAKE_CXX_FLAGS}")
    if(NOT MSVC)
        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -include cstdint")
    endif()
    add_subdirectory(lib/RecompFrontend ${CMAKE_BINARY_DIR}/RecompFrontend)
    set(CMAKE_CXX_FLAGS "${_bm64_saved_cxx_flags}")

    target_compile_definitions(BM64U2Recompiled PRIVATE BM64_RECOMP_UI)
    target_include_directories(BM64U2Recompiled PRIVATE
        ${BM64_RECOMP_UI_DIR}/recompui/include
        ${BM64_RECOMP_UI_DIR}/recompui/src
        ${BM64_RECOMP_UI_DIR}/recompinput/include
    )
    target_link_libraries(BM64U2Recompiled PRIVATE recompui recompinput)

    # The frontend resolves assets relative to the working directory, so copy
    # assets/ next to the executable.
    add_custom_target(bm64_assets ALL
        COMMAND ${CMAKE_COMMAND} -E copy_directory
            ${CMAKE_CURRENT_SOURCE_DIR}/assets
            ${CMAKE_BINARY_DIR}/assets
        COMMENT "Copying RecompFrontend assets"
    )
    add_dependencies(BM64U2Recompiled bm64_assets)
endif()

target_link_libraries(BM64U2Recompiled PRIVATE
    PatchesLib
    RecompiledFuncs
    librecomp
    ultramodern
    rt64
)

# The input layer adds these mappings to SDL's built-in database so newer pads
# still work; create_window loads the file from SDL_GetBasePath().
add_custom_command(TARGET BM64U2Recompiled POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
        ${CMAKE_CURRENT_SOURCE_DIR}/recompcontrollerdb.txt
        $<TARGET_FILE_DIR:BM64U2Recompiled>/recompcontrollerdb.txt
    COMMENT "Copying recompcontrollerdb.txt"
)
