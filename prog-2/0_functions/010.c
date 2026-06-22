#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

void randMatrixGenerator(int matrix[N][N]){
	int i,j;
	for(i = 0;i < N; i++){
		for(j = 0; j < N; j++){
			matrix[i][j] = rand() % 100;
		}
	}
}
void writeDownMatrix(int matrix[N][N]){
	int i,j;
	for(i = 0;i < N; i++){
		for(j = 0; j < N; j++){
			printf("%5d", matrix[i][j]);
		}
		printf("\n\n");
	}
}

int lineSum(int matrix[N][N], int line){
	int j, sum = 0;
	for(j = 0;j < N; j++){
		sum += matrix[line][j];
	}
	return sum;
}
int main(){
	srand(time(NULL));

	int matrix[N][N], l;

	randMatrixGenerator(matrix);writeDownMatrix(matrix);

	printf("\nSelect line: "); scanf("%d", &l);
	printf("Soma da linha %d: %d", l, lineSum(matrix,l));

	return 0;
}
