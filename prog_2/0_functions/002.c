#include <stdio.h>

int idade(int age){
	if(age >= 18){
		return 1;
	}else{
		return 0;
	}
}

int main(){
	int age;
	printf("\nIdade: "); scanf("%d", &age);

	idade(age)?printf("\nMaior de idade"):printf("\nMenor de idade");

return 0;
}
