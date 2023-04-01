// Lab01-5 : 생년월일 출력
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void year(int y, char* num) {
	if (y > 21 && y < 100) {
		printf("19%c%c년 ", num[0], num[1]);
	}
	else {
		printf("20%c%c년 ", num[0], num[1]);
	}
}

void month(int m, char* num) {
	if (m < 10) {
		printf("%c월 ", num[3]);
	}
	else {
		printf("%c%c월 ", num[2], num[3]);
	}
}

void day(int d, char* num) {
	if (d < 10) {
		printf("%c일생입니다.\n", num[5]);
	}
	else {
		printf("%c%c일생입니다.\n", num[4], num[5]);
	}
}

void main() {
	while (1) {
		int birthy, birthm, birthd;
		char num[7];

		printf("주민번호 앞자리 : ");
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