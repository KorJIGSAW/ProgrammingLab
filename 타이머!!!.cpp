// Lab3-6 Ÿ�̸�
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
	printf("Timer ���� �ð�(��) �Է� : ");
	scanf("%d", &timer);
	start = clock();
	while (1) {
		now = clock();
		// ���� �ð� ���
		milsec = now - start;
		start /= 1000;
		now /= 1000;
		milsec %= 1000;
		remain = timer - duration; //�и���ũ����
		duration = now - start;
		sec = remain / CLOCKS_PER_SEC;
		sec = remain % 60;
		min = remain / 60;
		min %= 60;
		hour = remain / 3600;
		printf("%d:%02d:%02d.%03.d\r", hour, min, sec, 999-milsec);
		if (remain == 0){
			printf("0:00:00:000\r");
			//milsec�� 999�� 0���� �ٲٴ� ����� ã�� ���ؼ� �̷��� �ذ��߽��ϴ�.
			break;
			}
	}
	printf("\n�˶�!!\a\n");
}

*/

int main() {
	clock_t mm;
	clock_t ss, msec, remain_msec;
	clock_t now, before, alarm_time;
	clock_t sec, min, hour, milsec;

	printf("Ÿ�̸� ���� : ");
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
		printf("�����ð� %d.%03d\r", sec, milsec);
		fflush(stdout);
	}
	printf("\nTime out!\n");
}