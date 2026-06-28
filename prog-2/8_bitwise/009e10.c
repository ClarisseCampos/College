#include <stdio.h>
int compactaHora(int hora,  int minuto, int segundo){
    return segundo | (minuto << 8) | (hora << 16);
}
int main(){
    int h = 14,m = 32,s = 25;

    printf("\nCodec: %d\n", compactaHora(h,m,s));
    return 0;
}
