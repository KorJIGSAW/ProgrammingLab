// Lab01-3 
// 1�� 1���� �������̶�� �����ϰ�
// �Է��� ���� �޷��� ���
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
	int startday, i, month;
	int m[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int plus[11] = { 3, 0, 3, 2, 3, 2, 3, 3, 2, 3, 2 };
	startday = 1;	
	/*
	�� ������ startday������ ���̰��� plus �迭�� ����
	plus[0] = 3 -> 1���� �����Ϻ��� ���۽� 2���� ����Ϻ��� �����ϹǷ� 3�����̳�.
	plus[1] = 0 -> 2���� ����Ϻ��� ���۽� 3���� �Ȱ��� ����Ϻ��� �����ϹǷ� 0�����̳�.
	plus[2] = 3 -> 3���� ����Ϻ��� ���۽� 4���� �����Ϻ��� �����ϹǷ� 3�����̳�.
	...
	12������ �ݺ��Ͽ� plus �迭�� ����.
	*/

	printf("��� ���� �Է� : ");
	scanf("%d", &month);
	if (month > 1) {
		for (i = 0; i < month - 1; i++) {
			startday += plus[i];
		}

		if (startday >= 7) {
			startday = startday % 7;
		}
	}

	printf("�� �� ȭ �� �� �� ��\n");
	for (i = 0; i < startday; i++) {
		printf("   ");
	}
	for (int j = 1; j < m[month-1]+1; j++) {
		if (i == 7) {
			printf("\n");
			i = 0;
		}
		i++;
		printf("%2d ", j);
	}
	printf("\n");
	

}