// 프로그래밍랩 5주
// Lab5-6 영문 TEXT 의 알파벳 빈도수 check
// input.txt 를 입력으로 받고, 알파벳들을 count하여 등장하는 확률을 표시
// 입력의 끝(keyboard 에서는 CTRL-Z) EOF로 검사를 한다.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <windows.h>

void main()
{
    printf("2071360 이종범\n");
    char c;
    int total = 0; // 전체 문자수
    int alpha = 0; // 알파벳 문자수
    int blank = 0; // blank(space, tab, newline) 문자수
    int digit = 0; // 0~9 문자수
    int special = 0; // 특수문자 수
    int count[26] = { 0 };//알파로 count
    while ((c = getchar()) != EOF) { //
        // 알파벳 카운트 부분
        total++;
        if (isalpha(c)) { // 알파벳만 검사
            alpha++;
            count[toupper(c) - 'A']++;
        }
    }
    printf("\n전체문자수=%d 알파벳수=%d\n", total, alpha);
    for (c = 'A'; c <= 'Z'; c++) {
        // 화면과 같이 출력
        printf("%c:%3d (%5.2lf%%)\n", c, count[c - 'A'],
            count[c - 'A'] * 100. / alpha);
    }
    printf("\n");
    Sleep(10000);
}