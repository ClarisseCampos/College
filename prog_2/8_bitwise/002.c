#include <stdio.h>
//Utilizando operadores bitwise, troque duas variáveis.
int main(){
    int a = -12, b = 16;

    a = a^b;
    b = a^b;
    a = a^b;

    printf("\na = %d, b = %d\n", a,b);

    return 0;
}