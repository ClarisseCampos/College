#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1,n2,qtd;
    int i,j,k;
    int x1[] = {1,3,5,6,7};
    int x2[] = {1,3,4,6,8};

    n1 = sizeof(x1)/sizeof(int);
    n2 = sizeof(x2)/sizeof(int);
    // x3 irá conter {1,3,6}

    qtd = 0;
    for(i = 0;i < n1; i++){
        for(j = 0;j < n2; j++){
            if(x1[i] == x2[j]){
                qtd++;
            }
        }
    }
    int * x3 = (int*) malloc(sizeof(int)*qtd);

    k = 0;
    for(i = 0;i < n1; i++){
        for(j = 0;j < n2; j++){
            if(x1[i] == x2[j]){
                x3[k] = x1[i];
                k++;
                if(k >= qtd){
                    break;
                }
            }
        }
    }

    printf("\nQuantidade na intercescao: %d\n", qtd);
    for(i = 0;i < qtd;i++){
        printf("%d ", x3[i]);
    }
    
    free(x3);

    return 0;
}