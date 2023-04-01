#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>

void main(){
	int x, y;
	scanf("%d %d", &x, &y);
	printf("%d %d\n", x + y, x * y);
	Sleep(10000); // 10초간 정지
}