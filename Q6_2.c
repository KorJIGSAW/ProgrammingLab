// Lab2-6
// ������ �̿��� �迭 �Է� �� ����, �ִ�, �ּҰ� ���
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

void main()
{
	int i, j, T, K, sum, min, max;
	int* data;
	scanf("%d", &T); // �׽�Ʈ ���̽��� �� 3

	for (i = 0; i < T; i++) {
		// ����Ÿ ���� K �� �Է��� �ް�
		scanf("%d", &K);

		// malloc()���� data[] ���� Ȯ��
		data = (int*)malloc(K * sizeof(int));

		// for j = 0 ~ K-1 ����
			// data[j] �Է�
			// sum ����
		for (j = 0; j < K; j++) {
			scanf("%d", data+j); //data+j --> &(data[j]) �迭�� Ư�� : ù���� �ּ� 0x00�� ������ �ι�°���� �ּҴ� 0x04��.
		}

		// max, min �� ã�´�
		max = data[0];
		min = data[0];
		sum = 0;
		for (j = 1; j < K; j++) {
			max = max > data[j] ? max : data[j];
			min = min < data[j] ? min : data[j];
			sum += data[j];
		}
		sum += data[0];

		// sum, max, min �� ����Ѵ�.
		
		printf("%d %d %d\n", sum, max, min);
		// free()�� data ���� ��ȯ
		free(data);
	}
	Sleep(10000); // 10�ʰ� ����
}