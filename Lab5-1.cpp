// ���α׷��ַ� 5��
// Lab5-1 ���� n�� (start ~ end) �߻���Ű�� �հ� ��� ���
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
	int i, n, r, sum = 0;
	int start, end;
	srand(time(NULL)); // ������ �ʱ�ȭ
	//srand((unsigned)time(NULL));
	//printf("������ ����: ");
	n = 20;
	//scanf("%d", &n);
	printf("���۰� �� : ");
	scanf("%d %d", &start, &end);

	for (i = 0; i < n; i++) {
		r = start + rand() % (end - start + 1); //�ʱⰪ + rand() % (������+1) -> ������ = �������� - �ʱⰪ
		printf("%d ", r);
		sum += r;
	}
	printf("\nsum=%d avg=%d\n", sum, sum / n);

}