#include <stdio.h>
#define START_DAY 1      // ù°���� ����(3)
#define DAYS_OF_MONTH 31 // ���� �ϼ� 31�ϱ���

int main(void)
{
	int day, date;

	printf("===========================\n");
	printf("�� �� ȭ �� �� �� ��\n");
	printf("===========================\n");

	for (day = 0; day < START_DAY; day++)    //  1�� ������������ �������� ü��. day=0 �Ͽ�~day=7 ���
	{
		printf("   ");
	}
	for (date = 1; date <= DAYS_OF_MONTH; date++)  // DAYS~�ʱⰪ 31
	{
		if (day == 7)
		{
			printf("\n");
			day = 0;
		}
		day++;
		printf("%2d ", date);

	}
	printf("\n");

	return 0;
}