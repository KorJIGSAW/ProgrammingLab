#include <stdio.h>

// 탑에 몇개의 원판이 있는지 변수
int nplates[3];

// 어떤 원판들이 있는지 보관
int tower[3][100];

void print_array(int r) {
	for (int i = 0; i < nplates[r]; i++) {
		printf("%d ", tower[r][i]);
	}
	printf("\n");
}

// 탑의 현재 상태를 표시한다.
void print_tower()
{
	// tower[][] 내용을 보여준다
	printf("A : ");
	print_array(0);
	printf("B : ");
	print_array(1);
	printf("C : ");
	print_array(2);
	printf("\n");
	printf("다음 Enter : ");
	getchar(); // getchar() 로 잠시 대기한다.
	fflush(stdin);
}

// 하나의 원판을 이동할 때 마다 전체 탑의 현재상태를 변경하고 탑의 내용을 표시.
void move_one(int n, char from, char to)
{
	printf("\n원판 %d을 %c에서 %c로 옮긴다.\n",
		n, from, to);
	// nplates[] 와 tower[][] 내용을 수정한다
	// from 에서는 제일 위의 원판을 빼고
	// to 에는 제일 끝에 원판을 추가하고
	// nplates[] 값을 감소/증가 한다.
	int interchange1 = from - 'A';
	int interchange2 = to - 'A';
	nplates[interchange1]--; 
	nplates[interchange2]++;
	tower[interchange2][nplates[interchange2]-1] = tower[interchange1][nplates[interchange1]];
	// 이동이 발생할 때 마다 print_tower() 호출
	print_tower();
}

// 타워내용을 초기화 한다.
// start 위치에 n개의 원판(1~n)이 있다.
void init_tower(int n, char start)
{
	int i, tower_no;
	//탑의 번호 A, B, C -> 0, 1, 2
	tower_no = start - 'A';

	for (int i = 4; i > 0; i--) {
		tower[0][4 - i] = i;
	}
	nplates[0] = 4;
	nplates[1] = 0;
	nplates[2] = 0;

	// tower[][] 내용과 nplates[]를 초기화 한다.
	// tower[0][0]~[0][3] = 4, 3, 2, 1 식으로
	// nplates[] 에 원판의 수를 기억시킨다..
}

void hanoi_tower(int n, char from, char tmp, char to)
{
	if (n == 1)
		// 제일 위에 있는 1번 원판을 이동
		move_one(1, from, to);
	else {
		// 1 ~ n-1 을 임시 장소에 이동
		hanoi_tower(n - 1, from, to, tmp);
		// 제일 밑에 있는 원판을 이동
		move_one(n, from, to);
		// 1 ~ n-1 을 임시 장소에서 목적지로 이동
		hanoi_tower(n - 1, tmp, from, to);
	}
}
void main()
{
	printf("2071360 이종범\n");
	// 초기 조건, 1~4 원판이 A 에 있다.
	init_tower(4, 'A');
	printf("초기 상태\n");
	print_tower();
	hanoi_tower(4, 'A', 'B', 'C');
}
