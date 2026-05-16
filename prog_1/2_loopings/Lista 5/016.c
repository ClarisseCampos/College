#include <stdio.h>
// deu pau

int main(){
    int valorInicial, valorFinal, tempo = 1, m, c;
    printf("Valor inicial: "); scanf("%d", &valorInicial);printf("\nValor final: "); scanf("%d", &valorFinal);

    valorInicial = valorInicial*100; valorFinal = valorFinal*100;
    c = valorInicial;

    while(m<= valorFinal){
        m = c*(1+0.005*tempo);
        c = m; tempo++;
    }
    printf("\nTempo: %d", tempo);
    return 0;
}