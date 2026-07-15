#include <stdio.h>
#include <stdlib.h>
#include "str.h"

int main(){
    int size;
    char *s = NULL, *buffer = NULL;
    
    buffer = (char *) malloc(3001 * sizeof(char));
    if(buffer == NULL){
        puts("\nErro"); return 1;
    }

    printf("\nSet a quote: "); scanf("%3000[^\n]", buffer);

    size = tamanho(buffer) + 1;

    s = (char *) malloc(size * sizeof(char));
    if(s == NULL){
        puts("\nErro"); return 1;
    }

    copiarstring(buffer,s);
    free(buffer);

    printf("\nTamanho: %d\n", size);
    inverterCase(s);
    puts(s);
    free(s);
    
    return 0;
}

/*Compile and run: 
    gcc main.c str.c -o output && ./output
*/