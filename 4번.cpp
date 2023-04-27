// �Է� n�� ���Ͽ� 1�� �ڼ��� ������ ǥ��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// �ڼ����� �Ǵ��ϴ� �Լ�
int isPrime(int n) {
    if (n < 2) return 0;
    int i;
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}
// <=n�� �ڼ��� �ִ밪 ã�� �Լ�
int findMaxPrime(int n) {
    int i, p;
    // n==1 �̸� p=1, n>=2�̸� p<=n �� �ڼ��� �ִ밪 p
    if (n == 1) return 1;

    for (i = n; !isPrime(i) && i >= 2; i--); // �ٶ������� ���� �ڵ�
    p = i;

    return p;
}
// n�� 1�� ������ �ڼ��� �������� ���ؼ� ����ϴ� �Լ�, ����Լ��� �ۼ��� ��
void findPrimes(int n) {
    int p;
    // p<=n �� �ڼ� p�� �ִ밪�� ���Ѵ�.
    // p==n �̸� p�� ����ϰ� ��
    // �ƴϸ� (n - p)�� ���Ͽ� �ٽ� �ڼ��� ������ ���ϰ� p�� ����Ѵ�. (����Լ� ȣ��)

    p = findMaxPrime(n);
    if (p != n)
        findPrimes(n - p);

    printf("%d ", p);
}
// main �� �������� �� ��
void main()
{
    int   T, n;
    printf("2071360 ������\n");
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &n);
        findPrimes(n);
        printf("\n");
    }

}