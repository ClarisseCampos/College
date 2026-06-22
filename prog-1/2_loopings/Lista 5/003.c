#include <stdio.h>
int main(){
    int num1, num2, menor, counter = 0;

    printf("(1/20)SAN: ");scanf("%d", &num1);
    menor = num1;
    counter++;

    for(int i = 2;i<21;i++){
        printf("\n(%d/20)SAN: ", i);scanf("%d", &num2);
        if(num2 < menor){
            menor = num2;
            counter--;
        }else if(num2 == menor){
            counter++;
        }
    }
        printf("\nSmallest numerber: %d , it appears %d times", menor, counter);
    return 0;
}