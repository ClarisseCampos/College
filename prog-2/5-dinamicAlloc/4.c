#include <stdio.h>
#include <stdlib.h>

int * fibonacci(int n){

    int i, * fb = (int *) malloc(sizeof(int)*n);
    if(fb == NULL){
        printf("\nErro na alocacao"); return NULL;
    }

    for(i = 0;i < n; i++){
        fb[i] = 0;
    }
    fb[1] = 1;

    for(i = 2;i < n; i++){
        fb[i] = fb[i-1] + fb[i-2];
    }

    return fb;
}
int main(){

    int i, n = 10;
    int * v = fibonacci(n);

    printf("\nSerie de fibonacci:");
    for(i = 0;i < n;i++){
        printf("%d ", v[i]);
    }

    free(v);
    return 0;
}