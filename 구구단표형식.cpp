#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int gugu[10][9] = { 0, };
	int sum = 0;
	printf("quiz 2¹ø \n");

	for (int i = 0; i <= 8; i++) {
		for (int j = 0; j <= 7; j++) {
			gugu[i][j] = (i + 1) * (j + 2);
			printf("%d*%d=%2d|", j + 2, i + 1, gugu[i][j]);
			sum += gugu[i][j];
		}
		gugu[i][8] = sum;
		printf("%6d|\n", gugu[i][8]);
		sum = 0;
	}

	for (int i = 0; i <= 8; i++) {
		for (int j = 0; j < 9; j++) {
			gugu[9][i] += gugu[j][i];
		}
	}

	for (int i = 0; i < 9; i++) printf("------|");
	printf("\n");
	for (int i = 0; i <= 8; i++) printf("%6d|", gugu[9][i]);
	printf("\n");
	for (int i = 0; i < 9; i++) printf("-------");

	return 0;
}