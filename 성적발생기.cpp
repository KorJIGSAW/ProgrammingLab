// ���α׷��ַ� 5��
// Lab5-4 ���� �߻��ϱ�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
	int i, j, n, r;
	int sum = 0; // ����
	// ������ �ο��� 0:A+, 1:A, ... D, 8:F
	char* grade_str[] = { "A+", "A ", "B+", "B ", "C+", "C ", "D+", "D ", "F " };
	int grade_index, grade_count[9] = { 0 };
	int* scores[9];
	int score1;

	scanf("%d", &n);
	for (i=0;i<9;i++)
		scores[i] = (int *)malloc(sizeof(int)*n);
	srand(time(NULL)); // ���� �ʱ�ȭ
	for (i = 0; i < n; i++) {
		score1 = // 0 ~ 100
			printf("%d ", score1);
		// sum �� ���Ѵ�.
		// grade_index �� ���Ѵ�. 0:A+, 1:A ...
		// grade_count[]�� ������Ų��.
		grade_count[grade_index]++;
	}
	printf("\n\nn=%d ��� = %.2f\n", n, ((double)sum) / n);
	for (i = 0; i < 9; i++) {
		// ȭ��� ���� ���
		printf("\n");
	}
}