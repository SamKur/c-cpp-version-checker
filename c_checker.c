// c_checker.c
#include <stdio.h>
#include <stdlib.h>

void check_gcc() {
    printf("\nChecking GCC version:\n");
    system("gcc --version 2>&1");
}

void check_clang() {
    printf("\nChecking Clang version:\n");
    system("clang --version 2>&1");
}

void check_msvc() {
    printf("\nChecking MSVC version:\n");
    #ifdef _WIN32
        system("cl 2>&1");
    #else
        printf("MSVC is only available on Windows systems.\n");
    #endif
}

void check_c_standards() {
    printf("\nC Compiler and Standard Information:\n");
    printf("--------------------------------\n");

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

    printf("\nC Standard Support Details:\n");
    printf("-------------------------\n");
    
    #ifdef __STDC__
        printf("- __STDC__ defined (Confirms ISO C compliance)\n");
        
        #ifdef __STDC_VERSION__
            printf("- __STDC_VERSION__: %ldL\n", __STDC_VERSION__);
            
            if (__STDC_VERSION__ >= 202411L)
                printf("- C24 or newer is supported!\n");
            else if (__STDC_VERSION__ >= 202311L)
                printf("- C23 is supported!\n");
            else if (__STDC_VERSION__ >= 201710L)
                printf("- C17/C18 is supported\n");
            else if (__STDC_VERSION__ >= 201112L)
                printf("- C11 is supported\n");
            else if (__STDC_VERSION__ >= 199901L)
                printf("- C99 is supported\n");
        #else
            printf("- C89/C90 is supported\n");
        #endif

        #ifdef __STDC_HOSTED__
            printf("- Running in a hosted environment\n");
        #endif
    #endif

    printf("\nAdditional C Features Support:\n");
    printf("---------------------------\n");
    
    #ifdef __STDC_NO_THREADS__
        printf("- Threads support: No\n");
    #else
        printf("- Threads support: Yes\n");
    #endif

    #ifdef __STDC_NO_ATOMICS__
        printf("- Atomics support: No\n");
    #else
        printf("- Atomics support: Yes\n");
    #endif

    #ifdef __STDC_NO_VLA__
        printf("- Variable Length Arrays: No\n");
    #else
        printf("- Variable Length Arrays: Yes\n");
    #endif
}

int main() {
    printf("=== C Standard and Compiler Version Checker ===\n");
    
    check_gcc();
    check_clang();
    check_msvc();
    check_c_standards();
    
    printf("\n=== Check Complete ===\n");
    return 0;
}