#include <stdio.h>
/* Desenvolva um programa em C que solicite ao usuário 
informar  20  valores  inteiros  e  armazene  estes  valores  em  um  vetor. Após  ler  e 
armazenar  os  dados  no  vetor,  o  programa  em  C  deverá  verificar  quantos 
elementos do vetor estão repetidos e quantas vezes cada um se repete. Após o 
programa  em  C  deverá  mostrar  na  tela  um  relatório  com  estes  dados.  É 
importante ressaltar que os números só podem aparecer uma vez, não podendo 
aparecer números duplicados*/
int main(){
    int q = 10, id, i, j, counter, temp;
    int v[q];

    for(i = 0; i < q; i++){
        printf("\n[%d/%d] Set a number: ", i+1, q); scanf("%d", &v[i]);
    }
    for(i = 0; i < q; i++){
        temp = v[i]; id = 0; counter = 0;
        for(j = 0; j < q; j++){
            if(v[j] == temp && i != j){
                id = 1;
                counter++;
            }
        }
        if(v[i] != id){
            printf("\nThe number %d repeats %d times", temp, counter+1);
        }
        
    }

    return 0;
}