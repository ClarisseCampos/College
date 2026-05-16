#include <stdio.h>
int main(){
    
    int valores[10], i;

    for(i = 0; i < 10; i++){
        printf("[%d/%d] Set a number: ", i+1,10);scanf("%d", &valores[i]);
    }
    for(i = 0;i < 10; i++){
        if(valores[i] < 0){
            printf("\nValor negativo %d na posicao %d", valores[i], i);}
    }

    return 0;
}