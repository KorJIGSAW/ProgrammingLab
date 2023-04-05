#include <stdio.h>

int main() {
	
	for (int i = 2; i < 10; i++) {
		int sum = 0;
		for (int j = 1; j < 10; j++) {
			printf("%d*%d= %2d ", i, j,i * j);
			sum += i * j;
		}
		printf("= %3d", sum);
		printf("\n");
	}
}