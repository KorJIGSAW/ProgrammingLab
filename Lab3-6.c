// Lab3-6 Ÿ�̸�
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
/*
�� �ڵ忡�� ������ �ذ����� ���� �ΰ��� �������� �ֽ��ϴ�.
1. milsec�� �þ�� ���̱� ������ 999���� ���鼭 ������ �ؾ��ϴµ�, �� ��,
   Ÿ�̸Ӱ� 0�� ���������� 999���� ���� ������ ���������Ƿ� 0.999���� �����ϴ�.
   32��° �������� ���� �ذ��߽��ϴ�.

2. �� ������ ����ѵ�, 999���� ���鼭 �����ϹǷ� timer = 10�϶�, 
   10���� ������ ���ϰ� 10.999�������� �����ؼ� �����س����ϴ�.
   2�� �������� �ذ� ����.
*/
