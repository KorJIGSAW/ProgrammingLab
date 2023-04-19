// 2017-1�б� ���α׷��ַ� 6��
// Lab6-ACM Candy War
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>
int debug; // �߰� ������ ����ϴ� flag

// ��� ����� ������ ĵ�� ������ �ִ��� check
// ������ return 1
// �ٸ��� return 0
int check_candys(int* candys, int n)
{
	int res = candys[0];
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (res != candys[i]) {
			count++;
		}
	}
	if (count == 0) {
		return 1;
	}
	else {
		return 0;
	}
}

// ��� ����� ¦���� ĵ�� ������ �����Ѵ�.
void make_even(int* candys, int n)
{
	if (debug) {
		printf("¦��");
		for (int i = 0; i < n; i++) {
			if (candys[i] % 2 == 1) {
				candys[i]++;
			}
		}
	}
}
// ����ִ� ĵ���� ���� �������� �����Ѵ�.
// Circular Queue ���·� ����
// 0->1, 1->2, .. (n-1)-->0
void turn_over(int* candys, int n)
{
	int plus[10];
	if (debug) {
		for (int i = 0; i < n; i++) {
			plus[i] = candys[i] /= 2;
		}
		for (int i = 0; i < n; i++) {
			if (i == n - 1) {
				candys[0] += plus[i];
			}
			else {
				candys[i + 1] += plus[i];
			}
		}
		printf("����");
	}
}

// ��� ����� ������ �ִ� ĵ�� ����Ѵ�.
void print_candys(int round, int* candys, int n)
{
	printf(" %d : ", round);
	for (int i = 0; i < n; i++) {
		printf("%2d ", candys[i]);
	}
	printf("\n");
}

void main()
{
	printf("2071360 ������\n");
	int ntest;
	int i, n, candys[10] = { 0, };
	int round;

	printf("�߰����� ���(1/0) : ");
	scanf("%d", &debug);
	scanf("%d", &ntest);
	while (ntest--) {
		scanf("%d", &n);
		// candy[]�� �Է��� �޴´�.
		for (int i = 0; i < n; i++) {
			scanf("%d", &candys[i]);
		}
		round = 0;
		if (debug)
			printf("����");
		// n==1�̸� ��� ������.
		if (n == 1) {
			break;
		}
		print_candys(round, candys, n);
		// ��� ����� ¦������ �����
		make_even(candys, n);
		print_candys(round, candys, n);
		while (!check_candys(candys, n)) { // check_candys ��� ������ ������.
			round++;
			// turn_over ��������� 1/2�� �ְ�
			turn_over(candys, n);
			print_candys(round, candys, n);
			// check_candys ��� ������ ������.
			if (check_candys(candys, n)) {
				break;
			}
			// make_even Ȥ�� Ȧ������ ������ ��� ¦������ �����
			make_even(candys, n);
			print_candys(round, candys, n);
		}
		printf("��� %d\n", round);
	}
	Sleep(10000);
}