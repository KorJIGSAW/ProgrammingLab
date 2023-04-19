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
	// 좌표 입력 처리
	scanf("%d", &p->n_point);
	for (int i = 0; i < p->n_point; i++) {
		scanf("%d", &p->point[i].x); //&없음 나중에 오류확인
		scanf("%d", &p->point[i].y); //&없음 나중에 오류확인
	}
}

void print_point(Point* p) {
	// 하나의 좌표출력
	printf("= (%d, %d)\n", p->x, p->y);
}

void print_polygon(Polygon* p) {
	// Polygon 전체 좌표 출력
	for (int i = 0; i < 4; i++) {
		printf("P[%d] = (%d, %d)\n", i, p->point[i].x, p->point[i].y);
	}
}


void main()
{
	//변수 추가하지 말 것
	Polygon Poly, Rect;
	int i, area = 0;
	int T;
	scanf("%d", &T);
	while (T--) {
		input_polygon(&Poly);
		Rect.n_point = Poly.n_point;
		Rect.point[0].x = Rect.point[0].y = Rect.point[1].y = Rect.point[3].x = 100;
		Rect.point[1].x = Rect.point[2].x = Rect.point[2].y = Rect.point[3].y = -1;

		// Rect 의 좌표를 구한다.
		for (i = 0; i < Poly.n_point; i++) {//Rect.point[0] 의 왼쪽 아래
			Rect.point[0].x = MIN(Rect.point[0].x, Poly.point[i].x);
			Rect.point[0].y = MIN(Rect.point[0].y, Poly.point[i].y);
		}
		for (i = 0; i < Poly.n_point; i++) {//Rect.point[1] 의 오른쪽 아래
			Rect.point[1].x = MAX(Rect.point[1].x, Poly.point[i].x);
			Rect.point[1].y = MIN(Rect.point[1].y, Poly.point[i].y);
		}
		for (i = 0; i < Poly.n_point; i++) {//Rect.point[2] 의 오른쪽 위
			Rect.point[2].x = MAX(Rect.point[2].x, Poly.point[i].x);
			Rect.point[2].y = MAX(Rect.point[2].y, Poly.point[i].y);
		}
		for (i = 0; i < Poly.n_point; i++) {//Rect.point[3] 의 왼쪽 위
			Rect.point[3].x = MIN(Rect.point[3].x, Poly.point[i].x);
			Rect.point[3].y = MAX(Rect.point[3].y, Poly.point[i].y);
		}

		// Rect를 출력한다.
		print_polygon(&Rect);
		
		// 면적을 구한다.
		area = (Rect.point[1].x - Rect.point[0].x) * (Rect.point[3].y - Rect.point[0].y);
		printf("면적=%d\n", area);
	}
}