#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()

{
	int n, i, sum = 0;
	int count = 0;
	printf("2071360 이종범\n");
	// n 입력
	printf("정수입력 : ");
	scanf("%d", &n);
	// 약수들을 모두 출력하고 sum을 구한다.
	printf("약수 : 1 ");
	for (i = 2; i < n; i++) {
		if (n % i == 0) {
			printf("%d ", i);
			sum += i;
		}
	}
	printf("+= %d", sum + 1);
	// sum을 출력한다.
}