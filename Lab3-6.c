// Lab3-6 타이머
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h> 
#include <time.h>
#include <conio.h>

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
/*
이 코드에는 완전히 해결하지 못한 두가지 문제점이 있습니다.
1. milsec는 늘어나는 값이기 때문에 999에서 빼면서 연산을 해야하는데, 이 때,
   타이머가 0에 도착했을때 999에서 빼는 값으로 시작했으므로 0.999값이 남습니다.
   32번째 라인으로 반쯤 해결했습니다.

2. 위 문제와 비슷한데, 999에서 빼면서 시작하므로 timer = 10일때, 
   10에서 시작을 안하고 10.999에서부터 시작해서 차감해나갑니다.
   2번 문제점은 해결 실패.
*/
