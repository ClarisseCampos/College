#include <stdio.h>
// par ou impar

int main(){
    int number; char * oddity;

    printf("\nSet a number: "); scanf("%d", &number);
    
    oddity = number & 1? "Impar": "Par";

    printf("\n%s\n", oddity);

    return 0;
}