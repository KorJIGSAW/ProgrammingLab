// Lab02-1 �ڼ� ���ϱ�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int isPrime(int n) // �ڼ� �˻� �Լ�, �ڼ��̸� 1 �ƴϸ� 0�� return
{
	int count = 0;

	for (int i = 2; i < n+1; i++) {
		if (n % i == 0) {
			count++;
		}
	}
	if (count == 1) {
		return 1;
	}
}
void main() // 2 ~ 100 �Ҽ� ã�Ƽ� ����ϰ� ���ϱ�
{
	int i, sum = 0;
	int k = 0;
	for (i = 2; i <= 100; i++) {
		// isPrime()�� �̿��ؼ� �ڼ��̸� ����ϰ� sum �� ���Ѵ�.
		k = isPrime(i);
		if (k == 1) {
			printf("%d ", i);
			sum += i;
		}
	}
	printf("\n");
	printf("sum=%d\n", sum);
}