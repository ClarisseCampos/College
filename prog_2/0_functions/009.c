#include <stdio.h>

int primeOrNot(int num){
	for(int i = num-1; i > 1; i--){
		if((num % i) == 0){
			return 0;
		}
	}
	return 1;
}
int main(){
	int num;
	printf("\nSet a number: ");scanf("%d", &num);

	printf("\n%s", primeOrNot(num)?"It's prime" : "No, it's not prime");

return 0;
}
