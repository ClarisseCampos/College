#include <stdio.h>
int main(){

    #if !SOMEMACRO
        printf("\nSee how the C preprocessor set a macro to zero when it is not defined!");
    #endif

    return 0;
}