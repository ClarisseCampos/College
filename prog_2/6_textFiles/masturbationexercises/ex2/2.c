#include <stdio.h>
#define N 5
/*Peça ao usuário 5 números inteiros e grave cada um em uma linha do arquivo numeros.txt.*/

int main(){
    int i, n;
    FILE *f = fopen("c2.txt","a+");
    if(f == NULL){
        printf("\nErro"); return 0;
    }
    for(i = 0;i < N; i++){
        printf("\nSet a number: "); scanf("%d", &n);
        fprintf(f,"%d\n", n);
    }
    fclose(f);

    return 0;
}