#include <stdio.h>
float harmonicMean(float a,float b,float c){
	float media;
	if(a == 0 || b == 0 || c == 0){
		return 0;
	}
	a = 1/a; b = 1/b; c = 1/c;
	media = 3.0/(a+b+c); // important detail

	return media;
}
int main(){
	float n1,n2,n3; 
	printf("\nSet 3 grades:");scanf("%f%f%f", &n1, &n2, &n3);
	printf("\nHarmonic mean: %.2f", harmonicMean(n1,n2,n3));

return 0;
}
