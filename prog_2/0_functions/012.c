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

int secondDiagonal_sum(int matrix[N][N]){
	int i,j, sum = 0;
	for(i = 0, j = N-1;i < N; i++, j--){
		sum += matrix[i][j];
	}
	return sum;
}
int main(){
	srand(time(NULL));

	int matrix[N][N];

	randMatrixGenerator(matrix);writeDownMatrix(matrix);

	printf("\nSoma da diagonal secundaria: %d", secondDiagonal_sum(matrix));


	return 0;
}