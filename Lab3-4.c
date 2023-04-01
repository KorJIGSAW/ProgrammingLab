// Lab3-4 시작/종료 및 실행 시간 측정
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
	printf("시작 : %s", ctime(&now));
	start = clock();
	for (i = 1; i <= 100000; i++)
		for (j = 1; j < 100000; j++)
			k++;
	finish = clock();
	time(&now);
	printf("종료 : %s", ctime(&now));
	duration = (double)(finish - start) / CLOCKS_PER_SEC;
	printf("실행시간 = %lf 초입니다.\n\n", duration);

	// 추가 문제 struct tm 사용
	// 시작 : 시:분:초
	// 종료 : 시:분:초
	struct tm* tp = localtime(&now);
	time(&now);
	printf("시작 : %d:%d:%d\n", tp->tm_hour,tp->tm_min,tp->tm_sec);
	start = clock();
	for (i = 1; i <= 100000; i++)
		for (j = 1; j < 100000; j++)
			k++;
	finish = clock();
	time(&now);
	tp = localtime(&now);
	printf("종료 : %d:%d:%d\n", tp->tm_hour, tp->tm_min, tp->tm_sec);
	duration = (double)(finish - start) / CLOCKS_PER_SEC;
	printf("실행시간 = %lf 초입니다.\n\n", duration);
}
