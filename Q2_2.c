// Lab02-2 완전수 구하기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
	int n, i, j, sum;
	int ndiv, div[5000]; // 약수 보관 장소
	n = 10000;
	for (i = 2; i <= n; i++) {
		sum = 0;
		ndiv = 0; // 약수의 갯수를 초기화 한다.

		// 2 ~ i/2 수 중에서 i의 약수를 구해서 sum 에 더하고 div[]에 저장한다
		//문제포인트
		for (j = 1; j <= i / 2; j++) {
			if (i % j == 0) {
				div[ndiv] = j;
				ndiv++;
				sum += j;
			}
			//정상 작동
		}
		// i == sum 이면 완전수 이므로 i와 div[]를 6 = 1 + 2 + 3 식으로 출력한다.	
		if (sum == i) {
			printf("%d = ", sum);
			for (int k = 0; k < ndiv; k++) {
				printf("%d", div[k]);
				if (k == ndiv - 1) {
					break;
				}
				printf(" + ");

			}
			printf("\n");
		}
	}
}