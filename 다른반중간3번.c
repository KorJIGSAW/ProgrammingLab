#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	printf("2071360 ������\n");
	int T, len, i, j;
	char last_char = '\0'; // ���������� ��µ� ���ڸ� ����ϴ� �뵵
	char str[81];
	scanf("%d", &T);
	while (T--) {
		char last_char = '\0';
		scanf("%s", str);
		len = strlen(str);
		// ���ĺ� ������ ��� 
		for (i = 25; i >=0; i--) {// for i = 25 ~ 0 (z ~ a) ���ĺ� ������
			for (j = 0; j < len; j++) {// for j = 0 ~ len-1 
				if (str[j] == 'a' + i) {
					if ((str[j]) != (last_char)) {// last_char �̿� �ߺ� üũ �ϸ鼭 ���� ���
						putchar(str[j]);
						// ����� �Ǹ� ���������� ��µ� ���ڸ� last_char �� �����Ѵ�.
						last_char = str[j];
					}
				}
			}
		}
		printf("\n");
	}
}