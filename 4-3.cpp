#include <stdio.h>

// ž�� ��� ������ �ִ��� ����
int nplates[3];

// � ���ǵ��� �ִ��� ����
int tower[3][100];

void print_array(int r) {
	for (int i = 0; i < nplates[r]; i++) {
		printf("%d ", tower[r][i]);
	}
	printf("\n");
}

// ž�� ���� ���¸� ǥ���Ѵ�.
void print_tower()
{
	// tower[][] ������ �����ش�
	printf("A : ");
	print_array(0);
	printf("B : ");
	print_array(1);
	printf("C : ");
	print_array(2);
	printf("\n");
	printf("���� Enter : ");
	getchar(); // getchar() �� ��� ����Ѵ�.
	fflush(stdin);
}

// �ϳ��� ������ �̵��� �� ���� ��ü ž�� ������¸� �����ϰ� ž�� ������ ǥ��.
void move_one(int n, char from, char to)
{
	printf("\n���� %d�� %c���� %c�� �ű��.\n",
		n, from, to);
	// nplates[] �� tower[][] ������ �����Ѵ�
	// from ������ ���� ���� ������ ����
	// to ���� ���� ���� ������ �߰��ϰ�
	// nplates[] ���� ����/���� �Ѵ�.
	int interchange1 = from - 'A';
	int interchange2 = to - 'A';
	nplates[interchange1]--; 
	nplates[interchange2]++;
	tower[interchange2][nplates[interchange2]-1] = tower[interchange1][nplates[interchange1]];
	// �̵��� �߻��� �� ���� print_tower() ȣ��
	print_tower();
}

// Ÿ�������� �ʱ�ȭ �Ѵ�.
// start ��ġ�� n���� ����(1~n)�� �ִ�.
void init_tower(int n, char start)
{
	int i, tower_no;
	//ž�� ��ȣ A, B, C -> 0, 1, 2
	tower_no = start - 'A';

	for (int i = 4; i > 0; i--) {
		tower[0][4 - i] = i;
	}
	nplates[0] = 4;
	nplates[1] = 0;
	nplates[2] = 0;

	// tower[][] ����� nplates[]�� �ʱ�ȭ �Ѵ�.
	// tower[0][0]~[0][3] = 4, 3, 2, 1 ������
	// nplates[] �� ������ ���� ����Ų��..
}

void hanoi_tower(int n, char from, char tmp, char to)
{
	if (n == 1)
		// ���� ���� �ִ� 1�� ������ �̵�
		move_one(1, from, to);
	else {
		// 1 ~ n-1 �� �ӽ� ��ҿ� �̵�
		hanoi_tower(n - 1, from, to, tmp);
		// ���� �ؿ� �ִ� ������ �̵�
		move_one(n, from, to);
		// 1 ~ n-1 �� �ӽ� ��ҿ��� �������� �̵�
		hanoi_tower(n - 1, tmp, from, to);
	}
}
void main()
{
	printf("2071360 ������\n");
	// �ʱ� ����, 1~4 ������ A �� �ִ�.
	init_tower(4, 'A');
	printf("�ʱ� ����\n");
	print_tower();
	hanoi_tower(4, 'A', 'B', 'C');
}
