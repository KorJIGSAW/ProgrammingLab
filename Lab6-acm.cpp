// 2017-1�б� ���α׷��ַ� 6��
// Lab6-ACM Candy War
#include <stdio.h>
#include <string.h>
#include <windows.h>
int debug; // �߰� ������ ����ϴ� flag

// ��� ����� ������ ĵ�� ������ �ִ��� check
// ������ return 1
// �ٸ��� return 0
int check_candys(int* candys, int n)
{

}

// ��� ����� ¦���� ĵ�� ������ �����Ѵ�.
void make_even(int* candys, int n)
{
	if (debug)
		printf("¦�� ");
}
// ����ִ� ĵ���� ���� �������� �����Ѵ�.
// Circular Queue ���·� ����
// 0->1, 1->2, .. (n-1)-->0
void turn_over(int* candys, int n)
{
	if (debug)
		printf("���� ");
}

// ��� ����� ������ �ִ� ĵ�� ����Ѵ�.
void print_candys(int round, int* candys, int n)
{

}

void main()
{
	int ntest;
	int i, n, candys[10];
	int round;

	//printf("�߰����� ���(1/0) : ");
	//scanf("%d", &debug);
	scanf("%d", &ntest);
	while (ntest--) {
		scanf("%d", &n);
		// candy[]�� �Է��� �޴´�.
		round = 0;
		if (debug)
			printf("���� ");
		// n==1�̸� ��� ������.
		// ��� ����� ¦������ �����
		while () { // check_candys ��� ������ ������.
			round++;
			// turn_over ��������� 1/2�� �ְ�
			// check_candys ��� ������ ������.
			// make_even Ȥ�� Ȧ������ ������ ��� ¦������ �����
		}
		printf("%d\n", round);
	}
	Sleep(10000);
}