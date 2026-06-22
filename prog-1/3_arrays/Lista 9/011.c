#include <stdio.h>
int main(){
    
    int i , q = 10, v[q], soma = 0;
    float media;

    for(i = 0; i < q; i++){
        printf("\n[%d/%d] Set a number ", i+1, q); scanf("%d", &v[i]);
        soma += v[i];
    }
    media = soma/q;
    printf("\nA media dos numeros eh %.2f", media);

    return 0;
}