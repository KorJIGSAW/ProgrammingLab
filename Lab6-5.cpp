// 2017-1�б� ���α׷��ַ� 6��
// Lab6-5 ���ڿ� ó��
// string �Լ��� ��� mystrcpy() ������ ����
// reverse() �Լ��� �ѱ��� ����Ͽ��� ��
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
// reverse �ۼ�
void reverse(char* to, char* from)
{

}
void main()
{
	char str1[100] = "Hansung"; // "�Ѽ����б�";
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
