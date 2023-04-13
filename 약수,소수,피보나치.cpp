#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int isPrime(int n) 
{
	int count = 0;

	for (int i = 2; i < n + 1; i++) {
		if (n % i == 0) {
			count++;
		}
	}
	if (count == 1) {
		return 1;
	}
}


int fibo(int n) // recursive ���
{
	if (n <= 1) {
		return n;
	}

	else {
		return fibo(n - 1) + fibo(n - 2);
	}
}
void main()
{
	printf("2071360 ������\n");
	int i, n; // ���� �߰��ص� ��
	int count = 0;
	// n �Է�
	scanf("%d", &n);
	// ����� ���
	printf("��� : ");
	for (i = 2; i < n; i++) {
		if (n % i == 0) {
			printf("%d ", i);
		}
	}
	printf("\n");
	// �Ҽ��� ���
	int k;
	printf("�Ҽ� : ");
	for (i = 2; i <= n; i++) {
		k = isPrime(i);
		if (k == 1) {
			printf("%d ", i);
		}
	}
	printf("\n");
	
	// Fibonacci �� ���
	printf("Fibonacci : ");
	for (i = 2; i < n; i++) {
		if (fibo(i) > n) {
			k = i;
			break;
		}
	}
	for (i = 2; i < k; i++) {
		printf("%d ", fibo(i));
	}
	
	printf("\n");

}