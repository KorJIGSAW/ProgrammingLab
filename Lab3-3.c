//clock_t clock() �Լ� �̿� : millisec ������ ����

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(void)
{
	clock_t start, finish;
	double duration;
	int i, j, k = 0;
	start = clock();
	// ����ð��� �����ϰ��� �ϴ� �ڵ�....
	for (i = 1; i <= 10000; i++)
		for (j = 1; j < 10000; j++)
			k++;
	finish = clock();
	duration = (double)(finish - start) / CLOCKS_PER_SEC;
	printf("%lf ���Դϴ�.\n", duration);
}