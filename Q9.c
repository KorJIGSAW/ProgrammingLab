#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
    int birthy, birthm, birthd;
    char num[7];

    while (1) {
        printf("�ֹι�ȣ ���ڸ� : ");
        scanf("%s", num);

        birthy = (num[0] - '0') * 10 + (num[1] - '0');
        birthm = (num[2] - '0') * 10 + (num[3] - '0');
        birthd = (num[4] - '0') * 10 + (num[5] - '0');

        if (birthy >= 22 && birthy <= 99)
            printf("19%d�� ", birthy);

        else
            printf("20%d�� ", birthy);

        printf("%d�� %d�ϻ��Դϴ�. \n", birthm, birthd);
    }
}
