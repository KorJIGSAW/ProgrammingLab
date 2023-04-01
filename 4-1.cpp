// 1�б� ���α׷��ַ� - 4��
// Lab4-1 ����Լ�

#include <stdio.h>
#include <windows.h>
int sum(int n)
{
	if (n <= 1) {
		return n;
	}
	else {
		return n + sum(n - 1);
	}
}
int oddsum(int n) // Ȧ���� ��
{
	if (n <= 1) {
		return n;
	}
	if (n % 2 == 1) {
		return n + oddsum(n - 2);
	}
	else {
		return n - 1 + oddsum(n - 3);
	}
}

int evensum(int n) // ¦���� ��
{
	if (n == 2) {
		return n;
	}
	if (n % 2 == 0) {
		return n + evensum(n - 2);
	}
	else {
		return n - 1 + evensum(n - 3);
	}
}

int factorial(int n)
{
	if (n == 2) {
		return n;
	}
	else {
		return n * factorial(n - 1);
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

int gcd(int a, int b) // �ִ� �����
{
	if (a == 0) {
		return b;
	}
	else {
		return gcd(b % a, a);//��Ŭ���� ȣ����
	}
}

void binary(int n)
{
	if (n < 2) {
		printf("%d", n);
	}
	else {
		binary(n / 2);
		printf("%d", n % 2);
	}
}

void jinbub(int n, int k) // 10���� n�� k�������� ���
{
	if (k == 16) {
		if (n < k) {
			printf("%d", n);
		}
		else {
			jinbub(n / k, k);
			printf("%c", n % k < 10 ? '0' + n % k : n % k + 55);
			//n % k + 55 => �������� 10�̻��϶� ABCDEF�� ����ϱ� ���� ��
			//'0' + n % k => �������� 10�̸��϶� �� ���� �״�� ����ϱ� ����.
		}
	}
	else {
		if (n < k) {
			printf("%d", n);
		}
		else {
			jinbub(n / k, k);
			printf("%d", n % k);
		}
	}
}
void main()
{
	printf("2071360 ������\n");
	int i, k, n = 10;
	printf("sum(%d) = %d\n", n, sum(n));
	n = 10;
	//printf("oddsum(%d) = %d\n", n, oddsum(n));
	n = 11;
	//printf("evensum(%d) = %d\n", n, evensum(n));
	printf("factorial(%d) = %d\n", n, factorial(n));
	printf("fibonacci = ");
	for (i = 0; i <= 30; i++)
		printf("%d ", fibo(i));
	//printf("%d:%d ", i, fibo(i));
	printf("\n");
	n = 12345;
	printf("binary(%d) = ", n);
	binary(n);
	printf("\n");

	n = 0x12abcdef; // 313249263

	printf("n=%d\n", n);
	for (k = 2; k <= 10; k++) {
		printf("%d���� : ", k);
		jinbub(n, k);
		printf("\n");
	}
	k = 16;
	printf("%d���� : ", k);
	jinbub(n, k);
	printf("\n");
	Sleep(10000);
}