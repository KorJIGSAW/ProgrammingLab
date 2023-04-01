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

    const char* menu = R"rawliteral(***복소수 연산***
1. 데이터 입력
2. 복소수 덧셈
3. 복소수 뺄셈
4. 복소수 곱셈
5. 복소수 나눗셈
6. 프로그램 종료

◆작업할 번호를 입력>>)rawliteral";

    while (1) {
    start_of_while:
        printf("%s", menu);
        scanf("%hd", &selected);

        switch (selected) {
        case 1:
            printf("첫 번째 복소수의 실수부 입력 : ");
            scanf("%lf", &a);
            printf("첫 번째 복소수의 허수부 입력 : ");
            scanf("%lf", &(a.imag));
            printf("두 번째 복소수의 실수부 입력 : ");
            scanf("%lf", &b);
            printf("두 번째 복소수의 허수부 입력 : ");
            scanf("%lf", &(b.imag));
            goto start_of_while;

        case 2:
            tmp = sum(a, b);
            printf("덧셈 결과 : ");
            break;
        case 3:
            tmp = subtract(a, b);
            printf("뺄셈 결과 : ");
            break;
        case 4:
            tmp = multiply(a, b);
            printf("곱셈 결과 : ");
            break;
        case 5:
            tmp = divide(a, b);
            printf("나눗셈 결과 : ");
            break;
        case 6:
            return 0;
        }

        print_boksosu(tmp);
        printf("\n");
    }
}