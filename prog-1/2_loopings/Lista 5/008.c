#include <stdio.h>
int main(){
    int valorPorHora, entrada, saida, counter = 0, diferenca = 0, valorFinal;
    printf("Valor p/h: ");scanf("%d", &valorPorHora);

    for(int i = 1; i<23; i++){
        printf("(%d/23) Hora de entrada: ", i);scanf("%d", &entrada);
        printf("(%d/23) Hora de saida: ", i);scanf("%d", &saida);

        diferenca = saida - entrada;
        counter = counter + diferenca;
    }
    valorFinal = counter*valorPorHora;
    printf("Salario: %d", valorFinal);
    return 0;
}