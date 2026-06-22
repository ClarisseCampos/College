#include <stdio.h>
int main(){
    int q = 50, i, v[q], maior;

    for(i = 0;i < q; i++){
        printf("\n[%d/%d] Set a number: ", i+1, q); scanf("%d",&v[i]);
    }

    maior = v[0];

    for(i = 0;i < q; i++){
        if(v[i] > maior){
            maior = v[i];
        }
    }
    
    printf("\nO maior valor do conjunto eh.. %d", maior);

    return 0;
}