#include "stdlib.h"
#include "stdio.h"
#include "matrix.h"
int main(){
	int i, j, n;
	scanf("%d", &n);
	float** matrix = (float**)malloc(n*sizeof(float*));
	
	for(i = 0; i < n; i++){
		matrix[i] = (float*)malloc(n*sizeof(float));
	}

	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			float val;
			scanf("%f", &val);
			matrix[i][j] = val;
		}
	}
	
	printf("\ntr(A) = %.2f\n", tr(matrix, n));
}
