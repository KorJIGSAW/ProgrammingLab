// ���α׷��ַ� 5��
// Lab5-3 Lotto ���
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
	int i, n, l;
	//srand(time(NULL));
	//printf("���� �� ���� : ");
	//scanf("%d", &l);
	l = 10;
	while (l--) {
		for (i = 0; i < 6; i++) {
			//�迭�� ���� �ζǹ�ȣ�� ����ؼ� ��ġ�� �������ϰ� �ٽû̱�.
			n = rand() % 45 + 1;
			printf("%2d ", n);
		}
		printf("\n");
	}
}
