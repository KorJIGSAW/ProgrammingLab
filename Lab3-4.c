// Lab3-4 ����/���� �� ���� �ð� ����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
void main(void)
{
	clock_t start, finish;
	double  duration = 0.;
	int i, j, k = 0;
	time_t now;

	time(&now);
	printf("���� : %s", ctime(&now));
	start = clock();
	for (i = 1; i <= 100000; i++)
		for (j = 1; j < 100000; j++)
			k++;
	finish = clock();
	time(&now);
	printf("���� : %s", ctime(&now));
	duration = (double)(finish - start) / CLOCKS_PER_SEC;
	printf("����ð� = %lf ���Դϴ�.\n\n", duration);

	// �߰� ���� struct tm ���
	// ���� : ��:��:��
	// ���� : ��:��:��
	struct tm* tp = localtime(&now);
	time(&now);
	printf("���� : %d:%d:%d\n", tp->tm_hour,tp->tm_min,tp->tm_sec);
	start = clock();
	for (i = 1; i <= 100000; i++)
		for (j = 1; j < 100000; j++)
			k++;
	finish = clock();
	time(&now);
	tp = localtime(&now);
	printf("���� : %d:%d:%d\n", tp->tm_hour, tp->tm_min, tp->tm_sec);
	duration = (double)(finish - start) / CLOCKS_PER_SEC;
	printf("����ð� = %lf ���Դϴ�.\n\n", duration);
}
