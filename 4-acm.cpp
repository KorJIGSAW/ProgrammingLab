#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>

int fivo[100];
int top = -1;

long long fibo(int n) // 동적프로그래밍 방식
{
	if (n <= 2) {
		return 1;
	}
	else if(n > top) //쓰레기값일때 
	{
		fivo[n] = fibo(n - 1) + fibo(n - 2);
		top = n;
	}
	return fivo[n];
}

long long find_max_fibo(int n) {
	for (int i = 3; i < 100; i++) {
		if (fivo[i] > n) {
			return fibo(i - 1);
		}
	}
}

void find_fibos(int n) {
	if (n == 1) {
		printf("1 ");
	}
	else {
		long long f = find_max_fibo(n);
		if (f == n) {
			printf("%lld ", f);
		}
		if (n - f > 0) {
			n -= f;
			find_fibos(n);
			printf("%lld ", f);
		}
	}
}

int main() {
	printf("2071360 이종범\n");
	int T, n;
	scanf("%d", &T);

	fibo(80);
	for (int i = 0; i < T; i++) {
		scanf("%d", &n);
		find_fibos(n);
		printf("\n");
	}
	Sleep(10000);
}
