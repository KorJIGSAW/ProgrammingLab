#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char buf[128]; //입력 buffer
	char* p, * q, * s; //문자열 pointer변수
	fgets(buf, 127, stdin);
	//gets(buf);
	// (1) 전체를 뒤집어서 출력
	int len = strlen(buf);
	p = buf;
	//p += len-1;
	while(*p) {
		p++;
	}
	p--;
	// p를 buf의 맨 끝으로 이동했다가
	// 앞으로 오면서 출력
	printf("(1) : ");
	while (p >= buf) {
		putchar(*p);
		p--;
	}
	printf("\n");
	// (2) 단어 단위로 뒤집어서 출력
	// p는 단어의 시작지점
	// q는 단어를 구분하는 빈칸의 위치
	// q-1에서 p까지 출력하면 단어가 뒤집힌다.
	// p를 새로운 단어의 시작 위치로 이동
	p = q = buf;
	printf("(2) : ");
	while (*p) {
		while (*q != ' ' && *q != '\0')
			q++;
		for (s = q - 1; s >= p; s--)
			putchar(*s);
		if (*q != '\0')
			putchar(*q);
		else
			break;
		p = (q + 1);
		q = p;
	}
	printf("\n");
}