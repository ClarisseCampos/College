#include <stdio.h>
#define BUFFER_SIZE 100
#define TOTAL_BUFFERS 10
#define OS

int main(){
    #if BUFFER_SIZE * TOTAL_BUFFERS > 500
        printf("%d\n", BUFFER_SIZE);
    #endif

    #ifdef OS
        printf("OS is defined\n");
    #endif

    return 0;
}