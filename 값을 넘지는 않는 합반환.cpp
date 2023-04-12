#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int findsum(int n) { // 완성하시오 
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
	printf("2071360 이종범\n");
	// T 입력
	// T 횟수 만큼
		// n 입력
		// k = findsum(n); 으로 찾는다
		// 결과 k 출력
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d", &n);
		k = findsum(n);
		printf("%d\n", k);
	}
}