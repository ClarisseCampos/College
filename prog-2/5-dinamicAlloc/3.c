#include <stdio.h>
#include <stdlib.h>

char * ultimo_nome(char * nome_completo){
    int i, i2, qCaracteres = 0; char * s;
    
    for(i = 0; nome_completo[i] != '\0';i++);
    qCaracteres = i;
    
    for(i = qCaracteres; nome_completo[i] != ' '; i--);
    i2 = i+1; qCaracteres -= i; // inclui caractere nulo
    
    s = (char *) malloc(qCaracteres*sizeof(char));
    if(s == NULL){
        printf("\nErro na alocacao"); return NULL;
    }
    
    for(i = 0; nome_completo[i2] != '\0'; i++, i2++){
        s[i] = nome_completo[i2];
    }
    s[qCaracteres] = '\0';
    
    return s;
}

int main(){
    char nome[51]; 
    char * s;
    printf("\nNome completo: "); fgets(nome,sizeof(nome),stdin);
    
    s = ultimo_nome(nome);
    
    printf("Sobrenome: %s", s);
    free(s);
    return 0;
}
