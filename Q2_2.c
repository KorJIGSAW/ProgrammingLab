// Lab02-2 ������ ���ϱ�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
	int n, i, j, sum;
	int ndiv, div[5000]; // ��� ���� ���
	n = 10000;
	for (i = 2; i <= n; i++) {
		sum = 0;
		ndiv = 0; // ����� ������ �ʱ�ȭ �Ѵ�.

		// 2 ~ i/2 �� �߿��� i�� ����� ���ؼ� sum �� ���ϰ� div[]�� �����Ѵ�
		//��������Ʈ
		for (j = 1; j <= i / 2; j++) {
			if (i % j == 0) {
				div[ndiv] = j;
				ndiv++;
				sum += j;
			}
			//���� �۵�
		}
		// i == sum �̸� ������ �̹Ƿ� i�� div[]�� 6 = 1 + 2 + 3 ������ ����Ѵ�.	
		if (sum == i) {
			printf("%d = ", sum);
			for (int k = 0; k < ndiv; k++) {
				printf("%d", div[k]);
				if (k == ndiv - 1) {
					break;
				}
				printf(" + ");

			}
			printf("\n");
		}
	}
}