// Lb5-7 �ֻ��� 3�� ���
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main()
{
	double diceresult;
	int r1, r2, dice[19] = {0}; // �ʿ��ϸ� ���� �߰�
	int n, i, j, hist;
	int sum = 0;
	printf("2071360 ������\n");
	// ���� �ʱ�ȭ 
	srand((unsigned)time(NULL));
	// 30000 �� ����
	for (i = 0; i < 30000; i++) {
		sum = 0;
		for (int k = 0; k < 3; k++) {
			// �ֻ��� 3�� ���� ���� dice[] ���� ������Ų��.
			sum += rand() % 6 + 1;
		}
		dice[sum-3]++;
	}
	// Histogram�� ����Ѵ�.
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
	// *�� ���� �Ҽ����� ������ +1�� ����Ѵ�.
}
