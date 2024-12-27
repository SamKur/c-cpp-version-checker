# Cross-Platform C/C++ Compiler Checker

These codes are designed to work across different machines and operating systems without modification!

## How to Use - Supported Cross-Platform Portability

### 1. Download the Source Code

Clone the repository containing the `c_checker.c` and `cpp_checker.cpp` files:

```bash
git clone https://github.com/SamKur/c-cpp-version-checker.git
```

### 2. Install the Compiler

**Ensure you have the appropriate C and C++ compiler installed on your machine.**

* **Linux/Mac:** Use your package manager (e.g., `apt`, `brew`) to install GCC and G++.
* **Windows:** Consider using MinGW or install compilers like GCC and G++ through MSYS2 or similar tools.
    * MinGW Website - https://www.mingw-w64.org/
    * Which to choose? - I'll recommend this - [Click to check github releases](https://github.com/niXman/mingw-builds-binaries/releases) 
    * I'm using [this as of now](https://github.com/niXman/mingw-builds-binaries/releases/download/14.2.0-rt_v12-rev0/x86_64-14.2.0-release-posix-seh-ucrt-rt_v12-rev0.7z)
    * Make sure it's added to path
    * For  other c/c++ compiler like clang, msvc etc - do your homework :P
    * This repo will work for all major names.

### 3. Open Terminal/Command Prompt

* **Linux/Mac:** Open a terminal window.
* **Windows:** Open Command Prompt (CMD) or PowerShell.

### 4. Navigate to the Folder Containing Source Code

Use the `cd` command to navigate to the directory where you cloned the repository:

```bash
cd c-cpp-version-checker
```

Replace `c-cpp-version-checker` with the actual path if it is different.

### 5. Compile the Code

Try the below compilation command - 
Linux / Mac / Windows

* If Very Latest (as of now C23: ISO/IEC 9899:2023 and C++23: ISO/IEC 14882:2023) Compilers Are Present
```bash
gcc -std=c23 c_checker.c -o c_checker
g++ -std=c++23 cpp_checker.cpp -o cpp_checker
```

* If Older Compilers Are Present 

for c try:

```bash
gcc -std=c17 c_checker.c -o c_checker
# or
gcc -std=c11 c_checker.c -o c_checker 
# or
gcc -std=c99 c_checker.c -o c_checker
# or For Very Old Systems (or Check Default Compiler Version)
gcc c_checker.c -o c_checker
```

AND for c++ try:

```bash
g++ -std=c++20 cpp_checker.cpp -o cpp_checker
# or
g++ -std=c++17 cpp_checker.cpp -o cpp_checker 
# or
g++ -std=c++14 cpp_checker.cpp -o cpp_checker
# or For Very Old Systems (or Check Default Compiler Version)
g++ cpp_checker.cpp -o cpp_checker
```

### Run the Compiled File

**Execute the generated file based on your operating system:**

* **Linux/Mac:**

```bash
./c_checker
./cpp_checker
```

* **Windows:**

```bash
c_checker.exe
cpp_checker.exe
```

The output will display the compiler versions and supported C/C++ standards on your machine.


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

## Contributing

We welcome contributions to this project! Feel free to fork the repository and submit pull requests with improvements or bug fixes.
