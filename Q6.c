// Lab01-5 ���ڿ� ó�� strcpy, strcat �̿��ϰ� reverse �����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void reverse(char* des, char* tar) {
	int len = strlen(tar);
	for (int i = 0; i < len; i++) {
		des[i] = tar[len - i - 1];
	}
	des[len] = 0;
}

void main()
{
	char str1[100];
	char str2[100];
	char str3[200];
	char str4[100];
	char temp[100];
	int len1, len2, len3, len4;

	printf("(1) �Է� str1: ");
	scanf("%s", &str1);
	printf("    �Է� str2: ");
	scanf("%s", &str2);

	strcpy(temp, str1);
	strcpy(str1, str2);
	strcpy(str2, temp);

	printf("(2) ��ȯ str1=%s, str2=%s\n", str1, str2);
	printf("len1=%d, len2=%d\n", strlen(str1), strlen(str2));

	strcpy(str3, str2);
	printf("(3) ���� str3=%s\n", str3);

	strcat(str3, " ");
	strcat(str3, str1);
	strcat(str3, " Computer Engineering");
	printf("(4) �̾� ���̱� str3=%s\n", str3);
	printf("len3=%d\n", strlen(str3));

	reverse(str4, str3);

	printf("(5) ������ str4=%s\n", str4);
	printf("len4=%d\n", strlen(str4));
	//(1) �Է� scanf() ���
	//(2) ��ȯ �� ��� strcpy ���
	//(3) ���� �� ��� strcpy ���
	//(4) �̾� ���̱� �� ��� strcat ���
	//(5) ������ reverse(str4, str3) str3�� ����� str4�� ����ް� ���
}