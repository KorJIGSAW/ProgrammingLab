#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()

{
	int n, i, sum = 0;
	int count = 0;
	printf("2071360 ������\n");
	// n �Է�
	printf("�����Է� : ");
	scanf("%d", &n);
	// ������� ��� ����ϰ� sum�� ���Ѵ�.
	printf("��� : 1 ");
	for (i = 2; i < n; i++) {
		if (n % i == 0) {
			printf("%d ", i);
			sum += i;
		}
	}
	printf("+= %d", sum + 1);
	// sum�� ����Ѵ�.
}