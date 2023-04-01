// ���α׷��ַ� 5��
// Lab5-2 �ֻ��� 
// (1) n�� ������ ������ ���� �߻� Ȯ�� ����� ����
// (2) Ȯ���� ���۵� �ֻ��� 
//      1~5 = 10%, 6 = 50% ��, 6�� ���� ������ �ֻ���
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    printf("2071360 ������\n");
    int i, r, ntest, dice;
    int count[6] = { 0 }; // 1 ~ 6 count �� ����
    srand(time(NULL)); // ���� �ʱ�ȭ
    printf("�ֻ��� Ƚ�� : ");
    scanf("%d", &ntest);
    ntest = 10000;
    printf("�������� �ֻ���\n");
    for (i = 0; i < ntest; i++) {
        dice = rand() % 6; //0~5->�ֻ��� 1~6
        count[dice]++;
    }
    for (i = 0; i < 6; i++) {
        printf("%d : %d <%.2lf%%>\n", i+1, count[i], count[i]*100./ntest);
        // ȭ��� ���� ���
    }
    printf("\n");

    // �̻��� �ֻ���
    printf("\n�̻��� �ֻ��� 6�� 50%% Ȯ��\n");
    for (i = 0; i < 6; i++)
        count[i] = 0;
    for (i = 0; i < ntest; i++) {
        // ������ 0~99�� ���ϰ� 0~9, 10~19, 20~29, 30~39, 40~49, 50~99 ��
        // 1, 2, 3, 4, 5, 6 ���� ����
        // �߻� ȸ�� ����
        if (rand() % 100 >= 50)//6�� ���� Ȯ���� 50���η� �ø���
            dice = 5;
        else {//������ 1~5 ������ �����Բ��Ѵ�
            dice = rand() % 5;
        }
        count[dice]++;
    }
    for (i = 0; i < 6; i++) {
        // ȭ��� ���� ���
        printf("%d : %4d (%.2lf%%)\n", i + 1, count[i], count[i] * 100. / ntest);
    }
}