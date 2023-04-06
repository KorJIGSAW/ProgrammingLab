// 2017-1학기 프로그래밍랩 6주
// Lab6-5 문자열 처리
// string 함수를 모두 mystrcpy() 식으로 변경
// reverse() 함수는 한글을 고려하여야 함
//
#include <stdio.h>

char* mystrcpy(char* to, char* from)
{

}
int mystrlen(char* str)
{

}
int mystrcmp(char* s1, char* s2)
{

}
char* mystrcat(char* to, char* from)
{

}
// reverse 작성
void reverse(char* to, char* from)
{

}
void main()
{
	char str1[100] = "Hansung"; // "한성대학교";
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
	mystrcat(str5, " ");
	mystrcat(str5, str2);
	printf("mystrcat str5 = %s\n", mystrcat(str5, str2));
	reverse(str6, str5);
	printf("reverse str5 = %s\n", str6);
}
