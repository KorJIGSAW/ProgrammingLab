// 프로그래밍랩 6주
// Lab6-2 행렬 연산 Matrix 구조체 사용
#include <stdio.h>
#define MAXROWS	3
#define MAXCOLS	3

typedef struct matrix {
	int rows, cols;
	int data[MAXROWS][MAXCOLS];
} Matrix;

#define MAX(a, b) (a>=b ? (a) : (b))
void print_matrix(Matrix* m)
{
	for (int i = 0; i < MAXROWS; i++) {
		for (int j = 0; j < MAXCOLS; j++) {
			printf("%d ", m->data[i][j]);
		}
		printf("\n");
	}
}
void add_matrix(Matrix* a, Matrix* b, Matrix* c)
{
	for (int i = 0; i < MAXROWS; i++) {
		for (int j = 0; j < MAXCOLS; j++) {
			c->data[i][j] = a->data[i][j] + b->data[i][j];
		}
	}
}
void sub_matrix(Matrix* a, Matrix* b, Matrix* c)
{
	for (int i = 0; i < MAXROWS; i++) {
		for (int j = 0; j < MAXCOLS; j++) {
			c->data[i][j] = a->data[i][j] - b->data[i][j];
		}
	}
}
void main()
{
	//int A[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	Matrix A = {3,3,{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}} };
	//int B[ROWS][COLS] = {{11, 12, 13}, {14, 15, 16}, {17, 18, 19}};
	Matrix B = {3,3, {{11, 12, 13}, {14, 15, 16}, {17, 18, 19}} };
	//int C[ROWS][COLS] = {0};
	Matrix C;

	printf("Matrix ADT 사용\n");
	printf("A = \n"); 	print_matrix(&A);
	printf("B = \n"); 	print_matrix(&B);
	add_matrix(&A, &B, &C);
	printf("A + B = \n"); print_matrix(&C);
	sub_matrix(&B, &A, &C);
	printf("B - A = \n"); print_matrix(&C);
}