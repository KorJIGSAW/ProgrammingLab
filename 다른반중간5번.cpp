// 덧셈 공부
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int jari(int k) {
	if (k < 70) {
		k = 1;
	}
	else{
		k = 2;
	}
	return k;
}

int random(int k) {
	if (k == 1) {
		return rand() % 9 + 1;
	}
	else if (k == 2) {
		return 10 + rand() % 90;
	}
}

void main()
{
	int x, y, r, result, ans; // 필요하면 변수 추가
	int round = 0, ok = 0;
	int i = 1;
	int k;
	printf("7반 2071360 이종범\n");
	// 난수 초기화
	srand((unsigned)time(NULL));
	// 무한 반복
	while (1) {
		k = jari(rand() % 100);
		if (k == 2) {
			x = random(k);
			y = random(k-1);
		}
		else {
			x = random(k);
			y = random(k);
		}
		printf("(문제 %d) %d * %d = ", i, x, y);
		scanf("%d", &result);
		if (result == 0) {
			printf("정답률 %2d%% (%d/%d)", ok*100 / round, ok, round);
			break;
		}
		if (result == x * y) {
			printf("정답입니다!\n");
			round++;
			ok++;
		}
		else {
			printf("오답입니다!\n");
			round++;
		}
		i++;
	}
	// x+y 를 확률에 따라 1자리, 2자리, 3자리 문제를 출력한다.
	// ans 입력
	// ans 가 0이면 반복 종료
	// 정답과 오답 결과 출력
// 반복끝
// 정답률 출력
}
