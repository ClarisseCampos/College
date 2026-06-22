#include <stdio.h>
int main(){

    int q = 5, i, v[q], sigmaEven = 0, quantityOdd = 0;

    for(i = 0; i < q; i++){
        printf("\n[%d/%d] Set a value: ", i+1, q);scanf("%d", &v[i]);

        if((v[i]%2) == 0){
            sigmaEven += v[i];
        }else{
            quantityOdd++;
        }
    }
    printf("\nA SOMA de todos os pares eh %d, e a QUANTIDADE de impares eh %d", sigmaEven, quantityOdd);
    return 0;
}