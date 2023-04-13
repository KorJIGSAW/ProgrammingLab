// Lb5-7 주사위 3개 통계
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main()
{
	double diceresult;
	int r1, r2, dice[19] = {0}; // 필요하면 변수 추가
	int n, i, j, hist;
	int sum = 0;
	printf("2071360 이종범\n");
	// 난수 초기화 
	srand((unsigned)time(NULL));
	// 30000 번 동안
	for (i = 0; i < 30000; i++) {
		sum = 0;
		for (int k = 0; k < 3; k++) {
			// 주사위 3개 합을 구해 dice[] 값을 증가시킨다.
			sum += rand() % 6 + 1;
		}
		dice[sum-3]++;
	}
	// Histogram을 출력한다.
	for (i = 0; i < 16; i++) {
		diceresult = dice[i] * 100. / 30000;
		printf("%2d : %5.2lf%% ", i + 3, diceresult);
		
		for (int j = 0; j < dice[i]/ 300; j++) {
			printf("*");
		}
		if (diceresult != (int)diceresult) {
			printf("*");
		}
		printf("\n");
	}
	// *의 수는 소숫점이 있으면 +1개 출력한다.
}
