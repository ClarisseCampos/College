#include <stdio.h>
#include "calc.h"

int main(){
  int x,y;

  printf("\nSet values for x and y: ");scanf("%d %d", &x,&y);

  printf("\n------ CALCULATOR -------");
  printf("\n%d + %d = %d ", x,y,add(x,y));
  printf("\n%d - %d = %d",  x,y,subtract(x,y));
  printf("\n%d x %d = %d", x,y,multiply(x,y));
  printf("\n%d / %d = %.2f", x,y,divide(x,y));

    return 0;
}

/*Como compilar e rodar:
    gcc main.c calc.c -o output && ./output
*/