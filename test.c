#include <stdio.h>
#define START_DAY 1      // 첫째날이 수욜(3)
#define DAYS_OF_MONTH 31 // 달의 일수 31일까지

int main(void)
{
	int day, date;

	printf("===========================\n");
	printf("일 월 화 수 목 금 토\n");
	printf("===========================\n");

	for (day = 0; day < START_DAY; day++)    //  1일 시작전까지는 공백으로 체움. day=0 일욜~day=7 토욜
	{
		printf("   ");
	}
	for (date = 1; date <= DAYS_OF_MONTH; date++)  // DAYS~초기값 31
	{
		if (day == 7)
		{
			printf("\n");
			day = 0;
		}
		day++;
		printf("%2d ", date);

	}
	printf("\n");

	return 0;
}