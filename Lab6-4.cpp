// ���α׷��ַ� 6��
// Lab6-4 ���ڿ� ó��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void reverse(char to[], char from[])
{
	int len = strlen(from);
	for (int i = 0; i < len; i++) {
		//�����϶�
		to[len - i - 1] = from[i];
	}
	to[len] = '\0'; //�������� �ΰ� �־ ������
}

void reversek(char to[], char from[]) {
	int len = strlen(from);
	for (int i = 0; i < len; i += 2) {
		//�ѱ��϶�
		if (((unsigned char)from[i] >= 0x80 && (unsigned char)from[i + 1] >= 0x80)) {
			to[len - i - 1] = from[i+1];
			to[len - i - 2] = from[i];
		}
		else {
			to[len - i - 1] = from[i];
		}
	}
	to[len] = '\0'; //�������� �ΰ� �־ ������
}
void main()
{
	/*
	char str1[100] = "Hansung";
	char str2[100] = "University";
	char str3[100] = "Computer";
	char str4[100] = "Engineering";
	char str5[100];
	char str6[100];
	*/
	printf("2071360 ������\n");
	char str1[100] = "�Ѽ����б�";
	char str2[100] = "University";
	char str3[100] = "Computer";
	char str4[100] = "Engineering";
	char str5[100];
	char str6[100];
	int ret;
	ret = strlen(str1);
	printf("strlen(%s)=%d\n", str1, ret);
	ret = strcmp(str1, str1);
	printf("strcmp(%s, %s) = %d\n", str1, str1, ret);
	ret = strcmp(str1, str2);
	printf("strcmp(%s, %s) = %d\n", str1, str2, ret);
	ret = strcmp(str1, str3);
	printf("strcmp(%s, %s) = %d\n", str1, str3, ret);
	strcpy(str5, str1);
	printf("strcpy str5 = %s\n", strcpy(str5, str1));
	strcat(str5, " ");
	strcat(str5, str2);
	printf("strcat str5, str2 = %s\n", str5);
	reverse(str6, str5);
	printf("reverse str5 = %s\n", str6);
	reversek(str6, str5);
	printf("reversek str5 = %s\n", str6);
}

