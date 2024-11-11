Debloated repo of bleeding edge [Raylib](https://github/raysan5/raylib) for
Windows with Visual Studio solution.

## Things removed

Documentation, cmake, zig build and examples.

## Things not removed

Non-Windows platform implementations in `src/platforms`.

## Things added

- Raygui
- JPEG compile flag is enabled by default
- [core_basic_window](https://www.raylib.com/examples/core/loader.html?name=core_basic_window)
  example in C++ without comments and congrats text.
- Renamed CloseWindow to RCloseWindow (prevents linker error I didn't want to
  fix at 3:35AM)

Intended for internal usage at
[Doomhowl Interactive](https://doomhowl-interactive.com) but could turn out
useful for someone.

Checked out at
[commit 2af4f317122d73dd459e0c9c3aed14192c08c186](https://github.com/raysan5/raylib/commit/2af4f317122d73dd459e0c9c3aed14192c08c186)
(Raylib 5.x).<br>Note that the new
[RGFW](https://github.com/ColleagueRiley/RGFW) backend is used.

Comes with absolutely no warranty.<br>All credit belongs to raysan5 and Raylib
contributors.

> Original snippet of Raylib readme

<img align="left" style="width:260px" src="https://github.com/raysan5/raylib/blob/master/logo/raylib_logo_animation.gif" width="288px">

**raylib is a simple and easy-to-use library to enjoy videogames programming.**

raylib is highly inspired by Borland BGI graphics lib and by XNA framework and
it's especially well suited for prototyping, tooling, graphical applications,
embedded systems and education.

_NOTE for ADVENTURERS: raylib is a programming library to enjoy videogames
programming; no fancy interface, no visual helpers, no debug button... just
coding in the most pure spartan-programmers way._
