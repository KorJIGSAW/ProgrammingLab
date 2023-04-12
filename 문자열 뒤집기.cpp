#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void main()
{
	int T, i, len;
	char des[81];
	char tar[81];
	printf("2071360 이종범\n");
	// T 입력
	// T 횟수 만큼
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

	// 문자열 입력
	// 뒤집어서 출력
}