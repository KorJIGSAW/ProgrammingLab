// Lab3-6 Ÿ�̸�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h> 
#include <time.h>
#include <conio.h>
void main(void)
{
	int timer;
	clock_t start, now, remain;
	clock_t duration, sec, min, hour, milsec;
	clock_t end;
	printf("Timer ���� �ð�(��) �Է� : ");
	scanf("%d", &timer);
	start = clock();
	end = start + timer * CLOCKS_PER_SEC;
	while (1) {
		now = clock();
		// ���� �ð� 
		remain = end - now;//�и���ũ ����
		sec = remain / CLOCKS_PER_SEC; //��ũ ����
		milsec = remain;
		milsec %= CLOCKS_PER_SEC;
		hour = sec / 3600;
		sec %= 3600;
		min = sec / 60;
		sec %= 60;
		
		printf("%d:%02d:%02d.%03d\r", hour, min, sec, milsec);

		if (remain == 0)
			break;
	}
	printf("\n�˶�!!\a\n");
}
