// Lab01-7 ���� ������ 2��� ���ϱ�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
	int x, y, z;
	printf("���� x �Է� : ");
	scanf("%d", &x);
	
	y = 0;
	int count = 0;

	while (x != 0){
		y *= 10;
		y += x % 10;
		x /= 10;
	}
	
	z = y * 2;
	printf("������ �� y = %d �� ���� 2�� �� z = %d\n", y, z);
}