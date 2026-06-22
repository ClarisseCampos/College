#include <stdio.h>
#define N 32
/*Faça uma função que escreva os bits de uma número inteiro de 32 bits.*/

void writeBinary(int n){
    int i, aux;
    printf("\nBinary: ");

    for(i = 0; i < N; i++){
        aux = n >> (N-i-1) & 1;
        printf("%d", aux);
    }
    printf("\n");
}
int main(){

    int n;

    printf("\nSet an integer: ");scanf("%d", &n);

    writeBinary(n);

    return 0;
}