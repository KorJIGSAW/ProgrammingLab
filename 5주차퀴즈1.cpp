#define _CRT_SEUCRE_NO_WARNINGS
#include <stdio.h>

int trisum(int n) {
	if (n == 3) {
		return 3;
	}
	if (n % 3 == 0) {
		return n + trisum(n - 3);
	}
	else {
		if (n % 3 == 1) {
			return trisum(n - 1);
		}
		if (n % 3 == 2) {
			return trisum(n - 2);
		}
	}
}

int main() {
	int n;
	n = 12;
	printf("trisum(%d) = %d\n", n, trisum(n));
	n = 13;
	printf("trisum(%d) = %d\n", n, trisum(n));
	n = 14;
	printf("trisum(%d) = %d\n", n, trisum(n));
	n = 15;
	printf("trisum(%d) = %d\n", n, trisum(n));
}