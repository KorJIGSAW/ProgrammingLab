//6-2, 5-3


// quiz06-2
// 로또번호 발생기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
	printf("2071360 이종범\n");
	int T, n, l, i, j, lotto[66];
	int lotto2[10][66] = { 0, };
	scanf("%d", &T); // 로또 매 수
	for (i = 0; i < T; i++) {
		scanf("%d", &n);// 마킹한 수의 갯수
		for (j = 1; j <= 65; j++)
			lotto[j] = 0;
		for (j = 0; j < n; j++) {
			scanf("%d", &l);
			lotto[l] = 1; // 마킹한 수 기억
		}
		for (j = n + 1; j <= 8; j++) { // 마킹한 수 제외한 난수 발생
			do {
				l = rand() % 65 + 1;
			} while (lotto[l] == 1); // 중복 체크
			lotto[l] = 1;
		}
		lotto2[i][0] = i + 1;
		for (j = 0; j <= 65; j++) {
			if (lotto[j])
				lotto2[i][j] = j;
		}
	}
	time_t now = 0;
	now = time(NULL);
	struct tm* localtime(const time_t*);
	struct tm* tp = localtime(&now);
	printf("발행시간 : %d/%02d/%2d %02d:%02d:%02d\n", 1900 + tp->tm_year, 1 + tp->tm_mon, tp->tm_mday, tp->tm_hour, tp->tm_min, tp->tm_sec);
	for (int i = 0; i < 10; i++) {
		printf("[%02d] : ", i + 1);
		for (int j = 0; j <= 65; j++) {
			if (lotto2[i][j])
				printf("%02d ", j);
		}
		printf("\n");
	}
}
