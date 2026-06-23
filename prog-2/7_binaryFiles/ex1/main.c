#include <stdio.h>

int inputFile(FILE *f){
	int qtd;
	float numbers[] = {8.00,6.00,10.00,9.00,6.00,3.00,8.00,7.00,5.00,9.00};
	qtd = sizeof(numbers)/sizeof(float);
	fwrite(numbers, sizeof(float), qtd, f);
	return 1;
}

float media(int * qn, FILE *f){
	int i, qtdNumbers = 0;
	float ft, sum = 0;
	
	while(fread(&ft,sizeof(float),1,f) == 1){
		qtdNumbers++;
	}
	*qn = qtdNumbers;

	rewind(f);
	float numbers[qtdNumbers];

	for(i = 0;i < qtdNumbers;i++){
		fread(&numbers[i],sizeof(float),1,f);
		sum = sum + numbers[i];
	}

	return (float)sum/qtdNumbers;
}

float smallestAverageBigger(int qn, float average, FILE *f){
	int i,j, counter = 0;
	float numbers[qn], menor;
	for(i = 0;i < qn;i++){
		fread(&numbers[i],sizeof(float),1,f);
	}
	for(i = 0;i < qn; i++){
		if(numbers[i] >= average){
			counter++;
		}
	}
	float biggerorEqual[counter];
	for(i = 0, j = 0;i < qn; i++){
		if(numbers[i] >= average){
			biggerorEqual[j] = numbers[i];
			j++;
		}
	}
	menor = biggerorEqual[0];
	for(i = 0;i < counter; i++){
		if(biggerorEqual[i] < menor){
			menor = biggerorEqual[i];
		}
	}
	
	return menor;
}
int main(){
	int qtdNumbers;
	float average;
	FILE *f = fopen("ex1.dat","wb");
	if(f == NULL){
		printf("\nErro"); return 0;
	}
	inputFile(f);
	fclose(f);

	f = fopen("ex1.dat", "rb");

	average = media(&qtdNumbers, f);
	float n = smallestAverageBigger(qtdNumbers, average, f);

	printf("\n%.2f", n);
	fclose(f);

	return 1;
}
// criar arquivo com um certo numero de floats
// calcular a media dos valores
// escrever o valor do elemento <= a media

/*

*/