//  ���α׷��ַ�
// 5�� ACM ����
// VPS (Valid Parantesis String) ����
// () �� ¦�� ������ YES, Ʋ���� NO
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>

void main()
{
	printf("2071360 ������\n");
	int ntest;
	char buf[100];
	int i;
	int count1, count2;
	scanf("%d", &ntest);
	while (ntest--) {
		scanf("%s", buf); // 1���� �Է�
		count1 = count2 = 0;
		// ���ڿ��� ��� �˻��ؼ�
		for (int i = 0; i < strlen(buf); i++) {
			if (buf[0] == ')' || count1 < count2) {
				break;
				printf("NO\n");
			}
			if (buf[i] == '(') {// ( ������ ) ������ count�ϰ�
				count1++;
			}
			else {
				count2++;
			}
		}
		// count1 count2 �� ���Ͽ� �Ǵ�
		if (count1 == count2 && count1 != 0) {
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
	}
	Sleep(10000);
}