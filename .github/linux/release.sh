#!/bin/sh
# Builds the Linux release packages, an AppImage and a .tar.gz, the way CI
# makes them: inside an ubuntu:22.04 container, so they only need glibc 2.35.
# Builds for the host architecture (x86_64 or aarch64). Needs podman (or
# docker). The game code is checked in as RecompiledFuncs/; pass a ROM only to
# regenerate it first.
#
#   .github/linux/release.sh v1.0.0 [path/to/bomberman64u2.z64]
#
# The packages go to out/. The build trees go to build-release/, apart from
# BUILDING.md's build-cmake/.
set -eu

if [ "${1:-}" != "--in-container" ]; then
    version=${1:-dev}
    rom=${2:-}
    root=$(cd "$(dirname "$0")/../.." && pwd)
    engine=$(command -v podman || command -v docker || true)
    [ -n "$engine" ] || { echo "podman or docker is required" >&2; exit 1; }
    if [ -n "$rom" ] && [ "$(cd "$(dirname "$rom")" && pwd)/$(basename "$rom")" != "$root/bomberman64u2.z64" ]; then
        cp "$rom" "$root/bomberman64u2.z64"
    fi
    # Rootless podman maps the container's root to you; docker needs the
    # output handed back.
    owner=""
    case "$engine" in *docker) owner="$(id -u):$(id -g)" ;; esac
    exec "$engine" run --rm --security-opt label=disable \
        -e VERSION="$version" -e OWNER="$owner" -v "$root:/src" \
        docker.io/library/ubuntu:22.04 sh /src/.github/linux/release.sh --in-container
fi

APP=BM64U2Recompiled
ARCH=$(uname -m)
case "$ARCH" in
    x86_64) LABEL=X64 ;;
    aarch64) LABEL=ARM64 ;;
    *) echo "unsupported architecture $ARCH" >&2; exit 1 ;;
esac
cd /src
B=/src/build-release
mkdir -p "$B/tools"

echo "::: dependencies"
export DEBIAN_FRONTEND=noninteractive
apt-get update -qq
apt-get install -y -qq cmake ninja-build make g++ clang-15 lld-15 llvm-15 libstdc++-12-dev \
    libgtk-3-dev libfreetype-dev libvulkan-dev python3 git wget file ca-certificates dpkg-dev \
    librsvg2-2 librsvg2-common librsvg2-dev libgdk-pixbuf2.0-bin \
    > /dev/null
# The patch ELF is built with plain clang and ld.lld (patches/Makefile).
ln -sf /usr/bin/clang-15 /usr/local/bin/clang
ln -sf /usr/bin/ld.lld-15 /usr/local/bin/ld.lld

# SDL2 from source, as the other N64: Recompiled ports do (the distro's 2.0.20
# is too old to ship). Its backends need their headers present.
apt-get install -y -qq libx11-dev libxext-dev libxrandr-dev libxcursor-dev libxi-dev \
    libxinerama-dev libxss-dev libxfixes-dev libxkbcommon-dev libwayland-dev wayland-protocols \
    libdecor-0-dev libegl1-mesa-dev libgl1-mesa-dev libgles2-mesa-dev libdrm-dev libgbm-dev \
    libpulse-dev libasound2-dev libpipewire-0.3-dev libudev-dev libdbus-1-dev libsamplerate0-dev \
    > /dev/null
cd /tmp
wget -q https://github.com/libsdl-org/SDL/releases/download/release-2.30.3/SDL2-2.30.3.tar.gz
tar -xzf SDL2-2.30.3.tar.gz
cd SDL2-2.30.3
./configure > /dev/null
make -j "$(nproc)" > /dev/null
make install > /dev/null
cp -a /usr/local/lib/libSDL2* "/lib/$(dpkg-architecture -qDEB_HOST_MULTIARCH)/"
cd /src

if [ -f bomberman64u2.z64 ]; then
    echo "::: game code"
    python3 make_build_rom.py bomberman64u2.z64
    cmake -S N64ModernRuntime/N64Recomp -B "$B/n64recomp" -G Ninja -DCMAKE_BUILD_TYPE=Release
    cmake --build "$B/n64recomp" --target N64RecompCLI -j "$(nproc)"
    "$B/n64recomp/N64Recomp" bm64u2.us.toml
