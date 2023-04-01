#include <stdio.h>
#include <windows.h>
void hanoi_tower(int n, char from, char tmp, char to)
{
	if (n == 1)
		printf("���� 1�� %c ���� %c���� �ű��.\n", from, to);
	else {
		// 1 ~ n-1 �� �ӽ� ��ҿ� �̵�
		hanoi_tower(n - 1, from, to, tmp);
		// ���� �ؿ� �ִ� ������ �̵�
		printf("���� %d�� %c���� %c���� �ű��.\n", n, from, to);
		// 1 ~ n-1 �� �ӽ� ��ҿ��� �������� �̵�
		hanoi_tower(n - 1, tmp, from, to);
	}
}

void main()
{
	printf("2071360 ������\n");
	hanoi_tower(4, 'A', 'B', 'C');
}