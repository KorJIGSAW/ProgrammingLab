#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int sum = 0;
	printf("quiz 1¹ø\n");

	for (int i = 2; i <= 9; i++) {
		sum = 0;
		for (int j = 1; j <= 9; j++) {
			printf("%d*%d=%2d ", i, j, i * j);
			sum += i * j;
		}
		printf("= %3d\n", sum);
	}

	return 0;
}