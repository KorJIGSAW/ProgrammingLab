// 2017-1학기 프로그래밍랩 6주
// Lab6-5 문자열 처리
// string 함수를 모두 mystrcpy() 식으로 변경
// reverse() 함수는 한글을 고려하여야 함
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int mystrlen(char* str)
{
	int count = 0;
	for (int i = 0; str[i] != '\0'; i++) {
		count++;
	}
	return count;
}

char* mystrcpy(char* to, char* from)
{
	int len = mystrlen(from);
	for (int i = 0; i < len; i++) {
		to[i] = from[i];
	}
	to[len] = '\0';
	return to;
}

int mystrcmp(char* s1, char* s2)
{	//문자열의 길이가 다른지 체크
	int count = 0;
	if (mystrlen(s1) == mystrlen(s2)) {
		for (int i = 0; i < mystrlen(s2); i++) {
			if (s1[i] != s2[i]) {
				count++;
			}
		}
		if (count == 0) {
			return 0;
		}
		else {
			return 1;
		}
	}
	else {//문자열의 길이가 다를시 1반환
		return 1;
	}	
}
char* mystrcat(char* to, char* from)
{
	int len1 = mystrlen(to);
	int len2 = mystrlen(from);
	//두 배열의 길이를 잰다.
	//to뒤에 from의 내용을 집어넣는다.
	for (int i = 0; i < len2; i++) {
		to[len1+ i] = from[i];
	}
	to[len1 + len2] = '\0';
	return to;
}
// reverse 작성
void reverse(char* to, char* from)
{
	int len = mystrlen(from);
	int i = 0;
	while (i < len) {
		//한글일때
		if (((unsigned char)from[i] >= 0x80 && (unsigned char)from[i + 1] >= 0x80)) {
			to[len - i - 1] = from[i + 1];
			to[len - i - 2] = from[i];
			i += 2;
		}
		//영어일때
		else {
			to[len - i - 1] = from[i];
			i++;
		}
	}
	to[len] = '\0';
}
int main()
{
	printf("2071360 이종범\n");
	char str1[100] = "한성대학교";
	char str2[100] = "University";
	char str3[100] = "Computer";
	char str4[100] = "Engineering";
	char str5[100];
	char str6[100];
	int ret;

	ret = mystrlen(str1);
	printf("mystrlen(%s)=%d\n", str1, ret);
	ret = mystrcmp(str1, str1);
	printf("mystrcmp(%s, %s) = %d\n", str1, str1, ret);
	ret = mystrcmp(str1, str2);
	printf("mystrcmp(%s, %s) = %d\n", str1, str2, ret);
	ret = mystrcmp(str1, str3);
	printf("mystrcmp(%s, %s) = %d\n", str1, str3, ret);
	mystrcpy(str5, str1);
	printf("mystrcpy str5 = %s\n", mystrcpy(str5, str1));
	mystrcat(str5, (char *)" ");
	//mystrcat(str5, str2);
	printf("mystrcat str5 = %s\n", mystrcat(str5, str2));
	reverse(str6, str5);
	printf("reverse str5 = %s\n", str6);
}
