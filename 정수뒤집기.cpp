#define _CRT_SEUCRE_NO_WARNINGS
#include <stdio.h>

void print_rev_int(int n)
{
	// 10 �̸��̸� ����ϰ� return
	if (n < 10) {
		printf("%d", n);
		return;
	}
	// 10 �̻��̸�
	if (n >= 10) {
		printf("%d", n % 10);
		print_rev_int(n / 10);
	}
	//    ���� ���� ����ϰ�
	//    ������ ����� ��� (����Լ� ȣ��)
}

int main() {
	print_rev_int(1234567);
	printf("\n");
	print_rev_int(1204560);
	printf("\n");
}