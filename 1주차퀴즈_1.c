#include <stdio.h>

int main() {
	int i, j, m;
	int gugu[10][9];
	int sum = 0;
	int sum2 = 0;

	for (int i = 1; i < 10; i++) {
		sum = 0;
		sum2 = 0;
		for (int j = 2; j < 10; j++) {
			gugu[j][i] = j * i;
		}
		printf("\n");
	}


	for (int i = 0; i < 9; i++) {
		sum = 0;
		sum2 = 0;
		for (int j = 0; j < 7; j++) {
			sum += gugu[i][j];
			sum2 += gugu[j][i];
		}
		gugu[9][i] = sum;
		gugu[i][8] = sum2;
	}

	for (int i = 1; i < 10; i++) {
		sum = 0;
		sum2 = 0;
		for (int j = 2; j < 10; j++) {
			printf("%dx%d= %2d|", j, i, j * i);
			sum += j * i;
			if (j == 9) {
				printf("%6d|", gugu[j][i - 1]);
			}
		}
		printf("%6d|", sum);
		printf("\n");
	}
	gugu[9][8] = 0;
	for (int i = 0; i < 9; i++) {
		gugu[9][8] += gugu[i][8];
	}
}


