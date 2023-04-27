// 입력 n에 대하여 1과 솟수의 합으로 표현
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 솟수인지 판단하는 함수
int isPrime(int n) {
    if (n < 2) return 0;
    int i;
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}
// <=n인 솟수의 최대값 찾는 함수
int findMaxPrime(int n) {
    int i, p;
    // n==1 이면 p=1, n>=2이면 p<=n 인 솟수의 최대값 p
    if (n == 1) return 1;

    for (i = n; !isPrime(i) && i >= 2; i--); // 바람직하지 못한 코딩
    p = i;

    return p;
}
// n을 1을 포함한 솟수의 조합으로 구해서 출력하는 함수, 재귀함수로 작성할 것
void findPrimes(int n) {
    int p;
    // p<=n 인 솟수 p의 최대값을 구한다.
    // p==n 이면 p를 출력하고 끝
    // 아니면 (n - p)에 대하여 다시 솟수의 조합을 구하고 p를 출력한다. (재귀함수 호출)

    p = findMaxPrime(n);
    if (p != n)
        findPrimes(n - p);

    printf("%d ", p);
}
// main 은 수정하지 말 것
void main()
{
    int   T, n;
    printf("2071360 이종범\n");
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &n);
        findPrimes(n);
        printf("\n");
    }

}