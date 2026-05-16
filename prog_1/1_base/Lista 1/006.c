#include <stdio.h>
int main(){
    int a, b; 
    printf("\nSQUARE OF THE DIFFERENCE!! (press [0x0] to close) ");
    for(;;){
        printf("\nSet a number: ");scanf("%d", &a);
        printf("\nSet another one: ");scanf("%d", &b);

        if(a == 0 && b == 0){
            break;
        }else{
            printf("\n(%d - %d)^2 = %d", a, b, (a-b)*(a-b));
        }
    }

    return 0;
}