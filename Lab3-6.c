// Lab3-5 �����ġ
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
void main(void)
{
	clock_t start = 0, now = 0;
	clock_t duration = 0, sec = 0, min = 0, hour = 0, milsec = 0;
	printf("Enter �� ���� �ƹ�Ű�� ������ ����\n");
	getchar();
	start = clock();
	while (1) {
		now = clock();
		duration = now - start;
		sec = duration / CLOCKS_PER_SEC; // �ʸ� ���Ѵ�.
		milsec = duration % CLOCKS_PER_SEC;
		hour = sec / 3600;
		min = (sec % 3600) / 60;
		sec = sec % 60;
		//printf("%d:%02d:%02d.%03d\r", hour, min, sec, milsec);
		printf("���� �ð� %d.%03d\r", sec, milsec);
		if (kbhit()) // �ƹ� key�� ������ �����Ѵ�.
			break;
	}
	printf("\n");
}