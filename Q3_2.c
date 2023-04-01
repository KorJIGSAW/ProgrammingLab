// Lab02-3 exp(e, x) 구하기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
double myexp(int x)
{
	int n;
	double term, sum, oldsum;
	oldsum = 0.0;
	sum = 1.0;
	term = 1.0;
	for (n = 1; term > 0.0000001; n++) {
		term = term * x / n;
		sum += term;
	}
	// for n=1 term > 0.0000001 일 때 까지
	// n를 증가시키면서
	// term =  을 구한다.
	// sum = sum + term 으로 누적 값을 구한다.
	return sum;
}

void main()
{
	int i;
	printf("  exp() : ");
	for (i = 1; i <= 5; i++)
		printf("%lf ", exp((double)i));
	printf("\n");
	printf("myexp() : ");
	for (i = 1; i <= 5; i++)
		printf("%lf ", myexp(i));
	printf("\n");
}