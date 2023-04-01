// Lab01-2 홀수 합 구하기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int tmp = 0;
int count = 1;

int oddsum1(int n){
	int sum = 0;
	for (int i = 1; i < n + 1; i += 2) {
		sum += i;
	}
	return sum;
}

int oddsum2(int n){
	int sum = 0;
	int i = 1;
	while (i < n+1) {
		for (int i = 1; i < n + 1; i += 2) {
			sum += i;
		}
		break;
	}
	return sum;
}

int oddsum3(int n){
	if (count < n+1) {
		if (count % 2 != 0) {
			tmp += count;
		}
		count++;
		oddsum3(n);
	}
	return tmp;
}

void main()
{
	int n = 100;
	int SUM = 0;
	int i;
	printf("(1) for oddsum1(%d) = %d\n", n, oddsum1(n));
	printf("(2) while oddsum2(%d) = %d\n", n, oddsum2(n));
	printf("(3) 재귀 oddsum3(%d) = %d\n", n, oddsum3(n));
	// SUM 을 구한다.
	for (i = 1; i < 100; i += 2) {
		SUM += oddsum1(i);
	}
	printf("(4) SUM = %d\n", SUM);
}