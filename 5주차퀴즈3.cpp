/*
#include <stdio.h>

int fivo[100];
int top = -1;

long long fibo(int n) // 동적프로그래밍 방식
{
	if (n <= 2) {
		return 1;
	}
	else if (n > top) //쓰레기값일때 
	{
		fivo[n] = fibo(n - 1) + fibo(n - 2);
		top = n;
	}
	return fivo[n];
}

int main() {
	long long f = 0;
	int count;
	int sum = 0;
	for (int i = 2; i < 1000000; i++) {
		
		f = fibo(i);
	}

	for (int i = 0; i <= top; i++) {
		count = 0;
		for (int j = 2; j < fivo[i]; j++) {
			if (fivo[j] % j != 0) {
				count++;
			}
			if (count == 0) {
				printf("%d", i);
				sum += i;
			}
		}
	}
	
	printf(" += %d", sum);
	printf("\n");
}*/
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

int main(){

	int k;
	int len;
	scanf("%d", &k);
	for (int i = 1; i < 100; i++) {
		if (fibo(i) >= k) {
			len = k - 1;
		}
		else {
			continue;
		}
	}
	
	long long sum = 0;
	for (int i = 1; i <= len; i++) {
		long long f = fibo(i);
		if (is_prime(f)) {
			printf("%lld ", f);
			sum += f;
		}
	}
	printf("+= %lld\n", sum);
	return 0;
}

