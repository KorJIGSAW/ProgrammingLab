#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	printf("2071360 ภฬมพนü\n");
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