// Lab01-1 100���� ����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
	int n, sum = 100;
	do {
		printf("sum=%d �� �� �Է�:", sum);
		scanf("%d", &n);
		sum -= n;
		if (sum == 0) {
			printf("sum=%d", sum);
			break;
		}
	} while (1);
	
}