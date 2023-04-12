#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
    printf("2071360 ภฬมพนü\n");
    int T, len, i, j;
    char str[81];

    scanf("%d", &T);
    getchar();

    while (T--) {
        scanf("%s", str);
        len = strlen(str);

        for (i = 0; i < 26; i++) {
            for (j = 0; j < len; j++) {
                if ((str[j] == 'a' + i) || (str[j] == 'A' + i)) {
                    printf("%c", str[j]);
                }
            }

        }
        printf("\n");
    }

    return 0;
}