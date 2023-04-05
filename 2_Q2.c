// Lab02-2 완전수 구하기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
	int n, i, j, sum;
	int ndiv, div[5000]; // 약수 보관 장소
	n = 10000;
	for (i = 2; i <= n; i++) {
		sum = 0; // 
		ndiv = 0; // 약수의 갯수를 초기화 한다.
		//약수 1추가, 자기자신 제외
		ndiv++;
		div[0] = 1;
		sum += ndiv;
		// 2 ~ i/2 수 중에서 i의 약수를 구해서 sum 에 더하고 div[]에 저장한다.
		for (j = 2; j < i / 2; j++) {
			//일반적인 약수일때
			if (j != i / j && i % j == 0) {
				div[ndiv] = j;
				ndiv++;
				div[ndiv] = i / j;
				ndiv++;
				sum += j;
				sum += i % j;
			}
			else if (j == i / j && i % j == 0) {
				div[ndiv] = j;
				ndiv++;
				sum += j;
			}
			else {
				continue;
			}

			// i == sum 이면 완전수 이므로 i와 div[]를 6 = 1 + 2 + 3 식으로 출력한다.
			if (i == sum) {
				printf("%d = ", j);
				for (int k = 0; k < ndiv; k++) {
					printf("%d", div[k]);
					if (k == ndiv - 1) {
						printf("\n");
						break;
					}
					printf(" + ");
				}
			}
		}
	}
}