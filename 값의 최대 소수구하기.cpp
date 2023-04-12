#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int isprime(int a) {
	for (int i = 2; i <= a / 2; i++) {
		if (a % i == 0)
			return 0;
	}
	return a;
}
int main()
{
	printf("quiz 3¹ø\n");
	int T, n, i, k;

	scanf("%d", &T);// T ÀÔ·Â

	for (int i = 0; i < T; i++) {
		scanf("%d", &n);
		//k = isprime(2);
		for (int j = n; j >= 2; j--) {
			if (isprime(j)) {
				//printf("%d ", j);
				k = isprime(j);
				break;
			}
		}
		printf("%d\n", k);
	}

	return 0;
}