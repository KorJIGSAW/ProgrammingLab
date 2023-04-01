// Lab02-3 exp(e, x) ���ϱ�
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
	// for n=1 term > 0.0000001 �� �� ����
	// n�� ������Ű�鼭
	// term =  �� ���Ѵ�.
	// sum = sum + term ���� ���� ���� ���Ѵ�.
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