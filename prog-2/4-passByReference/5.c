#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
/*Na Teoria de Sistemas, define-se como elemento minimax de uma matriz o menor elemento da 
linha  em  que  se  encontra  o  maior  elemento  da  matriz.  Faça  uma  função  que  receba  como 
parâmetro uma matriz A[5][5] e retorne o valor do elemento minimax, bem como a linha e coluna 
onde ocorreu*/

void inputMatrix(int m[N][N]){
    int i,j;
    for(i = 0;i < N; i++){
        for(j = 0;j < N; j++){
            m[i][j] = (rand() % 90) + 10;
        }
    }
}
void outputMatrix(int m[N][N]){
    int i,j;
    for(i = 0;i < N; i++){
        for(j = 0;j < N; j++){
            printf("%d\t", m[i][j]);
        }
        printf("\n\n");
    }
}

int minmax(int m[N][N], int *linha, int *coluna){
    int i,j, mx;

    mx = m[0][0];
    * linha = 0;
    for(i = 0; i < N; i++){
        for(j = 0;j < N; j++){
            if(m[i][j] > mx){
                mx = m[i][j];
                *linha = i;
            }
        }
    }
    mx = 0;
    mx = m[*linha][0];
    *coluna = 0;
    for(j = 0; j < N; j++){
        if(m[*linha][j] < mx){
            mx = m[*linha][j];
            *coluna = j;
        }
    }
    return mx;
}
int main(){
    srand(time(NULL));
    
    int mx, linha, coluna, m[N][N];

    inputMatrix(m);
    printf("\n\t=== Matriz ===\n");
    outputMatrix(m);
    mx = minmax(m, &linha, &coluna);

    printf("\nElemento minmax: %d em [%d,%d]\n", mx, linha, coluna);

    return 0;
}