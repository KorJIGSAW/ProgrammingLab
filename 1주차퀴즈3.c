// quiz-2
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int isPrime(int n)
{
	int count = 0;
	for (int i = 2; i < n; i++) {
		if (n % i != 0) {
			count++;
		}
	}
	if (count == 0) {
		return n;
	}
	else {
		return 0;
	}
}
void main()
{
	int T, n, i, k;
	printf("�й� �й� �̸�\n");
	// T �Է�
	// T Ƚ�� ��ŭ
		// n �Է�
		// k<=n�� �ڼ��� �ִ밪�� ���Ѵ�.
		// ��� k ���
	scanf("%d", &T);
	for (i = 0; i < T; i++) {
		
		scanf("%d", &n);
		for (int j = 2; j < n; j++) {
				k = isPrime(n);
				if (k == 0) {
					continue;
				}
				printf("%d\n", k);
			}
	}
}

//���� ���� �ݴ�� ���������� ����Ѵ�. �׷��� ��½ð��� �� ª������.
