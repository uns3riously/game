# HelloWorldExample
A game I'm making.

A simple C++ example project demonstrating a basic CMake setup, clang-format formatting, and Doxygen documentation.

I don't know. Maybe its not even a game. The truth is I need to learn to use cmake.

## Features

- C++17
- CMake-based build system
- clang-format for automatic code formatting
- Doxygen for API documentation


## Project Structure

```text
.
├── src/            # Application source code
├── build/          # Build output (not committed)
├── docs/           # Generated documentation
├── .vscode/        # VS Code workspace settings
├── .clang-format   # Code formatting rules
├── CMakeLists.txt  # CMake build configuration
├── doxyfile        # Doxygen configuration
└── README.md
```

## Requirements
- CMake >= 3.10
- C++17 compatible compiler
    - MSVC (Visual Studio)
    - clang or gcc
- clang-format (optional, for formatting)
- Doxygen (optional, for documentation)

## Building

```bash
cmake -S . -B build
cmake --build build
```

## Running

After building, run the executable:

```bash
./build/HelloWorldExample
```
On Windows run
```
build\HelloWorldExample.exe
```

## Formatting

This project uses clang-format.

Formatting is automatically applied on save in VS Code.
To format manually:

```bash
clang-format -i src/**/*.cpp src/**/*.h
```

## Documentation

Generate API documentation with Doxygen:

```bash
doxygen doxyfile
```
The generated documentation will appear in: docs/html/index.html

## Whats important
- Doxygen
To run doxygen you just type doxygen in cmd. Not bad. You have to specify how doxygen works in the doxyfile. Its got a bunch of tags to set. The output is in html/index. Duh.
- CMake
The commands are Cmake -S . -B build and then cmake --build build.
Oh yeah and this is crazy - cmd is not good enough to use to invoke cmake. Instead you have to use Developer Command Prompt for VS. I had never even heard of it. You can set up the environment .bat file fromk the MSBuild compiler to autorun whenever you open cmd and that would make cmd good enough, but I couldn't get that to work, and even then think about the next time an installer wants to do something cmd would open and maybe that bat file would mess it up.
- Compiler
We had to install the MSBuild compiler from the internet to get cmake to work. Didn't even occur to me that cmake doesn't come with a compiler? Or my computer doesn't have one for me to use
- formatting with Clang-format
Its a bitch because its not easy to tell where the bugs come from. So, you have to disable intellisense from the C/Cpp extension because it interferes with clang-format. And you set up a clang-format file with a bunch of yaml keys prepopulated. That parts not difficult. You have to set up the .vscode if its not there (you just make it with the rioght name lol) and make a settings.json file. That file needs to have the correct entry to setup your workspace settings to use the correct formatter and format style.
- VS code workplace settings
I mean its above in the Clang-format section. This .vscode folder constains your workspace information.
