#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct complex {
	int real;
	int img;
}COMPLEX;

void print_complex(struct complex* x) {
	if (x->img > 0) {
		printf("(%d + %di)", x->real, x->img);
	}
	else {
		printf("(%d - %di)", x->real, x->img * (-1));
	}
}

COMPLEX add(COMPLEX x, COMPLEX y) {
	COMPLEX z;
	z.real = x.real + y.real;
	z.img = x.img + y.img;
	return z;
}

COMPLEX sub(COMPLEX x, COMPLEX y) {
	COMPLEX z;
	z.real = x.real - y.real;
	z.img = x.img - y.img;
	return z;
}

void main() {
	printf("2071360 ภฬมพนü\n");
	COMPLEX x, y, z;
	scanf("%d %d", &x.real, &x.img);
	scanf("%d %d", &y.real, &y.img);
	z = add(x, y);
	print_complex(&x);
	printf(" + ");
	print_complex(&y);
	printf(" = ");
	print_complex(&z);
	printf("\n");
	z = sub(x, y);
	print_complex(&x);
	printf(" - ");
	print_complex(&y);
	printf(" = ");
	print_complex(&z);
	printf("\n");
}