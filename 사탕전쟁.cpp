// 2017-1학기 프로그래밍랩 6주
// Lab6-ACM Candy War
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>
int debug; // 중간 과정을 출력하는 flag

// 모든 사람이 동일한 캔디를 가지고 있는지 check
// 같으면 return 1
// 다르면 return 0
int check_candys(int* candys, int n)
{
	int res = candys[0];
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (res != candys[i]) {
			count++;
		}
	}
	if (count == 0) {
		return 1;
	}
	else {
		return 0;
	}
}

// 모든 사람이 짝수개 캔디를 갖도록 조정한다.
void make_even(int* candys, int n)
{
	if (debug) {
		printf("짝수");
		for (int i = 0; i < n; i++) {
			if (candys[i] % 2 == 1) {
				candys[i]++;
			}
		}
	}
}
// 들고있는 캔디의 반을 우측으로 전달한다.
// Circular Queue 형태로 전달
// 0->1, 1->2, .. (n-1)-->0
void turn_over(int* candys, int n)
{
	int plus[10];
	if (debug) {
		for (int i = 0; i < n; i++) {
			plus[i] = candys[i] /= 2;
		}
		for (int i = 0; i < n; i++) {
			if (i == n - 1) {
				candys[0] += plus[i];
			}
			else {
				candys[i + 1] += plus[i];
			}
		}
		printf("전달");
	}
}

// 모든 사람이 가지고 있는 캔디를 출력한다.
void print_candys(int round, int* candys, int n)
{
	printf(" %d : ", round);
	for (int i = 0; i < n; i++) {
		printf("%2d ", candys[i]);
	}
	printf("\n");
}

void main()
{
	printf("2071360 이종범\n");
	int ntest;
	int i, n, candys[10] = { 0, };
	int round;

	printf("중간과정 출력(1/0) : ");
	scanf("%d", &debug);
	scanf("%d", &ntest);
	while (ntest--) {
		scanf("%d", &n);
		// candy[]에 입력을 받는다.
		for (int i = 0; i < n; i++) {
			scanf("%d", &candys[i]);
		}
		round = 0;
		if (debug)
			printf("시작");
		// n==1이면 즉시 끝난다.
		if (n == 1) {
			break;
		}
		print_candys(round, candys, n);
		// 모든 사람을 짝수개로 만들고
		make_even(candys, n);
		print_candys(round, candys, n);
		while (!check_candys(candys, n)) { // check_candys 모두 같으면 끝난다.
			round++;
			// turn_over 옆사람에게 1/2를 주고
			turn_over(candys, n);
			print_candys(round, candys, n);
			// check_candys 모두 같으면 끝난다.
			if (check_candys(candys, n)) {
				break;
			}
			// make_even 혹시 홀수개가 있으면 모두 짝수개를 만들고
			make_even(candys, n);
			print_candys(round, candys, n);
		}
		printf("결과 %d\n", round);
	}
	Sleep(10000);
}