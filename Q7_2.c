// Lab2-7 ACM
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
void main()
{
	int h, w, n, T, a, b;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d %d %d", &h, &w, &n);
		a = n % h;
		b = 1+ n / h;
		if (a == 0) {
			printf("%d%02d\n", h, --b);
		}
		else {
			printf("%d%02d\n",a, b);
		}
	}
	Sleep(10000); // 10초간 정지
}