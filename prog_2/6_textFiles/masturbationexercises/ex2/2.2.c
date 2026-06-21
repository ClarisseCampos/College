#include <stdio.h>
#define N 5

/*Leia os valores do arquivo numeros.txt (do exercício anterior) e calcule a soma e a média deles.
*/
int main(){
    char linha[10];
    FILE *f = fopen("c2.txt","r");
    if(f == NULL){
        printf("\nErro"); return 0;
    }

    
    fclose(f);

    return 0;
}