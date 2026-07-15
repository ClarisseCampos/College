#ifndef ALUNOS_H
#define ALUNOS_H

typedef struct{
    char nome[50];
    float nota;
}ALUNO;

void cadastrar(ALUNO *a);
void imprimir(ALUNO a);

#endif