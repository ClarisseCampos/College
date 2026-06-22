#include <stdio.h>
//Soma vetorial

typedef struct{
    float x,y;
}VETOR;

VETOR somaVetor(VETOR a, VETOR b){
    VETOR resultante;
    resultante.x = a.x + b.x;
    resultante.y =  a.y + b.y;
    
    return resultante;
}
int main(){
    VETOR a,b, soma;
    printf("VERTOR A \nComponente x: "); scanf("%f", &a.x);
    printf("Componente y: "); scanf("%f", &a.y);
    printf("\nVERTOR B \nComponente x: ");scanf("%f", &b.x);
    printf("Componente y: "); scanf("%f", &b.y);
    
    soma = somaVetor(a,b);
    
    printf("\nResultante: v = (%.2fi+%.2fj)", soma.x,soma.y);

    return 0;
}
