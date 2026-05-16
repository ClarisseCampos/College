#include <stdio.h>
int main(){
    
    int valores[10], i, counter = 0;

    for(i = 0; i < 10; i++){
        printf("\n[%d/%d] Set a number ", i+1, 10);scanf("%d", &valores[i]);
        if(valores[i] < 0){
            counter++;
        }}

    printf("\nO conjunte contem %d elementos negativos\n", counter);

    for(i = 0; i < 10; i++){
        printf("%d, ", valores[i]);
        }

    return 0;
}