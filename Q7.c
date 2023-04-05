// Lab01-7 숫자 뒤집고 2배수 구하기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
	int x, y, z;
	printf("정수 x 입력 : ");
	scanf("%d", &x);
	
	y = 0;
	int count = 0;

	while (x != 0){
		y *= 10;
		y += x % 10;
		x /= 10;
	}
	
	z = y * 2;
	printf("뒤집은 수 y = %d 그 수의 2배 수 z = %d\n", y, z);
}