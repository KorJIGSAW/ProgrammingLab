#include <stdio.h>
#include <windows.h>
void hanoi_tower(int n, char from, char tmp, char to)
{
	if (n == 1)
		printf("원판 1을 %c 에서 %c으로 옮긴다.\n", from, to);
	else {
		// 1 ~ n-1 을 임시 장소에 이동
		hanoi_tower(n - 1, from, to, tmp);
		// 제일 밑에 있는 원판을 이동
		printf("원판 %d을 %c에서 %c으로 옮긴다.\n", n, from, to);
		// 1 ~ n-1 을 임시 장소에서 목적지로 이동
		hanoi_tower(n - 1, tmp, from, to);
	}
}

void main()
{
	printf("2071360 이종범\n");
	hanoi_tower(4, 'A', 'B', 'C');
}