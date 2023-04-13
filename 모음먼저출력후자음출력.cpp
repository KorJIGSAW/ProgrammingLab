#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	/*
	int T, len;
	scanf("%d", &T);
	char testcase[81];
	while (T--) {
		scanf("%s", testcase);
		len = strlen(testcase);

		for (int k = 0; k < 5; k++) {
			for (int i = 0; i < len; i++) {
				//모음처리
				if (testcase[i] == 'A' || testcase[i] == 'a') {
					printf("%c", testcase[i]);
					testcase[i] = 208;
				}
				if (testcase[i] == 'E' || testcase[i] == 'e') {
					printf("%c", testcase[i]);
					testcase[i] = 208;
				}
				if (testcase[i] == 'I' || testcase[i] == 'i') {
					printf("%c", testcase[i]);
					testcase[i] = 208;
				}
				if (testcase[i] == 'O' || testcase[i] == 'o') {
					printf("%c", testcase[i]);
					testcase[i] = 208;
				}
				if (testcase[i] == 'U' || testcase[i] == 'u') {
					printf("%c", testcase[i]);
					testcase[i] = 208;
				}
			}
		}
		
		for (int j = 1; j < 26; j++) {
			for (int k = 0; k < len; k++) {
				 if (testcase[k] == j + 'A' || testcase[k] == j + 'a') {
					printf("%c", testcase[k]);
				}
			}
		}
		printf("\n");
	}*/

	char mo_u[] = "AEIOU";
	char mo_l[] = "aeiou";
	int ntest, len, i, j;
	char str[81];
	scanf("%d", &ntest);
	while (ntest--) {
		scanf("%s", str);
		len = strlen(str);
		for (i = 0; i < 5; i++) {
			for (j = 0; j < len; j++) {
				if (str[j] == mo_u[i] || str[j] == mo_l[i]) {
					putchar(str[j]);
					str[j] = '\0';
				}
			}
		}
		for (i = 0; i <= 25; i++) {
			for (j = 0; j < len; j++) {
				if (str[j] == 'A' + i || str[j] == 'a' + i)
					putchar(str[j]);
			}
		}
		printf("\n");
	}
}