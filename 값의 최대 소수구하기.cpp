#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int isprime(int a) {
	int prime[30] = {0,};
	for (int i = 0; i < 30; i++) {
		for (int j = 2; j <= a / 2; j++) {
			if (a % j == 0)
				break;
		}
		prime[i] = a;
	}
	for (int i = 0; i < 30; i++) {
		if (prime[i] == a) {
			return i;
		}
	}
	return 0;
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