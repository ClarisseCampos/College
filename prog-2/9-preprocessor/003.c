#include <stdio.h>
#define BUFFER_SIZE 100
#define TOTAL_BUFFERS 10

int main(){
    #if BUFFER_SIZE * TOTAL_BUFFERS > 500
        printf("%d\n", BUFFER_SIZE);
    #endif

    #if !defined(OS)
        printf("OS is not defined\n");
    #endif

    return 0;
}