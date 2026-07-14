#include <stdio.h>
#include "mat.h"

int main(){
    float x;

    printf("\nSet a number: ");  scanf("%f", &x);

    printf("\nQuadrado: %.2f", quadrado(x));
    printf("\nCubo: %.2f", cubo(x));
    printf("\nFatorial: %d", fatorial((int)x));
    
    return 0;
}


/*Compile and run: 
    gcc main.c mat.c -o output && ./output
*/