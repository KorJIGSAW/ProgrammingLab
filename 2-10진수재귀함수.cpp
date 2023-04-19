#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int bin2dec(char* bin) {
	int len, last;
	if ((len = strlen(bin)) == 0)
		return 0;
	last = bin[len - 1] - '0';
	if (len == 1)
		return last;
	bin[len - 1] = '\0';
	return (bin2dec(bin) * 2 + last);
}

int main() {
	char bin[100];
	while (1) {
		printf("\n2진수 입력 : ");
		scanf("%s", bin);
		printf("16 진수 : %x\n", bin2dec(bin));
	}
}