#include <stdio.h>

int main(){
    int num1, num2, menor;

    printf("SAN: "); scanf("%d", &num1);
    menor = num1;

    do{
        printf("\nSAN: "); scanf("%d", &num2);
        if(num2 == 0){
            continue;
        }
        if(num2 < menor){
            menor = num2;
        }
    }while(num2 != 0);
    printf("\nMenor: %d", menor);



    return 0;
}