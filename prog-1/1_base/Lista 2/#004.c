#include <stdio.h>

int operacao(x, par, impar){
    int etiqueta;
    if((x%2)==0){
        etiqueta = 0;
    }else{
        etiqueta = 1;
    }
    if(etiqueta == 0){
        par = par+1;
        printf("A quantidade de pares eh: %d", par);
    }else{
        impar = impar+1;
    }
    return 0;
}

int main() {
    int numeros[5];

    printf("Digite um numero ");
        scanf("%d", &numeros[0]);
    operacao(numeros[0], 0, 0);

    printf("\nDigite + um ");
        scanf("%d", &numeros[1]);
    operacao(numeros[1], 0, 0);

    printf("\nDigite + um ");
        scanf("%d", &numeros[2]);
    operacao(numeros[2], 0, 0);

    printf("\nDigite + um ");
        scanf("%d", &numeros[3]);
    operacao(numeros[3], 0, 0);

    printf("\nDigite + um ");
        scanf("%d", &numeros[4]);
    operacao(numeros[4], 0, 0);

    printf("\nDigite + um ");
        scanf("%d", &numeros[5]);
        operacao(numeros[5], 0, 0);


    return 0;
}