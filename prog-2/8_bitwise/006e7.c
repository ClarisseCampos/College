#include <stdio.h>

void compactaCaracteres(char c1, char c2, unsigned short int * rar){
    *rar = c1 << 8 | c2;
}
void descompactaCaracteres(char * c1, char * c2, unsigned short int rar){
    *c1 = rar >> 8;
    *c2 = rar & 0xFF;
}

int main(){

    char c1, c2;
    unsigned short int rar;

    printf("\nChar 1: ");scanf("%c", &c1);
    getchar();
    printf("\nChar 2: ");scanf("%c", &c2);

    compactaCaracteres(c1,c2,&rar);
    printf("\nCompactado: %u", rar);
    descompactaCaracteres(&c1,&c2,rar);
    printf("\nDescompactado: c1 = %c, c2 = %c\n", c1,c2);

    
    return 0;
}