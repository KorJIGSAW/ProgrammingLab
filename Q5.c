// Lab01-5 : ������� ���
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void year(int y, char* num) {
	if (y > 21 && y < 100) {
		printf("19%c%c�� ", num[0], num[1]);
	}
	else {
		printf("20%c%c�� ", num[0], num[1]);
	}
}

void month(int m, char* num) {
	if (m < 10) {
		printf("%c�� ", num[3]);
	}
	else {
		printf("%c%c�� ", num[2], num[3]);
	}
}

void day(int d, char* num) {
	if (d < 10) {
		printf("%c�ϻ��Դϴ�.\n", num[5]);
	}
	else {
		printf("%c%c�ϻ��Դϴ�.\n", num[4], num[5]);
	}
}

void main() {
	while (1) {
		int birthy, birthm, birthd;
		char num[7];

		printf("�ֹι�ȣ ���ڸ� : ");
		scanf("%s", num);

		//528 = '0' * 11;
		birthy = num[0] * 10 + num[1] - 528;
		birthm = num[2] * 10 + num[3] - 528;
		birthd = num[4] * 10 + num[5] - 528;

		year(birthy, num);
		month(birthm, num);
		day(birthd, num);
	}
}