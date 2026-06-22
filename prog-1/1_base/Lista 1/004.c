#include <stdio.h>
int main(){
    float a, b; 
    printf("\nADDING 2 NUMBERS!! (press [0x0] to close) ");
    for(;;){
        printf("\nSet a number: ");scanf("%f", &a);
        printf("\nSet another one: ");scanf("%f", &b);

        if(a == 0 && b == 0){
            break;
        }else{
            printf("\n%.2f + %.2f = %.2f", a, b, a/b);
        }
    }

    return 0;
}