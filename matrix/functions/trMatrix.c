#include "stdlib.h"
#include "../matrix.h"

float tr(float **matrix, int n){
	n--;
	if(n == 0)
		return matrix[n][n];	
	return matrix[n][n] + tr(matrix, n);
}
