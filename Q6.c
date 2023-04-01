// Lab01-5 문자열 처리 strcpy, strcat 이용하고 reverse 만들기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void reverse(char* des, char* tar) {
	int len = strlen(tar);
	for (int i = 0; i < len; i++) {
		des[i] = tar[len - i - 1];
	}
	des[len] = 0;
}

void main()
{
	char str1[100];
	char str2[100];
	char str3[200];
	char str4[100];
	char temp[100];
	int len1, len2, len3, len4;

	printf("(1) 입력 str1: ");
	scanf("%s", &str1);
	printf("    입력 str2: ");
	scanf("%s", &str2);

	strcpy(temp, str1);
	strcpy(str1, str2);
	strcpy(str2, temp);

	printf("(2) 교환 str1=%s, str2=%s\n", str1, str2);
	printf("len1=%d, len2=%d\n", strlen(str1), strlen(str2));

	strcpy(str3, str2);
	printf("(3) 복사 str3=%s\n", str3);

	strcat(str3, " ");
	strcat(str3, str1);
	strcat(str3, " Computer Engineering");
	printf("(4) 이어 붙이기 str3=%s\n", str3);
	printf("len3=%d\n", strlen(str3));

	reverse(str4, str3);

	printf("(5) 뒤집기 str4=%s\n", str4);
	printf("len4=%d\n", strlen(str4));
	//(1) 입력 scanf() 사용
	//(2) 교환 후 출력 strcpy 사용
	//(3) 복사 후 출력 strcpy 사용
	//(4) 이어 붙이기 후 출력 strcat 사용
	//(5) 뒤집기 reverse(str4, str3) str3을 뒤집어서 str4에 저장받고 출력
}