fi
ls RecompiledFuncs/*.c > /dev/null 2>&1 \
    || { echo "RecompiledFuncs/ is empty: pass the ROM to regenerate it" >&2; exit 1; }

echo "::: build"
cmake -S . -B "$B/game" -G Ninja -DCMAKE_BUILD_TYPE=Release \
    -DCMAKE_C_COMPILER=clang-15 -DCMAKE_CXX_COMPILER=clang++-15
cmake --build "$B/game" -j "$(nproc)"

echo "::: tar.gz"
OUT=/src/out
mkdir -p "$OUT"
stage=$(mktemp -d)
mkdir -p "$stage/$APP"
cp "$B/game/$APP" "$stage/$APP/"
cp -r "$B/game/assets" "$stage/$APP/"
cp recompcontrollerdb.txt COPYING README.md "$stage/$APP/"
tar -C "$stage" -czf "$OUT/$APP-$VERSION-Linux-$LABEL.tar.gz" "$APP"

echo "::: AppImage"
cd "$B/tools"
[ -f linuxdeploy-$ARCH.AppImage ] || wget -q https://github.com/linuxdeploy/linuxdeploy/releases/download/continuous/linuxdeploy-$ARCH.AppImage
[ -f linuxdeploy-plugin-gtk.sh ] || wget -q https://raw.githubusercontent.com/linuxdeploy/linuxdeploy-plugin-gtk/master/linuxdeploy-plugin-gtk.sh
[ -f appimagetool-$ARCH.AppImage ] || wget -q https://github.com/AppImage/appimagetool/releases/download/continuous/appimagetool-$ARCH.AppImage
chmod +x linuxdeploy-$ARCH.AppImage linuxdeploy-plugin-gtk.sh appimagetool-$ARCH.AppImage
export PATH="$B/tools:$PATH" DEPLOY_GTK_VERSION=3 NO_STRIP=1 APPIMAGE_EXTRACT_AND_RUN=1

appdir="$B/AppDir"
rm -rf "$appdir"
mkdir -p "$appdir/usr/bin"
cp "$B/game/$APP" "$appdir/usr/bin/"
cp -r "$B/game/assets" "$appdir/usr/bin/"
cp /src/recompcontrollerdb.txt "$appdir/usr/bin/"
cp /src/icons/app.png "$appdir/$APP.png"
cat > "$appdir/$APP.desktop" <<EOF
[Desktop Entry]
Type=Application
Name=Bomberman 64: The Second Attack! Recompiled
Comment=Native PC port of Bomberman 64: The Second Attack!
Exec=$APP
Icon=$APP
Terminal=false
Categories=Game;
EOF
linuxdeploy-$ARCH.AppImage --appdir="$appdir" -d "$appdir/$APP.desktop" -i "$appdir/$APP.png" \
    -e "$appdir/usr/bin/$APP" --plugin gtk

# Papirus and most host icon themes are SVG. GTK 3 aborts the process if
# libpixbufloader-svg.so is missing, which is how "Load ROM" crashed.
svg_loader=$(find /usr/lib -name libpixbufloader-svg.so | head -1)
[ -n "$svg_loader" ] || { echo "librsvg pixbuf loader missing on the build image" >&2; exit 1; }
loader_dir=$(find "$appdir/usr/lib" -type d -path '*/gdk-pixbuf-2.0/*/loaders' | head -1)
[ -n "$loader_dir" ] || { echo "gdk-pixbuf loaders dir missing from AppDir" >&2; exit 1; }
cp -n "$svg_loader" "$loader_dir/"
linuxdeploy-$ARCH.AppImage --appdir="$appdir" -l "$svg_loader" --plugin gtk
find "$appdir" -name libpixbufloader-svg.so | grep -q . \
    || { echo "AppDir is missing libpixbufloader-svg.so" >&2; exit 1; }

# The game keeps its settings, saves and stored ROM in the working directory
# and loads assets/ from it, and the AppImage is mounted read-only. Run it from
# ~/.config/bm64u2 (or from the current directory when portable.txt is there),
# with assets and the controller database linked in from the mount, whose
# path changes on every launch.
sed -i 's/^exec/#exec/' "$appdir/AppRun"
cat >> "$appdir/AppRun" <<EOF
# loaders.cache uses bare filenames; without MODULEDIR, GTK looks for
# libpixbufloader-svg.so in cwd after the cd below and aborts on Papirus.
export GDK_PIXBUF_MODULEDIR="\$this_dir/usr/lib/gdk-pixbuf-2.0/2.10.0/loaders"
export LD_LIBRARY_PATH="\$this_dir/usr/lib\${LD_LIBRARY_PATH:+:\$LD_LIBRARY_PATH}"
if [ -f "portable.txt" ]; then
    data_dir=\$PWD
else
    data_dir="\${XDG_CONFIG_HOME:-\$HOME/.config}/bm64u2"
fi
mkdir -p "\$data_dir"
ln -sfn "\$this_dir/usr/bin/assets" "\$data_dir/assets"
ln -sfn "\$this_dir/usr/bin/recompcontrollerdb.txt" "\$data_dir/recompcontrollerdb.txt"
cd "\$data_dir"
APP_FOLDER_PATH="\$data_dir" exec "\$this_dir/usr/bin/$APP" "\$@"
EOF

# Libraries that have to come from the system
rm -rf "$appdir"/usr/lib/libgmodule* "$appdir"/usr/lib/gio/modules/*.so "$appdir"/usr/lib/libwayland*
rm -f "$appdir"/usr/lib/libvulkan* "$appdir"/usr/lib/libGL* "$appdir"/usr/lib/libEGL*

# Pack with appimagetool: linuxdeploy's --output appimage deploys again,
# rewriting AppRun and bringing the removed libraries back.
ARCH=$ARCH appimagetool-$ARCH.AppImage --no-appstream "$appdir" "$OUT/$APP-$VERSION-Linux-$LABEL.AppImage"

cd "$OUT"
sha256sum "$APP-$VERSION-Linux-$LABEL.AppImage" "$APP-$VERSION-Linux-$LABEL.tar.gz" > "SHA256SUMS-$VERSION-Linux-$LABEL.txt"
[ -z "$OWNER" ] || chown -R "$OWNER" /src
ls -la "$OUT"
