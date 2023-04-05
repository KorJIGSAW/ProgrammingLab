#define _CRT_SEUCRE_NO_WARNINGS
#include <stdio.h>

void print_rev_int(int n)
{
	// 10 미만이면 출력하고 return
	if (n < 10) {
		printf("%d", n);
		return;
	}
	// 10 이상이면
	if (n >= 10) {
		printf("%d", n % 10);
		print_rev_int(n / 10);
	}
	//    제일 끝을 출력하고
	//    위쪽을 뒤집어서 출력 (재귀함수 호출)
}

int main() {
	print_rev_int(1234567);
	printf("\n");
	print_rev_int(1204560);
	printf("\n");
}