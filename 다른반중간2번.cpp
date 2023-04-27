#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int isPrime(int n) {
	int i;
	if (n <= 1)
		return 0;
	for (i = 2; i <= (n / 2); i++)
		if ((n % i) == 0)
			break;
	return (i > (n / 2));
}
int isFibo(int n) {
	int f0 = 0, f1 = 1, f2 = 1;
	while (f0 <= n) {
		if (f0 == n)
			return 1;
		f0 = f1;
		f1 = f2;
		f2 = f1 + f0;
	}
	return 0;
}

int main()
{
	printf("2071360 이종범\n");

	int i, n;
	int fibo[100];
	int fibo_count = 0;

	printf("n입력: ");
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++) {
		if (isPrime(i)) {
			if (isFibo(i)) {
				printf("[%d] ", i);
			}
			else
				printf("%d ", i);
		}
	}
	printf("\n");
}
