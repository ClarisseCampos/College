#include <stdio.h>
/*case converter*/

void convertCase(char * c){
    *c = *c ^ ' ';
};
int main(){
    char c;
    printf("\nSet a char: "); scanf("%c",&c);

    convertCase(&c);

    printf("\n%c", c);

    return 0;
}