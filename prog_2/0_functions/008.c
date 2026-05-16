#include <stdio.h>

int divisors(int num){
	int i, counter = 0;
	for(i = num; i > 0; i--){
		if((num % i) == 0){
			counter++;
		}
	}
	return counter;
}
int main(){
	int num;
	printf("\nSet a number: "); scanf("%d", &num);
	printf("\nThe number %d has %d divisors",num, divisors(num));

return 0;
}
