#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int findoddsum(int n) { // 완성하시오 
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
	printf("2071360 이종범\n");
	// T 입력
	scanf("%d", &T);
	// T 횟수 만큼
	while (T--) {
		// n 입력
		scanf("%d", &n);
		
		int k = findoddsum(n);
		// k = findoddsum(n); 으로 찾는다
		// 결과 k 출력
		printf("%d\n", k);
	}
		
}