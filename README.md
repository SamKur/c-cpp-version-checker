# Cross-Platform C/C++ Compiler Checker

These codes are designed to work across different machines and operating systems without modification!

## How to Use

### For Cross-Platform Portability

#### Linux / Mac / Windows
**If Very Latest (as of now C23: ISO/IEC 9899:2023 and C++23: ISO/IEC 14882:2023) Compilers Are Present**
```bash
gcc -std=c23 c_checker.c -o c_checker
g++ -std=c++23 cpp_checker.cpp -o cpp_checker
```

**If Older Compilers Are Present**

If C23 isn't supported, try:

```bash
gcc -std=c17 c_checker.c -o c_checker
# or
gcc -std=c11 c_checker.c -o c_checker 
# or
gcc -std=c99 c_checker.c -o c_checker
```

If C++23 isn't supported, try:

```bash
g++ -std=c++20 cpp_checker.cpp -o cpp_checker
# or
g++ -std=c++17 cpp_checker.cpp -o cpp_checker 
# or
g++ -std=c++14 cpp_checker.cpp -o cpp_checker
```

**For Very Old Systems (or Check Default Compiler Version)**

```bash
gcc c_checker.c -o c_checker
g++ cpp_checker.cpp -o cpp_checker
```

## Key Benefits of These Checkers

* **Cross-platform:** Works on Linux, Mac, and Windows (Command Prompt/MinGW).
* **No Dependency on Clang/MSVC:** The checks will run even if these compilers aren't installed.
* **Graceful Handling of Missing Compilers:** If a compiler is missing, the program will gracefully adjust.
* **Detects Available Standards:** Automatically detects which standards are supported, even if older versions.
* **Automatic OS Handling:** The system commands adjust based on the operating system (Windows/Linux/Mac).
* **Preprocessor Macros:** All feature checks are done through preprocessor macros, ensuring compatibility everywhere.

## Tips for Checking

* **Windows Users:** You can directly run the `.exe` file shared by me, but it's recommended to compile from source on your local machine for maximum flexibility.
* **All Users:** Use the source code and compile it locally on your machine. Run the generated file(`c_checker` or `c_checker.exe` AND `cpp_checker` or `cpp_checker.exe`).

## Output

The output will help you to:

* Compare compiler versions across different machines.
* Verify C/C++ standard support.
* Check for specific feature availability.
* Identify potential compatibility issues.
