#include <stdio.h>
int main(){
    int meuVetor[10], counterPares = 0, i, j;

    for(i = 0; i < 10; i++){
        printf("\nSet a value: ");scanf("%d", &meuVetor[i]);
        if((meuVetor[i] % 2) == 0){
            counterPares++;
        }
    }

    int vetorPares[counterPares];
    i = 0; j = 0;

    while(j < counterPares){
        if((meuVetor[i] % 2) == 0){
            vetorPares[j] = meuVetor[i];
            j++;
        }
        i++;
    }
    printf("\n OS %d NUMEROS PARES ->", counterPares);

    for(i = 0; i < counterPares; i++){
        printf("\nValor = %d, na posicao %d", vetorPares[i], i);
    } 

    return 0;
}