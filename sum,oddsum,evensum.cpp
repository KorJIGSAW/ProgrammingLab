#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int sum(int n)  // ����Լ��� �ۼ�
{
	if (n <= 0) {
		return 0;
	}
	return n + sum(n - 1);
}
int oddsum(int n) { //����Լ��� �ۼ�
    if (n <= 0) {
        return 0;
    }
    if (n % 2 == 0) {
        return oddsum(n - 1);
    }
    else {
        return n + oddsum(n - 2);
    }
}

int evensum(int n) { //����Լ����ۼ�
    if (n <= 0) {
        return 0;
    }
    if (n % 2 == 0) {
        return n + evensum(n - 2);
    }
    else {
        return evensum(n - 1);
    }
}


void main()
{
	printf("2071360 ������\n");
	printf("sum=%d oddsum=%d evensum=%d\n", sum(100), oddsum(100), evensum(101));
}