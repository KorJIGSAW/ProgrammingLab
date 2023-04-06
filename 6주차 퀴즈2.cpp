// quiz06-2
// 로또번호 발생기
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
	int T, n, l, i, j, lotto[46];
	scanf("%d", &T); // 로또 매 수
	for (i = 0; i < T; i++) {
		scanf("%d", &n);// 마킹한 수의 갯수
		for (j = 1; j <= 45; j++)
			lotto[j] = 0;
		for (j = 0; j < n; j++) {
			scanf("%d", &l);
			lotto[l] = 1; // 마킹한 수 기억
		}
		for (j = n + 1; j <= 6; j++) { // 마킹한 수 제외한 난수 발생
			do {
				l = rand() % 45 + 1;
			} while (lotto[l] == 1); // 중복 체크
			lotto[l] = 1;
		}
		printf("[%02d] : ", i + 1);
		for (j = 1; j <= 45; j++) {
			if (lotto[j])
				printf("%02d ", j);
		}
		printf("\n");
	}
}
