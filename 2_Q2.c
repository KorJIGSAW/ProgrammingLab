// Lab02-2 ������ ���ϱ�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
	int n, i, j, sum;
	int ndiv, div[5000]; // ��� ���� ���
	n = 10000;
	for (i = 2; i <= n; i++) {
		sum = 0; // 
		ndiv = 0; // ����� ������ �ʱ�ȭ �Ѵ�.
		//��� 1�߰�, �ڱ��ڽ� ����
		ndiv++;
		div[0] = 1;
		sum += ndiv;
		// 2 ~ i/2 �� �߿��� i�� ����� ���ؼ� sum �� ���ϰ� div[]�� �����Ѵ�.
		for (j = 2; j < i / 2; j++) {
			//�Ϲ����� ����϶�
			if (j != i / j && i % j == 0) {
				div[ndiv] = j;
				ndiv++;
				div[ndiv] = i / j;
				ndiv++;
				sum += j;
				sum += i % j;
			}
			else if (j == i / j && i % j == 0) {
				div[ndiv] = j;
				ndiv++;
				sum += j;
			}
			else {
				continue;
			}

			// i == sum �̸� ������ �̹Ƿ� i�� div[]�� 6 = 1 + 2 + 3 ������ ����Ѵ�.
			if (i == sum) {
				printf("%d = ", j);
				for (int k = 0; k < ndiv; k++) {
					printf("%d", div[k]);
					if (k == ndiv - 1) {
						printf("\n");
						break;
					}
					printf(" + ");
				}
			}
		}
	}
}