#include <stdio.h>
int main(){
    
    int valores[10], i;

    for(i = 0; i < 10; i++){
        printf("\n[%d/%d] Set a number ", i+1, 10);scanf("%d", &valores[i]);
    }
    printf("\nAqui odiamos numeros negativos..\n");

    for(i = 0; i < 10; i++){
        if(valores[i] < 0){
            valores[i] = -valores[i];
        }
        printf("%d, ", valores[i]);
    }
    return 0;
}