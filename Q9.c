// Lab01-9 구조체
// 주어진 점들을 둘러싸는 최소 크기의 사각형의 좌표 P1, P2 구하고 면적을 출력
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define N 4
struct Point {
    int x;
    int y;
};

void print_point(struct Point* space) // 좌표를 (1, 1) 식으로 출력한다. 완성할 것
{
    printf("(%d, %d)", space->x, space->y);
}

void main()
{
    struct  Point p[N] = { {1,2}, {6, 1}, {3,4}, {4,5} };
    struct Point P1, P2;
    int area; // 면적
    int i;
    // 모든 점들을 출력한다.
    for (i = 0; i < N; i++) {
        printf("p[%d]=", i);
        print_point(&p[i]);
        printf("\n");
    } 
    // P1, P2를 구한다. 주어진 변수만 사용할 것.
    // P1 구하기
    int xmin = p[0].x;
    int ymin = p[0].y;
    for (int i = 1; i < 4; i++) {
        if (i == 4) {
            break;
        }
        xmin = xmin < p[i].x ? xmin : p[i].x;
        ymin = ymin < p[i].y ? ymin : p[i].y;
    }

    P1.x = xmin;
    P1.y = ymin;

    // P2 구하기
    int xmax = p[0].x;
    int ymax = p[0].y;
    for (int i = 1; i < 4; i++) {
        if (i == 4) {
            break;
        }
        xmax = xmax > p[i].x ? xmax : p[i].x;
        ymax = ymax > p[i].y ? ymax : p[i].y;
    }

    P2.x = xmax;
    P2.y = ymax;

    printf("P1="); print_point(&P1); // 호출 형식을 참조해서 print_point() 함수를 완성할 것
    printf(" P2="); print_point(&P2);

    area = (P2.x - P1.x) * (P2.y - P1.y);
    // 면적을 계산한다.
    printf("   면적=%d\n", area);
}