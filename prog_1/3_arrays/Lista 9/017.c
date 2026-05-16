#include <stdio.h>
int main(){
    int v[10], i, j, toCompare;

    printf("\n/-----Declare o primeiro vetor-----/");
    for(i = 0; i < 10; i++){
        printf("\n[%d/%d] Set a number: ", i+1, 10);scanf("%d", &v[i]);
    }
    printf("\n/-----Declare o segundo vetor-----/");
    for(i = 0; i < 10; i++){
        printf("\n[%d/%d] Set a number: ", i+1, 10);scanf("%d", &toCompare);
        for(j = 0;j < 10; j++){
            if(v[j] == toCompare){
                printf("\nEsta contido");
                break;
            }
        }
        if(j == 10){
            printf("\nNao esta contido");
        }
    }
    return 0;
}