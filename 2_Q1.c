// Lab02-1 솟수 구하기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int isPrime(int n) // 솟수 검사 함수, 솟수이면 1 아니면 0을 return
{
	int count = 0;

	for (int i = 2; i < n+1; i++) {
		if (n % i == 0) {
			count++;
		}
	}
	if (count == 1) {
		return 1;
	}
}
void main() // 2 ~ 100 소수 찾아서 출력하고 더하기
{
	int i, sum = 0;
	int k = 0;
	for (i = 2; i <= 100; i++) {
		// isPrime()을 이용해서 솟수이면 출력하고 sum 에 더한다.
		k = isPrime(i);
		if (k == 1) {
			printf("%d ", i);
			sum += i;
		}
	}
	printf("\n");
	printf("sum=%d\n", sum);
}