#include <stdio.h>
#define MAXROWS 100
#define MAXCOLS 100

typedef struct matrix {
	int rows, cols;
	int data[MAXROWS][MAXCOLS];
}Matrix;

void print_matrix(Matrix *m) {
	for (int i = 0; i < m->rows; i++) {
		for (int j = 0; j < m->cols; j++) {
			printf("%d ", m->data[i][j]);
		}
		printf("\n");
	}
}

void add_matrix(Matrix *a, Matrix *b, Matrix *c) {
	for (int i = 0; i < c->cols; i++) {
		for (int j = 0; j < c->rows; j++) {
			c->data[i][j] = a->data[i][j] + b->data[i][j];
		}
	}
}

void sub_matrix(Matrix* a, Matrix* b, Matrix* c) {
	for (int i = 0; i < c->cols; i++) {
		for (int j = 0; j < c->rows; j++) {
			c->data[i][j] = b->data[i][j] - a->data[i][j];
		}
	}
}


int main() {
	printf("2071360 이종범\n");
	Matrix A = { 3,3,{{1,2,3},{4,5,6},{7,8,9}} };
	Matrix B = { 3,3,{{11,12,13}, {14,15,16}, {17,18,19}} };
	Matrix C = { 3,3, };
	
	printf("A의 행렬은 : \n");
	print_matrix(&A);
	printf("B의 행렬은 : \n");
	print_matrix(&B);
	
	add_matrix(&A, &B, &C);
	printf("C의 행렬은 : \n");
	print_matrix(&C);

	sub_matrix(&A, &B, &C);
	printf("C의 행렬은 : \n");
	print_matrix(&C);
}