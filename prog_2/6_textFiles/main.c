/*) 2) Fa¸ca um programa que leia 5 n´umeros do teclado e escreva os
n´umeros pares no arquivo pares.dat e os ´ımpares no arquivo
impares.dat, ambos na raiz do drive C*/

#define N 5

#include <stdio.h>
int main(void){
    FILE * f; int i, j, qPares = 0, num[N];
    f = fopen("/home/clarisse/numeros.txt","w");

    for(i = 0; i < N; i++){
        printf("\n[%d/%d] Set a number: ", i, N); scanf("%d", &num[i]);
        if((num[i]%2) == 0){
            qPares++;
        }
    }
    int pares[qPares];

    fputs("\nNumbers you said: ", f);
    j = 0;
    for(i = 0; i < N-1; i++){
        fprintf(f, "%d, ", num[i]);
        if((num[i]%2) == 0){
            pares[j] = num[i];
            j++;
        }
    } 
    fprintf(f, "%d", num[N-1]);

    fputs("\nNumbers that are even: ", f);

    for(i = 0; i < qPares; i++){
        fprintf(f, "%d, ", pares[i]);
    }

    fclose(f);

}