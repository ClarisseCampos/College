#include <stdio.h>
int main(){
    int q = 5, i, v[q], menor;

    for(i = 0;i < q; i++){
        printf("\n[%d/%d] Set a number: ", i+1, q); scanf("%d",&v[i]);
    }

    menor = v[0];

    for(i = 0;i < q; i++){
        if(v[i] < menor){
            menor = v[i];
        }
    }
    
    printf("\nO menor valor do conjunto eh.. %d", menor);

    return 0;
}