#include <stdio.h>
#include <stdlib.h>
int * fibonacci(int n){

    int * fb = (int *) malloc(sizeof(int)*n);
    if(fb == NULL){
        printf("\nErro na alocacao"); return NULL;
    }
    fb[0] = 0; fb[1] = 1;
    printf("\n%d, %d", fb[0], fb[1]);

    for(int i = 2;i < n; i++){
        fb[i] = fb[i-1] + fb[i-2];
    }

    return fb;
}
int main(){

    int i, n = 10;
    int * v = fibonacci(n);

    printf("\nSerie de fibonacci:\n");
    for(i = 0;i < n;i++){
        printf("%d", v[i]);
    }

    free(v);
    return 0;
}