// ���� ����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int jari(int k) {
	if (k < 30) {
		k = 1;
	}
	else if (k >= 30 && k < 90) {
		k = 2;
	}
	else if (k >= 90) {
		k = 3;
	}
	return k;
}

int random(int k) {
	if (k == 1) {
		return rand() % 10 + 1;
	}
	else if (k == 2) {
		return 10 + rand() % 90;
	}
	else if (k == 3) {
		return 99 + rand() % 900;
	}
}

void main()
{
	int x, y, r, result, ans; // �ʿ��ϸ� ���� �߰�
	int round = 0, ok = 0;
	int i = 1;
	int k;
	printf("2071360 ������\n");
	// ���� �ʱ�ȭ
	srand((unsigned)time(NULL));
	// ���� �ݺ�
	while (1) {
		k = jari(rand()%100);
		x = random(k);
		y = random(k);
		printf("(���� %d) %d + %d = ", i, x, y);
		scanf("%d", &result);
		if (result == 0) {
			printf("����� %5.2lf%% (%d/%d)", ok * 100. / round, ok, round);
			break;
		}
		if (result == x + y) {
			printf("�����Դϴ�!\n");
			round++;
			ok++;
		}
		else {
			printf("�����Դϴ�!\n");
			round++;
		}
		i++;
	}
		// x+y �� Ȯ���� ���� 1�ڸ�, 2�ڸ�, 3�ڸ� ������ ����Ѵ�.
		// ans �Է�
		// ans �� 0�̸� �ݺ� ����
		// ����� ���� ��� ���
	// �ݺ���
	// ����� ���
}
