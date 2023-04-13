// ���α׷��ַ� 5��
// Lab5-6 ���� TEXT �� ���ĺ� �󵵼� check
// input.txt �� �Է����� �ް�, ���ĺ����� count�Ͽ� �����ϴ� Ȯ���� ǥ��
// �Է��� ��(keyboard ������ CTRL-Z) EOF�� �˻縦 �Ѵ�.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <windows.h>

void main()
{
    printf("2071360 ������\n");
    char c;
    int total = 0; // ��ü ���ڼ�
    int alpha = 0; // ���ĺ� ���ڼ�
    int blank = 0; // blank(space, tab, newline) ���ڼ�
    int digit = 0; // 0~9 ���ڼ�
    int special = 0; // Ư������ ��
    int count[26] = { 0 };//���ķ� count
    while ((c = getchar()) != EOF) { //
        // ���ĺ� ī��Ʈ �κ�
        total++;
        if (isalpha(c)) { // ���ĺ��� �˻�
            alpha++;
            count[toupper(c) - 'A']++;
        }
    }
    printf("\n��ü���ڼ�=%d ���ĺ���=%d\n", total, alpha);
    for (c = 'A'; c <= 'Z'; c++) {
        // ȭ��� ���� ���
        printf("%c:%3d (%5.2lf%%)\n", c, count[c - 'A'],
            count[c - 'A'] * 100. / alpha);
    }
    printf("\n");
    Sleep(10000);
}