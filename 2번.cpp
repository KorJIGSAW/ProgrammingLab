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