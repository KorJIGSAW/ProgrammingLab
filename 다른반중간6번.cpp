#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int h2d(char c) {
	if ('0' <= c && c <= '9')
		return (c - '0');
	else
		return (c - 'a' + 10);
}

int hex2dec(char* hex) // ����Լ��� �ۼ��� ��, ������ �Լ� �߰��ص� ��
{
	int len, last;
	if ((len = strlen(hex)) == 0)
		return 0;
	last = h2d(hex[len - 1]);
	if (len == 1)
		return last;
	hex[len - 1] = '\0';
	return (hex2dec(hex) * 16 + last);
}
void main() // main �� �������� �� ��
{
	printf("2071360 ������\n");
	int dec;
	char hex[100];
	while (1) {
		printf("\n16���� �Է� : ");
		scanf("%s", hex);
		dec = hex2dec(hex);
		printf("10���� : %d\n", dec);
		printf("16���� : %X\n", dec);
	}
}