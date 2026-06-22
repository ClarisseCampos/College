#include <stdio.h>

/*O  operador  de  deslocamento  à  esquerda  pode  ser  usado  para  compactar  dois  valores  de 
caracteres em uma variável unsigned short int (2 bytes). 

Escreva um programa que leia 2 caracteres do teclado e passe para a função compactaCaracteres. 

Para compactar dois caracteres em uma variável  inteira  unsigned  short  int,  atribua  o  primeiro  caracter  a  variável  unsigned  short  int, 
desloque a variável para esquerda em 8 posições de bits e combine a variável unsigned com o 
segundo caractere usando o operador OR sobre bits.
------------------------------------------------------
Usando o operador deslocamento à direita e o operador AND sobre bits e uma máscara, escreva 
uma função descompactaCaracteres que recebe o inteiro unsigned short int e o descompacte em 
dois caracteres.
*/

void compactaCaracteres(char c1, char c2, unsigned short int * rar){
    *rar = c1 << 8 | c2;
}

int main(){

    char c1, c2;
    unsigned short int rar;

    printf("\nChar 1: ");scanf("%c", &c1);
    getchar();
    printf("\nChar 2: ");scanf("%c", &c2);

    compactaCaracteres(c1,c2,&rar);

    printf("\n%u\n", rar);
    
    return 0;
}