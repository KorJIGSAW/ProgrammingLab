// 프로그래밍랩 5주
// Lab5-4 성적 발생하기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
	int i, j, n, r;
	int sum = 0; // 총점
	// 학점별 인원수 0:A+, 1:A, ... D, 8:F
	char* grade_str[] = { "A+", "A ", "B+", "B ", "C+", "C ", "D+", "D ", "F " };
	int grade_index, grade_count[9] = { 0 };
	int* scores[9];
	int score1;

	scanf("%d", &n);
	for (i=0;i<9;i++)
		scores[i] = (int *)malloc(sizeof(int)*n);
	srand(time(NULL)); // 난수 초기화
	for (i = 0; i < n; i++) {
		score1 = // 0 ~ 100
			printf("%d ", score1);
		// sum 을 구한다.
		// grade_index 를 구한다. 0:A+, 1:A ...
		// grade_count[]를 증가시킨다.
		grade_count[grade_index]++;
	}
	printf("\n\nn=%d 평균 = %.2f\n", n, ((double)sum) / n);
	for (i = 0; i < 9; i++) {
		// 화면과 같이 출력
		printf("\n");
	}
}