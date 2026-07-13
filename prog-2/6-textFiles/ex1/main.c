#include <stdio.h>
#define N 3
typedef struct aluno{
    char nome[60];
    float n1,n2,n3;
}ALUNO;

void getNames(ALUNO *alunos, FILE * f){
    int c,h,i;
    char buffer[70];
    for(h = 0; h < N; h++){
        i = 0;
        while((c = getc(f)) != '\n'){
            alunos[h].nome[i] = c;
            i++;
        }
        alunos[h].nome[i++] = '\0';
        fgets(buffer, sizeof(buffer), f);
    }
}

int main(){
    ALUNO alunos[3];

    FILE *f = fopen("entrada.txt","r");
    if(f == NULL){
        printf("\nERRO!"); return 0;
    }
    getNames(alunos, f);

    printf("\nNome: %s", alunos[0].nome);
    printf("\nNome: %s", alunos[1].nome);
    printf("\nNome: %s", alunos[2].nome);
    /*---------------------------*/


    fclose(f);
    return 0;
}