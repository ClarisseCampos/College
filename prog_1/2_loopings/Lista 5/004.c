#include <stdio.h>

int main(){
    int resto, dividendo,divisor, quociente = 0, identify = 0;

    for(;;){
        printf("\nDividendo: ");scanf("%d", &dividendo);printf("\nDivisor: ");scanf("%d", &divisor);
        if(divisor == 0){
            printf("\nFavor, inserir valor valido");
        }else{
            if(divisor < 0 && dividendo < 0){
                divisor = -divisor; dividendo = -dividendo;
            }else if(divisor < 0 && dividendo > 0){
                divisor = -divisor;identify = 1;
            }else if(divisor > 0 && dividendo < 0){
                dividendo = -dividendo;identify = 1;
            }
            while(dividendo >= divisor){
                resto = dividendo - divisor;
                dividendo = resto;
                quociente++;
            }
            if(identify == 1){
                quociente = -quociente;
                }
            printf("\nQuociente: %d", quociente);
            break;
        }
    }
    return 0;
}