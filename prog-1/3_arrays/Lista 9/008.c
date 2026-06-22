#include <stdio.h>
int main(){
    
    int valores[10], i, j, counter_primos = 0, alarm;

    for(i = 0; i < 10; i++){
        printf("\n[%d/%d] Set a number ", i+1, 10);scanf("%d", &valores[i]);
    }
    printf("\nOs valores primos do conjunto sao..\n");

    for(i = 0; i < 10; i++)
    {
        alarm = 0;

        for(j = valores[i] - 1; j > 1; j--)
        {
            if((valores[i] % j) == 0){
                alarm = 1; break;}
        }

        if(valores[i] != 1 && valores[i] != 0 && !alarm){
            printf("%d, ", valores[i]); counter_primos++;
        }
    }
    printf("\nTotalizando assim %d primos", counter_primos);

    return 0;
}