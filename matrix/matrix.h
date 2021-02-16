#ifndef __MATRIX_H
#define __MATRIX_H

float det(float** matrix, int n);
float tr(float** matrix, int n);
void printMatrix(float** matrix, int m, int n);
float** dotProd(float** matrix, int m, int n, float C);
#endif
