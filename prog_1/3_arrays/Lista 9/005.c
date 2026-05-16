#include <stdio.h>
int main(){

    int valores[10], i, j, verifier;

    for(i = 0;i < 10; i++){
        printf("[%d/%d] Set a number: ", i+1, 10);scanf("%d", &valores[i]);
        }
    printf("\n\nSao primos os numeros..\n");

    for(i = 0; i < 10; i++)
    {
        verifier = 0;
        j = valores[i] - 1;

        while (j > 1){
            if((valores[i]%j) == 0){ 
                verifier = 1; break;
            }
            j--;
        }

        if(valores[i] != 0 && valores[i] != 1 && !verifier){
            printf("%d na posicao %d\n", valores[i], i);}
    }
    return 0;
}