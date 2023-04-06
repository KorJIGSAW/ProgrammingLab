// 2017-1학기 프로그래밍랩 6주
// Lab6-ACM Candy War
#include <stdio.h>
#include <string.h>
#include <windows.h>
int debug; // 중간 과정을 출력하는 flag

// 모든 사람이 동일한 캔디를 가지고 있는지 check
// 같으면 return 1
// 다르면 return 0
int check_candys(int* candys, int n)
{

}

// 모든 사람이 짝수개 캔디를 갖도록 조정한다.
void make_even(int* candys, int n)
{
	if (debug)
		printf("짝수 ");
}
// 들고있는 캔디의 반을 우측으로 전달한다.
// Circular Queue 형태로 전달
// 0->1, 1->2, .. (n-1)-->0
void turn_over(int* candys, int n)
{
	if (debug)
		printf("전달 ");
}

// 모든 사람이 가지고 있는 캔디를 출력한다.
void print_candys(int round, int* candys, int n)
{

}

void main()
{
	int ntest;
	int i, n, candys[10];
	int round;

	//printf("중간과정 출력(1/0) : ");
	//scanf("%d", &debug);
	scanf("%d", &ntest);
	while (ntest--) {
		scanf("%d", &n);
		// candy[]에 입력을 받는다.
		round = 0;
		if (debug)
			printf("시작 ");
		// n==1이면 즉시 끝난다.
		// 모든 사람을 짝수개로 만들고
		while () { // check_candys 모두 같으면 끝난다.
			round++;
			// turn_over 옆사람에게 1/2를 주고
			// check_candys 모두 같으면 끝난다.
			// make_even 혹시 홀수개가 있으면 모두 짝수개를 만들고
		}
		printf("%d\n", round);
	}
	Sleep(10000);
}