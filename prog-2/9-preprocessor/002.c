#include <stdio.h>
#define VERSION_CODE 'a'
#define PLATFORM_CODE 1

int main(){
    #if PLATFORM_CODE == 1
        printf("Linux\n");
    #elif PLATFORM_CODE == 2
        printf("MacOS\n");
    #else
        printf("Windows\n");
    #endif

    #if VERSION_CODE == 'a'
        printf("Code: %c", VERSION_CODE);
    #endif

    return 0;
}