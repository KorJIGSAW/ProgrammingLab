#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Lotto 번호 6개 구하기(난수사용, 크기순정렬)

void GetLotto(int lotto[]){
	// 변수 추가하거나 수정해도 됨
	int tmp[46] = { 0 };
	int i,n = 0;
	while (n < 6)
	{
		tmp[n] = rand() % 45 + 1;

		for (i = 0; i < n; i++)         // 이미 생성된 개수 만큼 반복
			if (lotto[i] == tmp[n]) break;     // 이미 생성된 번호인지(중복수) 검사한다.

		if (n == i) 
			lotto[n++] = tmp[n];            // 중복수가 아닐때에만 n위치에 생성된 수를 기억시킨다.
	}
	// tmp[] 이용 중복 체크를 하면서 6개를 구하고
	// 6개 번호를 lotto[] 에 크기순으로 저장 
	int temp = 0;
	for (int i = 0; i < 5; i++) {
		for (int j = i + 1; j < 6; j++) {
			if (lotto[i] > lotto[j]) {
				temp = lotto[i];
				lotto[i] = lotto[j];
				lotto[j] = temp;
			}
		}
	}
}
// Lotto 번호가 당첨되었는지 Check
int CheckLotto(int lotto[], int mylotto[]){
	// lotto[0~5] 과 mylotto[0~5]이 같은지 검사
	// 모두 같으면 1, 아니면 0
	for (int i = 0; i < 6; i++) {
		if (lotto[i] != mylotto[i])
			return 0;
	}
	return 1;
}

void PrintLotto(int lotto[]){
	// 출력 화면 참고해서 완성
	for (int i = 0; i < 6; i++) {
		printf("%d ", lotto[i]);
	}
}
void main() // main 함수는 수정하지 말 것
{
	printf("2071360 이종범\n");
	int lotto[6]; // 당첨 번호 보관용 크기순으로 들어 있다
	int mylotto[6]; // 내 로또 번호 보관용
	int i = 0;
	srand(time(NULL));
	GetLotto(lotto); // 당첨 번호 발생
	printf("당첨번호 : ");
	PrintLotto(lotto);
	printf("\n");
	do {
		GetLotto(mylotto); // 내 로또 번호 발생
		i++;
	} while (!CheckLotto(lotto, mylotto)); //맞을때까지
	printf("  내번호 : ");
	PrintLotto(mylotto);
	printf("%10d번 발행 후 당첨\n", i);
}
