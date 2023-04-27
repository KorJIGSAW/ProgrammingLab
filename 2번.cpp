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

// �Ҽ��� �ɷ����� ������ ȿ�����̴�.
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
    int T, i, n; // �ʿ��ϸ� ���� �߰�
    printf("2071360 ������\n");
    // T �Է�
    scanf("%d", &T);
    // T Ƚ�� ��ŭ
    while (T--) {
        // n �Է�
        scanf("%d", &n);
        // n �� �Ҽ��̸� ��ȣ�� �ƴϸ� NO�� ���
        i = getPrimeRank(n);
        if (i) printf("%d\n", i);
        else printf("NO\n");
    }
}