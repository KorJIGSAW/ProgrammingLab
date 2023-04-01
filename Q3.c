// Lab01-3 
// 1월 1일이 월요일이라고 가정하고
// 입력한 월의 달력을 출력
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
	int startday, i, month;
	int m[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int plus[11] = { 3, 0, 3, 2, 3, 2, 3, 3, 2, 3, 2 };
	startday = 1;	
	/*
	각 월마다 startday값끼리 차이값을 plus 배열에 대입
	plus[0] = 3 -> 1월이 월요일부터 시작시 2월은 목요일부터 시작하므로 3일차이남.
	plus[1] = 0 -> 2월이 목요일부터 시작시 3월은 똑같은 목요일부터 시작하므로 0일차이남.
	plus[2] = 3 -> 3월이 목요일부터 시작시 4월은 월요일부터 시작하므로 3일차이남.
	...
	12월까지 반복하여 plus 배열에 대입.
	*/

	printf("출력 월을 입력 : ");
	scanf("%d", &month);
	if (month > 1) {
		for (i = 0; i < month - 1; i++) {
			startday += plus[i];
		}

		if (startday >= 7) {
			startday = startday % 7;
		}
	}

	printf("일 월 화 수 목 금 토\n");
	for (i = 0; i < startday; i++) {
		printf("   ");
	}
	for (int j = 1; j < m[month-1]+1; j++) {
		if (i == 7) {
			printf("\n");
			i = 0;
		}
		i++;
		printf("%2d ", j);
	}
	printf("\n");
	

}