#include <stdio.h>

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
		sum += numbers[i];
	}
	rewind(f);
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
	float element, average;

	FILE * f = fopen("questao1.bin", "rb");

	average = media(&qtdNumbers, f);
	element = smallestAverageBigger(qtdNumbers, average, f);

	printf("\nMenor elemento maior ou igual à média calculada: %.2f\n", element);
	fclose(f);

	return 0;
}