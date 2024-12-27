// cpp_checker.cpp
#include <stdio.h>
#include <stdlib.h>

void check_gpp() {
    printf("\nChecking G++ version:\n");
    system("g++ --version 2>&1");
}

void check_clangpp() {
    printf("\nChecking Clang++ version:\n");
    system("clang++ --version 2>&1");
}

void check_msvc() {
    printf("\nChecking MSVC version:\n");
    #ifdef _WIN32
        system("cl 2>&1");
    #else
        printf("MSVC is only available on Windows systems.\n");
    #endif
}

void check_cpp_standards() {
    printf("\nC++ Compiler and Standard Information:\n");
    printf("-----------------------------------\n");

    #ifdef __GNUC__
        printf("GCC Version: %d.%d.%d\n", 
               __GNUC__, __GNUC_MINOR__, __GNUC_PATCHLEVEL__);
    #endif

    #ifdef __clang__
        printf("Clang Version: %d.%d.%d\n", 
               __clang_major__, __clang_minor__, __clang_patchlevel__);
    #endif

    #ifdef _MSC_VER
        printf("MSVC Version: %d\n", _MSC_VER);
    #endif

    printf("\nC++ Standard Support Details:\n");
    printf("---------------------------\n");
    
    #ifdef __cplusplus
        printf("- __cplusplus: %ldL\n", __cplusplus);
        
        if (__cplusplus > 202302L)
            printf("- C++23 or newer is supported\n");
        else if (__cplusplus >= 202002L)
            printf("- C++20 is supported\n");
        else if (__cplusplus >= 201703L)
            printf("- C++17 is supported\n");
        else if (__cplusplus >= 201402L)
            printf("- C++14 is supported\n");
        else if (__cplusplus >= 201103L)
            printf("- C++11 is supported\n");
        else
            printf("- Pre-C++11 is supported\n");
    #endif

    printf("\nC++ Feature Testing:\n");
    printf("------------------\n");
    
    #ifdef __cpp_exceptions
        printf("- Exceptions supported: Yes (__cpp_exceptions: %d)\n", __cpp_exceptions);
    #endif

    #ifdef __cpp_rtti
        printf("- RTTI supported: Yes (__cpp_rtti: %d)\n", __cpp_rtti);
    #endif

    #ifdef __cpp_constexpr
        printf("- Constexpr supported: Yes (__cpp_constexpr: %d)\n", __cpp_constexpr);
    #endif

    #ifdef __cpp_modules
        printf("- Modules supported: Yes (__cpp_modules: %d)\n", __cpp_modules);
    #endif
}

int main() {
    printf("=== C++ Standard and Compiler Version Checker ===\n");
    
    check_gpp();
    check_clangpp();
    check_msvc();
    check_cpp_standards();
    
    printf("\n=== Check Complete ===\n");
    return 0;
}