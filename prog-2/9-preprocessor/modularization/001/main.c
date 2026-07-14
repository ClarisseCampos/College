#include <stdio.h>
#include "calc.h"

int main(){

  printf("5 + 5 = %d\n", add(5, 5));
  printf("6 - 4 = %d\n", subtract(6, 4));

    return 0;
}

/*Como compilar e rodar:
    gcc main.c calc.c -o output && ./output
*/