#include <stdio.h>
int compactaHora(int hora,  int minuto, int segundo){
    return segundo | (minuto << 8) | (hora << 16);
}
void descompactaHora(int horaCampactada, int * hora, int * minuto, int *segundo){
    *segundo = horaCampactada & 0xff;
    *minuto = (horaCampactada >> 8) & 0xff;
    *hora = (horaCampactada >> 16) & 0xff;
}
int main(){
    int h = 14,m = 32,s = 25;
    int rar = compactaHora(h,m,s);

    printf("\nHora compactada: %b", rar);
    printf("\n--------------\n");
    h = 0;m = 0;s = 0;
    descompactaHora(rar,&h,&m,&s);
    printf("Hora descompactada: %d:%d:%d\n",h,m,s);
    return 0;
}
