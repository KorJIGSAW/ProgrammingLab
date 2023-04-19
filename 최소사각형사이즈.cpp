`#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
typedef struct {
	int x, y;
} Point;

#define MAXPOINT	20

typedef struct {
	int n_point;
	Point point[MAXPOINT];
} Polygon;

#define ABS(x) (x > 0 ? x : -x)
#define MAX(x, y) (x > y ? x : y)
#define MIN(x, y) (x < y ? x : y)

void input_polygon(Polygon* p) {
	// ��ǥ �Է� ó��
	scanf("%d", &p->n_point);
	for (int i = 0; i < p->n_point; i++) {
		scanf("%d", &p->point[i].x); //&���� ���߿� ����Ȯ��
		scanf("%d", &p->point[i].y); //&���� ���߿� ����Ȯ��
	}
}

void print_point(Point* p) {
	// �ϳ��� ��ǥ���
	printf("= (%d, %d)\n", p->x, p->y);
}

void print_polygon(Polygon* p) {
	// Polygon ��ü ��ǥ ���
	for (int i = 0; i < 4; i++) {
		printf("P[%d] = (%d, %d)\n", i, p->point[i].x, p->point[i].y);
	}
}


void main()
{
	//���� �߰����� �� ��
	Polygon Poly, Rect;
	int i, area = 0;
	int T;
	scanf("%d", &T);
	while (T--) {
		input_polygon(&Poly);
		Rect.n_point = Poly.n_point;
		Rect.point[0].x = Rect.point[0].y = Rect.point[1].y = Rect.point[3].x = 100;
		Rect.point[1].x = Rect.point[2].x = Rect.point[2].y = Rect.point[3].y = -1;

		// Rect �� ��ǥ�� ���Ѵ�.
		for (i = 0; i < Poly.n_point; i++) {//Rect.point[0] �� ���� �Ʒ�
			Rect.point[0].x = MIN(Rect.point[0].x, Poly.point[i].x);
			Rect.point[0].y = MIN(Rect.point[0].y, Poly.point[i].y);
		}
		for (i = 0; i < Poly.n_point; i++) {//Rect.point[1] �� ������ �Ʒ�
			Rect.point[1].x = MAX(Rect.point[1].x, Poly.point[i].x);
			Rect.point[1].y = MIN(Rect.point[1].y, Poly.point[i].y);
		}
		for (i = 0; i < Poly.n_point; i++) {//Rect.point[2] �� ������ ��
			Rect.point[2].x = MAX(Rect.point[2].x, Poly.point[i].x);
			Rect.point[2].y = MAX(Rect.point[2].y, Poly.point[i].y);
		}
		for (i = 0; i < Poly.n_point; i++) {//Rect.point[3] �� ���� ��
			Rect.point[3].x = MIN(Rect.point[3].x, Poly.point[i].x);
			Rect.point[3].y = MAX(Rect.point[3].y, Poly.point[i].y);
		}

		// Rect�� ����Ѵ�.
		print_polygon(&Rect);
		
		// ������ ���Ѵ�.
		area = (Rect.point[1].x - Rect.point[0].x) * (Rect.point[3].y - Rect.point[0].y);
		printf("����=%d\n", area);
	}
}