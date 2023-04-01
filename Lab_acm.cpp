// Lab3-ACM
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
// 단위 분수의 합으로 a/b 를 구하고 가장 마지막 단위분수 1/x 를 구하고
// x 를 return 한다.
// 1/x1 <= a/b 인 최대값 x1을 구하고 a/b 에서 1/x1을 뺀 값에 대하여 반복한다.
#define MAX(x, y) ((x>y) ? (x) : (y))
#define MIN(x, y) ((x<y) ? (x) : (y))

typedef struct{
	int mom;
	int baby;
}fraction;

 fraction tongbun(fraction frac1, fraction frac2) {
	fraction frac3;
	
	//통분 과정 (a/b - 1/m+1)
	//분모맞추기
	frac3.mom = frac1.mom * frac2.mom;
	//분자계산
	//a(m+1)
	frac3.baby = frac1.baby * frac2.mom - frac1.mom;
	//기약분수 만들기
	for (int i = 2; i < frac3.baby + 1; i++) {
		if (frac3.baby % i == 0 && frac3.mom % i == 0) {
			frac3.baby /= i;
			frac3.mom /= i;
		}
	}
	return frac3;
}

fraction find_last_x(fraction frac1){
	//예외처리
	if (frac1.mom % frac1.baby == 0) {
		frac1.mom /= frac1.baby;
		frac1.baby = 1;
		return frac1;
	}

	//단위분수의 분모구하기
	fraction fracunit;
	fraction fracresult;

	fracunit.mom = frac1.mom / frac1.baby + 1;
	
	fracunit.baby = 1;
	//단위분수 출력
	printf("%d/%d ", fracunit.baby, fracunit.mom);
	//fracresult값 받기
	fracresult = tongbun(frac1, fracunit); //기약분수형태
	//단위분수 마지막인지 아닌지 분간하기.
	if (fracresult.baby == 1) {
		return fracresult;
	}
	else {
		printf("+ ");
		return find_last_x(fracresult);
	}
	//a,b,m 최신화 -> fracresult를 반환하면됨.
	//만약 마지막 단위분수의 분모를 찾았다면 break;
}

int main(){	
	fraction frac;
	fraction result;
	int n_test;
	int a, b; // a/b
	scanf("%d", &n_test);

	while (n_test--) {
		scanf("%d %d", &a, &b); // input a  b
		frac.mom = b;
		frac.baby = a;
		//printf("%d/%d = ", a, b);
		printf("%d/%d = ", frac.baby, frac.mom);
		result = find_last_x(frac);
		printf("+ 1/%d\n", result.mom);
	}
	Sleep(100000);
}