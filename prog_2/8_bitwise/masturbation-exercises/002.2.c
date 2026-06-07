#include <stdio.h>
#define KEY 4

/*
Escreva um programa em C que cifre e decifre uma string usando o operador XOR (^).
O programa deve:
Armazenar uma string fixa (ex.: "OLA MUNDO")
Definir uma chave via #define
Cifrar a string aplicando XOR caractere a caractere com a chave
Imprimir os valores numéricos da string cifrada
Decifrar aplicando XOR novamente com a mesma chave
Imprimir a string decifrada — deve ser igual à original
*/


char * cifra(char * str){
    for(int i = 0;str[i] != '\0';i++){
        str[i] = str[i] ^ KEY;
    }
    return str;
}
int main(){
    char str[] = "PEIDEI MOLHADO!";

    printf("\nCifrada: %s", cifra(str));
    printf("\nDecifrada: %s\n", cifra(str));

    return 0;
}