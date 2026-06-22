#include <stdio.h>

int main(){
    int n1,n, i = 2;

    printf("\nSet a value: "); scanf("%d", &n1); n = n1;

    while(n>1){
        if(n%i == 0){
            while(n%i == 0){
                n = n/i;
                printf("%d, ", i);
            }
            i++;
        }else{
            i++;
        }
    }
    return 0;
}