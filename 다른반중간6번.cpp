#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int h2d(char c) {
	if ('0' <= c && c <= '9')
		return (c - '0');
	else
		return (c - 'a' + 10);
}

int hex2dec(char* hex) // 재귀함수로 작성할 것, 변수나 함수 추가해도 됨
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
void main() // main 은 수정하지 말 것
{
	printf("2071360 이종범\n");
	int dec;
	char hex[100];
	while (1) {
		printf("\n16진수 입력 : ");
		scanf("%s", hex);
		dec = hex2dec(hex);
		printf("10진수 : %d\n", dec);
		printf("16진수 : %X\n", dec);
	}
}