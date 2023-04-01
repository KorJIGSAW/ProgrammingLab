#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct {
    double real, imag;
}Cnum;

Cnum sum(Cnum a, Cnum b) {
    Cnum res = { a.real + b.real, a.imag + b.imag };
    return res;
}

Cnum subtract(Cnum a, Cnum b) {
    Cnum res = { a.real - b.real, a.imag - b.imag };
    return res;
}

Cnum multiply(Cnum a, Cnum b) {
    Cnum res;
    res.real = a.real * b.real - a.imag * b.imag;
    res.imag = a.real * b.imag + a.imag * b.real;

    return res;
}

Cnum divide(Cnum a, Cnum b) {
    Cnum res;
    double denom = b.real * b.real + b.imag * b.imag;   // b times b-bar

    res.real = (a.real * b.real + a.imag * b.imag) / denom;
    res.imag = (-a.real * b.imag + a.imag * b.real) / denom;

    return res;
}

void print_boksosu(Cnum tmp) {
    if (!tmp.imag)
        printf("%lf", tmp.real);
    else if (!tmp.real)
        printf("%lfi", tmp.imag);
    else
        printf("%lf%s%lfi", tmp.real, tmp.imag > 0 ? "+" : "", tmp.imag);
}

int main() {
    short selected;
    Cnum a, b;
    Cnum tmp;

    const char* menu = R"rawliteral(***���Ҽ� ����***
1. ������ �Է�
2. ���Ҽ� ����
3. ���Ҽ� ����
4. ���Ҽ� ����
5. ���Ҽ� ������
6. ���α׷� ����

���۾��� ��ȣ�� �Է�>>)rawliteral";

    while (1) {
    start_of_while:
        printf("%s", menu);
        scanf("%hd", &selected);

        switch (selected) {
        case 1:
            printf("ù ��° ���Ҽ��� �Ǽ��� �Է� : ");
            scanf("%lf", &a);
            printf("ù ��° ���Ҽ��� ����� �Է� : ");
            scanf("%lf", &(a.imag));
            printf("�� ��° ���Ҽ��� �Ǽ��� �Է� : ");
            scanf("%lf", &b);
            printf("�� ��° ���Ҽ��� ����� �Է� : ");
            scanf("%lf", &(b.imag));
            goto start_of_while;

        case 2:
            tmp = sum(a, b);
            printf("���� ��� : ");
            break;
        case 3:
            tmp = subtract(a, b);
            printf("���� ��� : ");
            break;
        case 4:
            tmp = multiply(a, b);
            printf("���� ��� : ");
            break;
        case 5:
            tmp = divide(a, b);
            printf("������ ��� : ");
            break;
        case 6:
            return 0;
        }

        print_boksosu(tmp);
        printf("\n");
    }
}