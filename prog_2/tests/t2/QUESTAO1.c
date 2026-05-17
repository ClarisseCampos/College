#include <stdio.h>

void extremos(char * texto, int * maior, int * menor, int * qtd_numeros){
    int i, idx = 0;
    
    for(i = 0; texto[i] != '\0';i++){
        if(texto[i] >= '0' && texto[i] <= '9'){
            if(texto[i+1] < '0'|| texto[i+1] > '9'){
                (*qtd_numeros)++;
            }
        }
    }
    
    int numeros[*qtd_numeros] = {};
    
    for(i = 0; texto[i] != '\0'; i++)
    {
        if(texto[i] >= '0' && texto[i] <= '9')
        {
           numeros[idx] = numeros[idx]*10 + (texto[i]-'0');
           
           if(texto[i+1] < '0'|| texto[i+1] > '9'){
               idx++;
           }
        }
    }
    * maior = numeros[0]; * menor = numeros[0];
    for(i = 0;i < *qtd_numeros;i++){
        if(numeros[i] > *maior){
            *maior = numeros[i];
        }else if(numeros[i] < *menor){
            *menor = numeros[i];
        }
    }
}

int main()
{
    int maior, menor, qtd_numeros = 0;
    
    char texto[] = "abc23d7x100z4";
    
    extremos(texto, &maior,&menor,&qtd_numeros);
    printf("Quantidade: %d\n", qtd_numeros);
    printf("Maior: %d\nMenor: %d", maior, menor);

    return 0;
}