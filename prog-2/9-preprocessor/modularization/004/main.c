#include <stdio.h>
#include "alunos.h"
int main(){
    ALUNO a;

    cadastrar(&a);
    imprimir(a);

    return 0;
}
/*Compilar:
gcc main.c alunos.c -o output && ./output
*/