#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Lotto ��ȣ 6�� ���ϱ�(�������, ũ�������)

void GetLotto(int lotto[]){
	// ���� �߰��ϰų� �����ص� ��
	int tmp[46] = { 0 };
	int i,n = 0;
	while (n < 6)
	{
		tmp[n] = rand() % 45 + 1;

		for (i = 0; i < n; i++)         // �̹� ������ ���� ��ŭ �ݺ�
			if (lotto[i] == tmp[n]) break;     // �̹� ������ ��ȣ����(�ߺ���) �˻��Ѵ�.

		if (n == i) 
			lotto[n++] = tmp[n];            // �ߺ����� �ƴҶ����� n��ġ�� ������ ���� ����Ų��.
	}
	// tmp[] �̿� �ߺ� üũ�� �ϸ鼭 6���� ���ϰ�
	// 6�� ��ȣ�� lotto[] �� ũ������� ���� 
	int temp = 0;
	for (int i = 0; i < 5; i++) {
		for (int j = i + 1; j < 6; j++) {
			if (lotto[i] > lotto[j]) {
				temp = lotto[i];
				lotto[i] = lotto[j];
				lotto[j] = temp;
			}
		}
	}
}
// Lotto ��ȣ�� ��÷�Ǿ����� Check
int CheckLotto(int lotto[], int mylotto[]){
	// lotto[0~5] �� mylotto[0~5]�� ������ �˻�
	// ��� ������ 1, �ƴϸ� 0
	for (int i = 0; i < 6; i++) {
		if (lotto[i] != mylotto[i])
			return 0;
	}
	return 1;
}

void PrintLotto(int lotto[]){
	// ��� ȭ�� �����ؼ� �ϼ�
	for (int i = 0; i < 6; i++) {
		printf("%d ", lotto[i]);
	}
}
void main() // main �Լ��� �������� �� ��
{
	printf("2071360 ������\n");
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
