#include <stdio.h>
int main(){
    int q = 5, i;
    int v[q];

    for(i = 0; i < q; i++){
        printf("\n[%d/%d] Set a number: ", i+1, q); scanf("%d", &v[i]);
    }

    return 0;
}