// Lab01-4 x, y ���� ��ȯ
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void swap(int *x, int *y){
	char tmp;
	tmp = *x;
	*x = *y;  
	*y = tmp;
}

void main(){
	int x = 100, y = 200;
	printf("swap() ȣ�� �� x=%d y=%d\n", x, y);
	swap(&x, &y);
	printf("swap() ȣ�� �� x=%d y=%d\n", x, y);
}