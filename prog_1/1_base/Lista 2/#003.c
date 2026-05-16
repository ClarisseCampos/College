#include <stdio.h>

int main(){
    int a;
    printf("SAI: ");
        scanf("%d", &a);
    if((a%2)==0){
        printf("par");
    }else{
        printf("impar");
    }
    return 0;
}