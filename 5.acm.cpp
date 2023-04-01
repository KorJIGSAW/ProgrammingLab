//  프로그래밍랩
// 5주 ACM 문제
// VPS (Valid Parantesis String) 검증
// () 의 짝이 맞으면 YES, 틀리면 NO
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>

void main()
{
	printf("2071360 이종범\n");
	int ntest;
	char buf[100];
	int i;
	int count1, count2;
	scanf("%d", &ntest);
	while (ntest--) {
		scanf("%s", buf); // 1라인 입력
		count1 = count2 = 0;
		// 문자열을 모두 검사해서
		for (int i = 0; i < strlen(buf); i++) {
			if (buf[0] == ')' || count1 < count2) {
				break;
				printf("NO\n");
			}
			if (buf[i] == '(') {// ( 갯수와 ) 갯수를 count하고
				count1++;
			}
			else {
				count2++;
			}
		}
		// count1 count2 를 비교하여 판단
		if (count1 == count2 && count1 != 0) {
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
	}
	Sleep(10000);
}