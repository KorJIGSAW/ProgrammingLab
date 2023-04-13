// Lab3-6 타이머
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h> 
#include <time.h>
#include <conio.h>

/*
void main(void)
{
	int timer;
	clock_t start, now, remain = 0;
	clock_t sec, min, hour, milsec, duration = 0;
	printf("Timer 정할 시간(초) 입력 : ");
	scanf("%d", &timer);
	start = clock();
	while (1) {
		now = clock();
		// 남은 시간 출력
		milsec = now - start;
		start /= 1000;
		now /= 1000;
		milsec %= 1000;
		remain = timer - duration; //밀리세크단위
		duration = now - start;
		sec = remain / CLOCKS_PER_SEC;
		sec = remain % 60;
		min = remain / 60;
		min %= 60;
		hour = remain / 3600;
		printf("%d:%02d:%02d.%03.d\r", hour, min, sec, 999-milsec);
		if (remain == 0){
			printf("0:00:00:000\r");
			//milsec의 999를 0으로 바꾸는 방법을 찾지 못해서 이렇게 해결했습니다.
			break;
			}
	}
	printf("\n알람!!\a\n");
}

*/

int main() {
	clock_t mm;
	clock_t ss, msec, remain_msec;
	clock_t now, before, alarm_time;
	clock_t sec, min, hour, milsec;

	printf("타이머 몇초 : ");
	scanf("%d", &ss);
	msec = ss * CLOCKS_PER_SEC;
	now = before = clock();
	alarm_time = now + msec;
	while (alarm_time != now) {
		do {
			now = clock();
		} while (before == now);
		before = now;
		remain_msec = alarm_time - now;
		sec = remain_msec / CLOCKS_PER_SEC;
		milsec = remain_msec % CLOCKS_PER_SEC;
		hour = sec / 3600;
		min = (sec / 60) % 60;
		sec = sec % 60;
		//printf("%d:%02d:%02d.%03.d\r", hour, min, sec, milsec);
		printf("남은시간 %d.%03d\r", sec, milsec);
		fflush(stdout);
	}
	printf("\nTime out!\n");
}