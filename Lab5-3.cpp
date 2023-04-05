// 프로그래밍랩 5주
// Lab5-3 Lotto 출력
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
	int i, n, l;
	//srand(time(NULL));
	//printf("복권 매 수는 : ");
	//scanf("%d", &l);
	l = 10;
	while (l--) {
		for (i = 0; i < 6; i++) {
			//배열로 나온 로또번호를 기억해서 겹치면 나가리하고 다시뽑기.
			n = rand() % 45 + 1;
			printf("%2d ", n);
		}
		printf("\n");
	}
}
