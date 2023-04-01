#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>

int fivo[100];
int top = -1;

long long fibo(int n) // �������α׷��� ���
{
	if (n <= 2) {
		return 1;
	}
	else if(n > top) //�����Ⱚ�϶� 
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
	printf("2071360 ������\n");
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
