#include <stdio.h>
#define PI 3.14159
#define AREA_CIRCULO(r) ((PI) * (r) * (r))
#define AREA_QUADRADO(l) ((l)*(l))
#define AREA_RETANGULO(l1, l2) ((l1)*(l2))

int main(){

    int c = 2;
    float area;

    area = AREA_CIRCULO(c + 2);
    printf("\nArea do circulo: %.2f\n", area);

    area = AREA_QUADRADO(2 + c);
    printf("Area do quadrado: %.2f\n", area);

    area = AREA_RETANGULO(3 + c,6 - c);
    printf("Area do retangulo: %.2f\n", area);
    return 0;
}