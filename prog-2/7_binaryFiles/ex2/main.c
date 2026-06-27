#include <stdio.h>

int sizeArray(FILE *f){
	int i, aux, qtd = 0;
	while(fread(&aux,sizeof(int),1,f) == 1){
		qtd++;
	}
	rewind(f);
	return qtd;

}

int bubblesort(FILE *f, int * v, int qtd){
	int i,j,aux;

	for(i = 0;i < qtd;i++){
		fread(&v[i],sizeof(int),1,f);
	}
	
	for(i = 0;i < qtd; i++)
	{
		for(j = 0; j < qtd-1-i;j++)
		{
			if(v[j] > v[j+1]){
				aux = v[j];
				v[j] = v[j+1];
				v[j+1] = aux; 
			}
		}
	}
	i = 0; aux = 0;
	while(i < qtd){ 
		if(v[i] != v[i+1]){
			aux++;
		}
		i++;
	}
	return aux;
}

int main(){
	int originalQtd, qtdSemRepeticao;
	FILE * f = fopen("questao2.bin","rb");
	if(f == NULL){
		printf("\nErro"); return 0;
	}
	originalQtd = sizeArray(f);

	printf("\nTamanho original: %d\n", originalQtd);

	int v1[originalQtd];

	qtdSemRepeticao = bubblesort(f,v1, originalQtd);


	//******************************************** */
	printf("\nVetor ordenado: ");
	for(int i = 0;i < originalQtd; i++){
		printf("%d, ", v1[i]);
	}
	printf("\nQtd sem repeticao: %d\n",qtdSemRepeticao);

	fclose(f);
	return 0;
}
