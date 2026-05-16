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

int mainDiagonal_sum(int matrix[N][N]){
	int i, sum = 0;
	for(i = 0;i < N; i++){
		sum += matrix[i][i];
	}
	return sum;
}
int main(){
	srand(time(NULL));

	int matrix[N][N];

	randMatrixGenerator(matrix);writeDownMatrix(matrix);

	printf("\nSoma da diagonal principal: %d", mainDiagonal_sum(matrix));


	return 0;
}