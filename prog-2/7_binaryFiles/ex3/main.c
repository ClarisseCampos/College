#include <stdio.h>
struct estado{ 
    char nome[31];  //nome do estado
    int numveic; //numero de veiculos circulando
    int numacid; //numero de acidentes
}; 
typedef struct estado ESTADO;

ESTADO estado_maior_numero_acidentes(char * nome_arquivo){
	ESTADO st[26], maior;

	FILE *f = fopen(nome_arquivo, "rb");
	if(f == NULL){
		printf("\nErro");
	}

	int i = 0;
	while(fread(&st[i],sizeof(ESTADO),1,f) == 1){
		 printf("Estado: %s, N de veiculos: %d, N de acidentes: %.d\n",st[i].nome, st[i].numveic, st[i].numacid);
		 i++;
	}
	fclose(f);

	maior = st[0];
	for(i = 0;i < 26;i++){
		if(st[i].numacid > maior.numacid){
			maior = st[i];
		}
	}
	return maior;

}

int main(){
	ESTADO maior =  estado_maior_numero_acidentes("questao3.bin");
	printf("\nEstado com mais acidentes de transito: %s", maior.nome);
	return 0;
}
