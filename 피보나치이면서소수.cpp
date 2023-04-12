#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fivo[100];
int top = -1;

long long fibo(int n)//동적프로그래밍?
{
	if (n <= 2) {
		return 1;
	}
	else if (n > top) {
		fivo[n] = fibo(n - 1) + fibo(n - 2);
		top = n;
	}
	return fivo[n];
}

int is_prime(int n)
{
	if (n < 2) {
		return 0;
	}
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			return 0;
		}
	}
	return 1;
}

int main()
{
	long long sum = 0;
	//약100만...?
	for (int i = 1; i <= 40; i++) {
		long long f = fibo(i);
		if (is_prime(f)) {
			printf("%lld ", f);
			sum += f;
		}
	}
	printf("+= %lld\n", sum);
	return 0;
}