#include <stdio.h>
int main(){

    int i, q = 20, v[q], primeiroTermo, razao;

    printf("\nPrimeiro termo: ");scanf("%d", &primeiroTermo);
    printf("\nRazao: ");scanf("%d", &razao);

    for(i = 0; i < q; i++){
        v[i] = primeiroTermo + razao*i;
    }
    printf("\nSequencia (PA):\n");

    for(i = 0; i < q; i++){
        printf("%d, ", v[i]);
    }
    return 0;
}