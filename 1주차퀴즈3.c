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
	printf("분반 학번 이름\n");
	// T 입력
	// T 횟수 만큼
		// n 입력
		// k<=n인 솟수의 최대값을 구한다.
		// 결과 k 출력
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

//받은 수를 반대로 위에서부터 출력한다. 그러면 출력시간이 더 짧아진다.
