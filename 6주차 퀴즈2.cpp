// quiz06-2
// �ζǹ�ȣ �߻���
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
	int T, n, l, i, j, lotto[46];
	scanf("%d", &T); // �ζ� �� ��
	for (i = 0; i < T; i++) {
		scanf("%d", &n);// ��ŷ�� ���� ����
		for (j = 1; j <= 45; j++)
			lotto[j] = 0;
		for (j = 0; j < n; j++) {
			scanf("%d", &l);
			lotto[l] = 1; // ��ŷ�� �� ���
		}
		for (j = n + 1; j <= 6; j++) { // ��ŷ�� �� ������ ���� �߻�
			do {
				l = rand() % 45 + 1;
			} while (lotto[l] == 1); // �ߺ� üũ
			lotto[l] = 1;
		}
		printf("[%02d] : ", i + 1);
		for (j = 1; j <= 45; j++) {
			if (lotto[j])
				printf("%02d ", j);
		}
		printf("\n");
	}
}
