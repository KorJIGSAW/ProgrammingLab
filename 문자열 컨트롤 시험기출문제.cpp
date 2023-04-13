// 프로그래밍랩 6주
// Lab6-4 문자열 처리
#include <stdio.h>
#include <string.h>

#include <stdio.h>
#include <string.h>
void reverse(char to[], char from[])
{
}
void main()
{
	char str1[100] = "Hansung";
	char str2[100] = "University";
	char str3[100] = "Computer";
	char str4[100] = "Engineering";
	char str5[100];
	char str6[100];
	int ret;
	ret = strlen(str1);
	printf("strlen(%s)=%d\n", str1, ret);
	ret = strcmp(str1, str1);
	printf("strcmp(%s, %s) = %d\n", str1, str1, ret);
	ret = strcmp(str1, str2);
	printf("strcmp(%s, %s) = %d\n", str1, str2, ret);
	ret = strcmp(str1, str3);
	printf("strcmp(%s, %s) = %d\n", str1, str3, ret);
	strcpy(str5, str1);
	printf("strcpy str5 = %s\n", strcpy(str5, str1));
	strcat(str5, " ");
	strcat(str5, str2);
	printf("strcat str5, str2 = %s\n", strcat(str5, str2));
	reverse(str6, str5);
	printf("reverse str5 = %s\n", str6);
}

