#include <stdio.h>
float area(float b, float h){
	return (b*h)/2;
}
int main(){
	float base, high;
	printf("\nSet base and highness: "); scanf("%f%f", &base,&high);
	printf("\n%.2f", area(base,high));

return 0;
}
