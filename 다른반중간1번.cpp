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
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fivo[100];
int top = -1;

int fibo(int n)//�������α׷���?
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
	int T, n; // �ʿ��ϸ� ���� �߰�
	printf("7�� 2071360 ������\n");
	// T �Է�
	scanf("%d", &T);
	// T Ƚ�� ��ŭ
	while (T--) {
		// n �Է�
		scanf("%d", &n);
		// n �� �Ǻ���ġ���̸� ������ ��ȣ��, �ƴϸ� NO�� ����Ѵ�.
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
