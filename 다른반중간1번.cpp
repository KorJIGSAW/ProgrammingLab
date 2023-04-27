/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int isPrime(int n) {
    if (n < 2) return 0;
    int i;
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

// 소수를 걸러내고 돌려야 효과적이다.
int getPrimeRank(int n) {
    int i;
    int rank = 0;

    for (i = 2; i < n; i++) {
        if (isPrime(i)) rank++;
    }

    if (isPrime(n)) return rank + 1;
    return 0;
}

void main()
{
    int T, i, n; // 필요하면 변수 추가
    printf("2071360 이종범\n");
    // T 입력
    scanf("%d", &T);
    // T 횟수 만큼
    while (T--) {
        // n 입력
        scanf("%d", &n);
        // n 이 소수이면 번호를 아니면 NO를 출력
        i = getPrimeRank(n);
        if (i) printf("%d\n", i);
        else printf("NO\n");
    }
}
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fivo[100];
int top = -1;

int fibo(int n)//동적프로그래밍?
{
    if (n <= 2) {
        return 1;
    }
    else {
        return fibo(n - 1) + fibo(n - 2);
    }
}

void main()
{
	int T, n; // 필요하면 변수 추가
	printf("7반 2071360 이종범\n");
	// T 입력
	scanf("%d", &T);
	// T 횟수 만큼
	while (T--) {
		// n 입력
		scanf("%d", &n);
		// n 이 피보나치수이면 수열의 번호를, 아니면 NO를 출력한다.
        for (int i = 0; i <= 30; i++) {
            if (fibo(i) == n) {
                printf("%d\n", i);
                break;
            }
            else if (fibo(i) > n) {
                printf("NO\n");
                break;
            }
        }
        
	}
}
