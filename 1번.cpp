#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int findoddsum(int n) { // �ϼ��Ͻÿ� 
	int sum = 0;
	for (int i = 1; i <= n; i += 2) {
		sum += i;
		if (sum > n) {
			return i - 2;
		}
		if (sum > n - 1) {
			return i;
		}
	}
}
void main()
{
	int T, n, k;
	printf("2071360 ������\n");
	// T �Է�
	scanf("%d", &T);
	// T Ƚ�� ��ŭ
	while (T--) {
		// n �Է�
		scanf("%d", &n);
		
		int k = findoddsum(n);
		// k = findoddsum(n); ���� ã�´�
		// ��� k ���
		printf("%d\n", k);
	}
		
}