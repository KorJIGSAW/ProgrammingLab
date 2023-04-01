// Lab01-9 ����ü
// �־��� ������ �ѷ��δ� �ּ� ũ���� �簢���� ��ǥ P1, P2 ���ϰ� ������ ���
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define N 4
struct Point {
    int x;
    int y;
};

void print_point(struct Point* space) // ��ǥ�� (1, 1) ������ ����Ѵ�. �ϼ��� ��
{
    printf("(%d, %d)", space->x, space->y);
}

void main()
{
    struct  Point p[N] = { {1,2}, {6, 1}, {3,4}, {4,5} };
    struct Point P1, P2;
    int area; // ����
    int i;
    // ��� ������ ����Ѵ�.
    for (i = 0; i < N; i++) {
        printf("p[%d]=", i);
        print_point(&p[i]);
        printf("\n");
    } 
    // P1, P2�� ���Ѵ�. �־��� ������ ����� ��.
    // P1 ���ϱ�
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

    // P2 ���ϱ�
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

    printf("P1="); print_point(&P1); // ȣ�� ������ �����ؼ� print_point() �Լ��� �ϼ��� ��
    printf(" P2="); print_point(&P2);

    area = (P2.x - P1.x) * (P2.y - P1.y);
    // ������ ����Ѵ�.
    printf("   ����=%d\n", area);
}