#include <stdio.h>

int main(){
    int a;
    printf("SAN: ");
        scanf("%d", &a);
    if(a!=0){
        if(a>0){
            printf("\nPositive");
        }else{
            printf("\nNegative");
        }
    }else{
        printf("\nZero");
    }
    return 0;
}