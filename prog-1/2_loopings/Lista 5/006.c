#include <stdio.h>

/*REGRINHA: mdc(a,b)*mmc(a,b) = a*b*/

int main(){

    int mmc, mdc, n1, n2, a, b, axb;

    printf("\nSAN: ");scanf("%d", &n1);printf("\nSAN: ");scanf("%d", &n2);

    a = n1; b = n2; axb = n1*n2;

    while(a != b){
        if(a>b){
            a = a-b;
        }else{
            b = b-a;
        }
    }
    mdc = a; mmc = axb/mdc;
    printf("\nMMC: %d", mmc);

    return 0;
}