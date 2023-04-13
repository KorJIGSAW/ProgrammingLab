#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
long long fibo(int n) // recursive 방식
{
	if (n <= 1) {
		return n;
	}
	else {
		return fibo(n - 1) + fibo(n - 2);
	}
}

int is_prime(int n) {
	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			return 0;
		}
	}
	return 1;
}
*/

int isPrime(int n) {
	int i;

	if (n <= 1)
		return 0;
	for (i = 2; i <= (n / 2); i++)
		if ((n % i) == 0)
			break;
	return (i > (n / 2));
}


int main() {
	/*
	long long n;
	scanf("%lld", &n);
	long long fivo[100];
	
	for (int i = 0; fibo(i) < n; i++) {
		fivo[i] = fibo(i);
		if (fivo[i] < 2) {
			printf("%d ", fivo[i]);
		}
		else {
			if (is_prime(fivo[i])) {
				printf("[%d] ", fivo[i]);
			}
			else {
				printf("%d ", fivo[i]);
			}
		}
	}
	*/
	int i, n;
	int f0 = 0, f1 = 1, f2 = 1;
	int fibo[100];
	int fibo_count = 0;
	
	printf("\nn입력 : ");
	scanf("%d", &n);

	while (f0 <= n) {
		if (isPrime(f0))
			printf("[%d] ", f0);
		else
			printf("%d ", f0);
		f0 = f1;
		f1 = f2;
		f2 = f1 + f0;
	}
	printf("\n");
}
