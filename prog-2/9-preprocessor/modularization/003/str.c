#include "str.h" 

int tamanho(char *str){
    int i;
    for(i = 0;str[i] != '\0';i++);
    return i; 
}
void inverterCase(char *str){
    for(int i = 0;str[i] != '\0'; i++){
        if(str[i] != ' '){
          str[i] = str[i] ^ ' ';  
        }
        
    }
}

void copiarstring(char *origem, char *destino){
    int i;
    for(i = 0; origem[i] != '\0'; i++){
        destino[i] = origem[i];
    }
    destino[i] = '\0';
}