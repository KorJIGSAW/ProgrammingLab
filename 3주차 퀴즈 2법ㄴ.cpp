#include <stdio.h>

int main() {
	int gugu[10][9];
	int sum;
	//gugu 2차원 배열에 값 집어넣기, 가로의합
	for (int i = 0; i < 8; i++) {
		sum = 0;
		for (int j = 0; j < 9; j++) {
			gugu[i][j] = (i + 2) * (j + 1);
			sum += gugu[i][j];
		}
		gugu[i][8] = sum;
	}
	//gugu 2차원 배열에 값 집어넣기, 세로의 합
	for (int i = 0; i < 8; i++) {
		sum = 0;
		for (int j = 0; j < 9; j++) {
			sum += gugu[j][i];
		}
		gugu[9][i] = sum;
	}

	//모든 값의 합
	sum = 0;
	for (int i = 0; i < 8; i++) {
		sum += gugu[9][i];
	}
	gugu[9][8] = sum;

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 9; j++) {
			if (i < 9 && j < 8) {
				if (i == 9) {
					printf("-----|-----|-----|-----|-----|-----|-----|-----|-----|\n");
				}
				printf("%dx%d=%3d|", i + 2, j + 1, gugu[i][j]);
			}
			else {
				printf("%7d|", gugu[i][j]);
			}
		}
		printf("\n");
	}

	printf("---------------------------------------------");



	
}