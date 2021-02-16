#include "stdlib.h"
#include "matrix.h"
float detMinorVal(float **matrix){
	return matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
}

int sgn(int i){
	if(i % 2 == 0)
		return 1;
	return -1;
}

float** minor(float **matrix, int n, int co){
	float** minor = (float**)malloc(n*sizeof(float*));
	int i, j, c;

	for(i = 0; i < n; i++){
		minor[i] = (float*)malloc(n*sizeof(float*));
	}
	
	for(i = 1; i < n; i++){
		for(j = 0, c = 0; j < n; j++){
			if(j == co){
				continue;
			}
			minor[i - 1][c++] = matrix[i][j];
		}
	}	
	
	return minor;
}

float det(float** matrix, int n){
	float sum = 0; int i, k = n - 1;
	
	if(n == 2)
		return detMinorVal(matrix);
	
	for(i = 0; i < n; i++){
		sum += matrix[0][i] * sgn(i) * det(minor(matrix, n, i), k);
	}
	return sum;	
}
