// 프로그래밍랩 5주
// Lab5-1 난수 n개 (start ~ end) 발생시키고 합과 평균 출력
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
	printf("2071360 이종범\n");
	int i, n, r, sum = 0;
	int start, end;
	srand(time(NULL)); // 난수값 초기화
	printf("난수의 개수: ");
	scanf("%d", &n);
	printf("시작과 끝 : ");
	scanf("%d %d", &start, &end);

	for (i = 0; i < n; i++) {
		r = start + rand() % (end - start + 1);
		printf("%d ", r);
		sum += r;
	}
	printf("\nsum=%d avg=%d\n", sum, sum / n);

}