#define _CRT_SECURE_NO_WARNINGS
// 1월 1일이 수요일이라고 가정하고
// 입력한 월/일의 요일을 출력
#include <stdio.h>
void main()
{
	printf("2071360 이종범\n");
   int startday, i, month, ss, day;
   int m[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
   int daysum;
   char* weeks[] = { "일","월","화","수","목","금","토" };
   int weekday;
   int T;

   // T 입력하고
   scanf("%d", &T);

   // T 횟수 동안
   for (i = 0; i < T; i++) {
	  // 월, 일 입력
	  scanf("%d %d", &month, &day);

	  // 오류 처리 N/A 출력
	  if (month < 1 || month > 12 || day < 1 || day > m[month - 1]) {
		 printf("N/A\n");
		 continue;
	  }

	  // 요일 계산
	  startday = 1 - 3; //1월 1일이 수요일
	  daysum = 0;     
	  for (ss = 0; ss < month-1; ss++) {
		 daysum += m[ss];
	  }
	  daysum += day;

	  // 요일 출력
	  printf("%s요일\n", weeks[(daysum - startday) % 7]);
   }
}


// 1월 1일이 수요일이라고 가정하고
// 입력한 월/일의 요일을 출력
/*
 #include <stdio.h>
void main()
{
	printf("2071360 이종범\n");
	int startday, i, month, ss, day;
	int m[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int daysum;
	const char* weeks[] = { "일","월","화","수","목","금","토" };
	int weekday;
	int T;
	// T 입력하고
	scanf("%d", &T);
	// T 횟수 동안
	while (T--) {
		day = 3;
		i = 0;
		// 월, 일 입력
		scanf("%d %d", &month, &day);
		// 오류 처리 N/A 출력
		if (m[month - 1] < day || month > 12 || month < 1) {
			printf("N/A\n");
			continue;
		}
		else {
			do {
				day += m[i];
				i++;
			} while (i < month);
			// 요일 계산
			weekday = day % 7;
			// 요일 출력
			printf("%s요일\n", weeks[weekday-1]);
		}
	}
}

*/


