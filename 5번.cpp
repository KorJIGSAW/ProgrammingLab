//6-2, 5-3


// quiz06-2
// �ζǹ�ȣ �߻���
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
	printf("2071360 ������\n");
	int T, n, l, i, j, lotto[66];
	int lotto2[10][66] = { 0, };
	scanf("%d", &T); // �ζ� �� ��
	for (i = 0; i < T; i++) {
		scanf("%d", &n);// ��ŷ�� ���� ����
		for (j = 1; j <= 65; j++)
			lotto[j] = 0;
		for (j = 0; j < n; j++) {
			scanf("%d", &l);
			lotto[l] = 1; // ��ŷ�� �� ���
		}
		for (j = n + 1; j <= 8; j++) { // ��ŷ�� �� ������ ���� �߻�
			do {
				l = rand() % 65 + 1;
			} while (lotto[l] == 1); // �ߺ� üũ
			lotto[l] = 1;
		}
		lotto2[i][0] = i + 1;
		for (j = 0; j <= 65; j++) {
			if (lotto[j])
				lotto2[i][j] = j;
		}
	}
	time_t now = 0;
	now = time(NULL);
	struct tm* localtime(const time_t*);
	struct tm* tp = localtime(&now);
	printf("����ð� : %d/%02d/%2d %02d:%02d:%02d\n", 1900 + tp->tm_year, 1 + tp->tm_mon, tp->tm_mday, tp->tm_hour, tp->tm_min, tp->tm_sec);
	for (int i = 0; i < 10; i++) {
		printf("[%02d] : ", i + 1);
		for (int j = 0; j <= 65; j++) {
			if (lotto2[i][j])
				printf("%02d ", j);
		}
		printf("\n");
	}
}
