#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Lotto ��ȣ 6�� ���ϱ�(�������, ũ�������)
void GetLotto(int lotto[])
{
	// ���� �߰��ϰų� �����ص� ��
	int tmp[46] = { 0 };
	// tmp[] �̿� �ߺ� üũ�� �ϸ鼭 6���� ���ϰ�
	// 6�� ��ȣ�� lotto[] �� ũ������� ���� 
}
// Lotto ��ȣ�� ��÷�Ǿ����� Check
int CheckLotto(int lotto[], int mylotto[])
{
	// lotto[0~5] �� mylotto[0~5]�� ������ �˻�
	// ��� ������ 1, �ƴϸ� 0
}
void PrintLotto(int lotto[])
{
	// ��� ȭ�� �����ؼ� �ϼ�
}
void main() // main �Լ��� �������� �� ��
{
	int lotto[6]; // ��÷ ��ȣ ������ ũ������� ��� �ִ�
	int mylotto[6]; // �� �ζ� ��ȣ ������
	int i = 0;
	srand(time(NULL));
	GetLotto(lotto); // ��÷ ��ȣ �߻�
	printf("��÷��ȣ : ");
	PrintLotto(lotto);
	printf("\n");
	do {
		GetLotto(mylotto); // �� �ζ� ��ȣ �߻�
		i++;
	} while (!CheckLotto(lotto, mylotto)); //����������
	printf("  ����ȣ : ");
	PrintLotto(mylotto);
	printf("%10d�� ���� �� ��÷\n", i);
}

