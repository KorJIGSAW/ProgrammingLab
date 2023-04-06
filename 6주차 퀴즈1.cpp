#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int setdice1() {
	int r = rand() % 100;
	if (rand() % 100 > 60) {
		return 6;
	}
	else {
		r = rand() % 4 + 2;
		return r;
	}
}

int setdice2() {
	int r = rand() % 100;
	if (rand() % 100 > 60) {
		return 3;
	}
	else {
		do {
			r = rand() % 6 + 1;
		} while (r == 3);
		return r;
	}
}

int main()
{
	printf("quiz 1�� : 2071360 ������\n");
	int r1, r2, dice[13] = { 0, };
	int i, j, hist;
	srand((unsigned)time(NULL));

	// ���� �ʱ�ȭ
	
	// 50000 �� ����
	int sum;
	for (i = 0; i < 50000; i++) {
		// Ȯ���� ���۵� �ֻ��� 2�� ���� ���� dice[] ���� ������Ų��.
		sum = 0;
		r1 = setdice1();
		r2 = setdice2();
		sum = r1 + r2;
		dice[sum - 2]++;
	}
	// 2~12 ���� ���Ͽ�
		// �߻� �� %�� Histogram�� ����Ѵ�.
		// *�� ���� �Ҽ����� ������ +1�� ����Ѵ�.

	for (i = 0; i < 11; i++) {
		double n = dice[i] * 100. / 30000;
		printf("%2d : %5.2lf%% ", i + 2, n);

		for (int j = 0; j < dice[i] / 300; j++) {
			printf("*");
		}
		if (n != (int)n) {
			printf("*");
		}
		printf("\n");
	}


	return 0;
}