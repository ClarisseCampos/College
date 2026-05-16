#include <stdio.h>
typedef unsigned long long ull;

ull factorial(int number){
	int i; ull fact = number;
	for(i = number-1; i > 0; i--){
		fact = fact*i;
	}
	return fact;
}
int main(){
	int number;
	printf("\nSet a number: "); scanf("%d", &number);
	printf("\nFatorial: %llu", factorial(number));

return 0;
}
