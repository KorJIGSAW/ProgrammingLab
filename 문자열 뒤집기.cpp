#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void main()
{
	int T, i, len;
	char des[81];
	char tar[81];
	printf("2071360 ������\n");
	// T �Է�
	// T Ƚ�� ��ŭ
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%s", &tar);

		len = strlen(tar);
		for (int i = 0; i < len; i++) {
			des[i] = tar[len - i - 1];
		}
		des[len] = 0;
	}
	printf("%s", des);

	// ���ڿ� �Է�
	// ����� ���
}