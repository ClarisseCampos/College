#include <stdio.h>

int main(){
    float saldo; int tempo = 0;

    printf("Saldo: ");scanf("%f", &saldo);

    if(saldo < 200){
        while(saldo <= 200){
            saldo *= 1.05; tempo++;
        }
        printf("\nVc so pode tirar 200 no mes %d, dai lhe sobrara %.2f reais de saldo", tempo, saldo-200);
    }else{
        while(saldo >= 200){
            saldo = saldo*1.05-200; tempo++;
        }
        saldo *= 1.05; tempo++;
        printf("\nVc so pode tirar 200 ate o mes %d, pois la seu saldo sera de %.2f reais", tempo, saldo);
    }
    return 0;
}