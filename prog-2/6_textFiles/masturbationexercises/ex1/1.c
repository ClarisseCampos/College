
#include <stdio.h>
/*Faça um programa em C que leia um arquivo de texto;
Em seguida inclua uma nova frase a esse arquivo (sem excluir o que já tinha);
Por fim, leia novamente o arquivo modificado.*/

int main(){
    FILE * f = fopen("c1.txt", "a+");
    if(f == NULL){
        printf("\nError");
        return 0;
    }
    int c;

    while((c = getc(f)) != EOF){
        putchar(c);
    }
    fputs("\nUma frase poetica", f);

    fclose(f);
    return 0;
}