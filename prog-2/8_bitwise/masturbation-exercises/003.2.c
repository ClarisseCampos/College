#include <stdio.h>
#define N 4
/*Um painel tem 4 LEDs (0 a 3). O usuário digita o número de um LED para alternar seu estado (ligado/desligado). A cada alteração o painel é exibido atualizado. Digite 5 para encerrar.
Exemplo de execução:*/

void pannelStatus(int led[N]){
    int i; char bulb;
    printf("\n== Panel status ==");
    for(int i = 0;i < N; i++){
        bulb = led[i] ? '*': ' ';
        printf("\nL%d:[%c]",i, bulb);
    }
    printf("\n---------------");

}
int main(){
    int id, led[N] = {0,1,1,0};
    for(;;){
        pannelStatus(led);
        printf("\nChange status index (5 to exit): "); scanf("%d", &id);
        if(id == 5){
            break;
        }
        led[id] = led[id] ^ 1;
    }
    return 0;
}