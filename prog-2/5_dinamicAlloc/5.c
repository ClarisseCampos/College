#include <stdio.h>
#include <stdlib.h>
int* interseccao(int *x1, int *x2, int n1, int n2, int* qtd){
    int i,j,k;
    *qtd = 0;
    for(i = 0;i < n1; i++){
        for(j = 0;j < n2; j++){
            if(x1[i] == x2[j]){
                *qtd = *qtd + 1;
            }
        }
    }
    int * x3 = (int*) malloc(sizeof(int)*(*qtd));

    k = 0;
    for(i = 0;i < n1; i++){
        for(j = 0;j < n2; j++){
            if(x1[i] == x2[j]){
                x3[k] = x1[i];
                k++;
            }
        }
    }
    return x3;
}

int main(){
    int n1, n2, qtd;

    int x1[] = {1,3,5,6,7};
    int x2[] = {1,3,4,6,8};
    int * x3;

    n1 = sizeof(x1)/sizeof(int);
    n2 = sizeof(x2)/sizeof(int);

    x3 = interseccao(x1,x2,n1,n2,&qtd);

    printf("\nQuantidade na intercescao: %d\n", qtd);
    for(int i = 0;i < qtd;i++){
        printf("%d ", x3[i]);
    }
    
    free(x3);

    return 0;
}