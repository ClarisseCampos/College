#include "alunos.h"
#include <stdio.h>

void cadastrar(ALUNO *a){
    printf("\nNome: ");
    scanf(" %49[^\n]", a->nome);
    printf("\nNota: ");
    scanf("%f", &a->nota);
}
void imprimir(ALUNO a){
    printf("\n%s: %.2f", a.nome, a.nota);
}