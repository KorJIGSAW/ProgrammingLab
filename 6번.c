#define _CRT_SECURE_NO_WARNINGS
// 1�� 1���� �������̶�� �����ϰ�
// �Է��� ��/���� ������ ���
#include <stdio.h>
void main()
{
	printf("2071360 ������\n");
   int startday, i, month, ss, day;
   int m[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
   int daysum;
   char* weeks[] = { "��","��","ȭ","��","��","��","��" };
   int weekday;
   int T;

   // T �Է��ϰ�
   scanf("%d", &T);

   // T Ƚ�� ����
   for (i = 0; i < T; i++) {
	  // ��, �� �Է�
	  scanf("%d %d", &month, &day);

	  // ���� ó�� N/A ���
	  if (month < 1 || month > 12 || day < 1 || day > m[month - 1]) {
		 printf("N/A\n");
		 continue;
	  }

	  // ���� ���
	  startday = 1 - 3; //1�� 1���� ������
	  daysum = 0;     
	  for (ss = 0; ss < month-1; ss++) {
		 daysum += m[ss];
	  }
	  daysum += day;

	  // ���� ���
	  printf("%s����\n", weeks[(daysum - startday) % 7]);
   }
}


// 1�� 1���� �������̶�� �����ϰ�
// �Է��� ��/���� ������ ���
/*
 #include <stdio.h>
void main()
{
	printf("2071360 ������\n");
	int startday, i, month, ss, day;
	int m[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int daysum;
	const char* weeks[] = { "��","��","ȭ","��","��","��","��" };
	int weekday;
	int T;
	// T �Է��ϰ�
	scanf("%d", &T);
	// T Ƚ�� ����
	while (T--) {
		day = 3;
		i = 0;
		// ��, �� �Է�
		scanf("%d %d", &month, &day);
		// ���� ó�� N/A ���
		if (m[month - 1] < day || month > 12 || month < 1) {
			printf("N/A\n");
			continue;
		}
		else {
			do {
				day += m[i];
				i++;
			} while (i < month);
			// ���� ���
			weekday = day % 7;
			// ���� ���
			printf("%s����\n", weeks[weekday-1]);
		}
	}
}

*/


