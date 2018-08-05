screenfetch-c
=============

This is a fork of screenfetch-c from woodruffw (William Woodruff) mainly to explore
the Meson build system.
At present, it is only tested and working for Linux.

## Current Version: 0.1 (alpha)

screenfetch-c is an attempt to rewrite screenFetch, a popular shell
script that displays system information and an ASCII logo, in the C
language.

## Installing screenfetch-c:

### Dependencies:
screenfetch-c only relies on libraries that come on virtually every system + meson.

* On Linux, OpenGL is used to detect the GPU. In most package managers, this is listed as `libgl-dev`.

* On Linux and Solaris, libX11 is required. In most package managers, this is listed as `libX11-dev`.

* To install meson, have a look at their official [webpage](http://mesonbuild.com/Quick-guide.html).

Installing screenfetch-c is very simple:

```bash
$ git clone https://www.github.com/SoundSonic1/screenfetch-meson.git
$ cd screenfetch-meson
$ meson build --buildtype=release
$ cd build
$ ninja
$ sudo ninja install
```

## Current Known Compatibility:

_Note:_ These are the ones that have actually been tested (so far).
        screenfetch-c may very well work on untested distros, so feel free to try it.

- [x] Arch Linux

## License
screenfetch-c is licensed under the MIT license.

For the exact terms, see the [license](./LICENSE).
