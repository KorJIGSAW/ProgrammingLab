#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	printf("2071360 이종범\n");
	int T, len, i, j;
	char last_char = '\0'; // 마지막으로 출력된 문자를 기억하는 용도
	char str[81];
	scanf("%d", &T);
	while (T--) {
		char last_char = '\0';
		scanf("%s", str);
		len = strlen(str);
		// 알파벳 역순서 출력 
		for (i = 25; i >=0; i--) {// for i = 25 ~ 0 (z ~ a) 알파벳 역순용
			for (j = 0; j < len; j++) {// for j = 0 ~ len-1 
				if (str[j] == 'a' + i) {
					if ((str[j]) != (last_char)) {// last_char 이용 중복 체크 하면서 문자 출력
						putchar(str[j]);
						// 출력이 되면 마지막으로 출력된 문자를 last_char 에 보관한다.
						last_char = str[j];
					}
				}
			}
		}
		printf("\n");
	}
}