# What is `ywlib`

Project to simplify `C++` programming for `Windows-x64`.

# What does `ywlib` provide

- Minimal environment

- Fast compilation

- Synchronization of visiblity and availability  
  (Intellisense displays definitions that are necessary and available)

# How to install `ywlib`

1. `git clone https://github.com/ywx9/ywlib.git`  
   (below, `"...\ywlib"` means the directory)

2. Replace binaries in `"...\ywlib\ywstd\bin"`  
   (available from `Microsoft Visual Studio`)

3. Replace libraires in `"...\ywlib\ywstd\lib"`
   (available from `Microsoft Visual Studio` or `Windows Kit`)

5. Place files to `"...\ywlib\ywstd\msvc-stl"`  
   (available from `https://github.com/microsoft/STL/tree/main/stl/inc`)

4. Compile `ywstd` by `python ...\ywlib\ywstd\ywstd`

# How to use `ywlib`

1. Use `#include "...\ywlib\ywlib"` to import `C++` standard library.

2. Use `python ...\ywlib\ywlib your-source-file [--run]` to compile your source.

3. `[--run]` option call the compiled executable if the compilation succeeds.
