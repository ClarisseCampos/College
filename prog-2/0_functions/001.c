#include <stdio.h>

int multiply(int a, int b){
	return a*b;
}
int main(){
	int a,b;
	printf("\nSet two numbers: ");scanf("%d%d", &a,&b);
	printf("\n%d", multiply(a,b));

return 0;
}
