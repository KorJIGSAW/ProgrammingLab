#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int findsum(int n) { // �ϼ��Ͻÿ� 
	int sum = 0;
	for (int i = 1; i < n; i++) {
		sum += i;
		if (sum > n) {
			return i - 1;
		}
	}
}
void main()
{
	int T, n, i, k;
	printf("2071360 ������\n");
	// T �Է�
	// T Ƚ�� ��ŭ
		// n �Է�
		// k = findsum(n); ���� ã�´�
		// ��� k ���
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d", &n);
		k = findsum(n);
		printf("%d\n", k);
	}
}