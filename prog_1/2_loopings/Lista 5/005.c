#include <stdio.h>

    /*METODO DIFERENTE: Se dois números são diferentes, subtraia o menor do maior.Repita isso até que os dois números se tornem iguais.
    Quando isso acontecer, esse valor comum será o MDC.*/

int main() {
    int n1, n2, mdc = 1;
    int a, b;

    printf("SAN: ");scanf("%d", &n1);printf("\nSAN: "); scanf("%d", &n2);
    // copia os valores originais.
    a = n1;b = n2;

    while (a != b) {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }

    mdc = a;

    printf("\nmdc: %d\n", mdc);

    return 0;
}
