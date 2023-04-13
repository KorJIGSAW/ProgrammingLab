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


int fibo(int n) // recursive 방식
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
	printf("2071360 이종범\n");
	int i, n; // 변수 추가해도 됨
	int count = 0;
	// n 입력
	scanf("%d", &n);
	// 약수들 출력
	printf("약수 : ");
	for (i = 2; i < n; i++) {
		if (n % i == 0) {
			printf("%d ", i);
		}
	}
	printf("\n");
	// 소수들 출력
	int k;
	printf("소수 : ");
	for (i = 2; i <= n; i++) {
		k = isPrime(i);
		if (k == 1) {
			printf("%d ", i);
		}
	}
	printf("\n");
	
	// Fibonacci 수 출력
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