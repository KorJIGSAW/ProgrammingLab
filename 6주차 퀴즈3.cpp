#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
    printf("2071360 ภฬมพนü\n");
    int T, len, i, j;
    char str[81];

    scanf("%d", &T);
    getchar(); // consume newline character

    while (T--) {
        // input word
        scanf("%s", str);
        len = strlen(str);

        // output alphabetical order
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
