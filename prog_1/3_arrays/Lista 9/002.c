#include <stdio.h>
int main(){
    int quantidade =  10;
    int counterNegative = 0, i, j, arrayal[quantidade];

    for(i = 0; i < quantidade; i++){
        printf("\nSet a number: "); scanf("%d", &arrayal[i]);
        if(arrayal[i] < 0){
            counterNegative++;
        }
    }

    printf("\nO conjunto possui %d numeros negativos", counterNegative);
    int arrayNegative[counterNegative];
    i = 0; j = 0;

    while(j < counterNegative){
        if(arrayal[i] < 0){
            arrayNegative[j] = arrayal[i];
            j++;
        }
        i++;
    }
    for(i = 0; i < counterNegative; i++){
        printf("\n%d (pos.%d)", arrayNegative[i], i);
    }

    return 0;
}