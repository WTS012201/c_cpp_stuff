#include "../matrix.h"
#include "stdlib.h"
#include "stdio.h"

float** dotProd(float** matrix, int m, int n, float c){
	int i, j;
	for(i = 0; i < m; i++)
		for(j = 0; j < n; j++)
			matrix[i][j] *= c;
	return matrix;
}
void printMatrix(float** matrix, int m, int n){
	int i, j;
	printf("\n");
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++)
			printf("%8.2f ", matrix[i][j]);
		printf("\n");
	}
}
