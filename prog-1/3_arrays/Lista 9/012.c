#include <stdio.h>
int main(){
    
    int i , q = 15, v[q], soma = 0, maior, menor;
    float media;

    for(i = 0; i < q; i++){
        printf("\n[%d/%d] Set a number ", i+1, q); scanf("%d", &v[i]);
        soma += v[i];
    }
    media = (float)soma/q; // qualquer operacao com float vai precisar desse ajuste
    maior = v[0];
    menor = v[0];

    for(i = 0; i < q; i++){
        if(v[i] > maior){
            maior = v[i];
        }
        if(v[i] < menor){
            menor = v[i];
        }
    }
    printf("\nA media dos numeros eh %.2f, ja o maior numero eh %d enquanto o menor eh %d", media, maior, menor);

    return 0;
}