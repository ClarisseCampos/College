#include <stdio.h>

int main(){
    int quantidade = 10;
    int arrayMain[quantidade], i, counterPares = 0, counterImpares = 0;

    for(i = 0; i < quantidade; i++){
        printf("[%d/%d] Set a number: ", i+1, quantidade); scanf("%d", &arrayMain[i]);
        if((arrayMain[i] % 2) == 0){
            counterPares++;
        }else{
            counterImpares++;
        }
    }
    printf("\nQ. de pares: %d\nQ. de impares: %d\n", counterPares, counterImpares);

    int arrayPar[counterPares], arrayImpares[counterImpares], evenIndex = 0, oddIndex = 0;

    i = 0;
    while(evenIndex < counterPares){
        if((arrayMain[i] % 2) == 0){
            arrayPar[evenIndex] = arrayMain[i];
            evenIndex++;
        }
        i++;
    }
    printf("conjunto par:\n");

    for(i = 0; i < counterPares; i++){
        printf("%d\n", arrayPar[i]);
    }

    i = 0;
    while(oddIndex < counterImpares){
        if((arrayMain[i] % 2) == 1){
            arrayImpares[oddIndex] = arrayMain[i];
            oddIndex++;
        }
        i++;
    }
    printf("conjunto impar:\n");

    for(i = 0; i < counterImpares; i++){
        printf("%d\n", arrayImpares[i]);
    }
    return 0;
}