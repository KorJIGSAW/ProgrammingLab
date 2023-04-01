// Lab3-ACM
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
// ���� �м��� ������ a/b �� ���ϰ� ���� ������ �����м� 1/x �� ���ϰ�
// x �� return �Ѵ�.
// 1/x1 <= a/b �� �ִ밪 x1�� ���ϰ� a/b ���� 1/x1�� �� ���� ���Ͽ� �ݺ��Ѵ�.
#define MAX(x, y) ((x>y) ? (x) : (y))
#define MIN(x, y) ((x<y) ? (x) : (y))

typedef struct{
	int mom;
	int baby;
}fraction;

 fraction tongbun(fraction frac1, fraction frac2) {
	fraction frac3;
	
	//��� ���� (a/b - 1/m+1)
	//�и���߱�
	frac3.mom = frac1.mom * frac2.mom;
	//���ڰ��
	//a(m+1)
	frac3.baby = frac1.baby * frac2.mom - frac1.mom;
	//���м� �����
	for (int i = 2; i < frac3.baby + 1; i++) {
		if (frac3.baby % i == 0 && frac3.mom % i == 0) {
			frac3.baby /= i;
			frac3.mom /= i;
		}
	}
	return frac3;
}

fraction find_last_x(fraction frac1){
	//����ó��
	if (frac1.mom % frac1.baby == 0) {
		frac1.mom /= frac1.baby;
		frac1.baby = 1;
		return frac1;
	}

	//�����м��� �и��ϱ�
	fraction fracunit;
	fraction fracresult;

	fracunit.mom = frac1.mom / frac1.baby + 1;
	
	fracunit.baby = 1;
	//�����м� ���
	printf("%d/%d ", fracunit.baby, fracunit.mom);
	//fracresult�� �ޱ�
	fracresult = tongbun(frac1, fracunit); //���м�����
	//�����м� ���������� �ƴ��� �а��ϱ�.
	if (fracresult.baby == 1) {
		return fracresult;
	}
	else {
		printf("+ ");
		return find_last_x(fracresult);
	}
	//a,b,m �ֽ�ȭ -> fracresult�� ��ȯ�ϸ��.
	//���� ������ �����м��� �и� ã�Ҵٸ� break;
}

int main(){	
	fraction frac;
	fraction result;
	int n_test;
	int a, b; // a/b
	scanf("%d", &n_test);

	while (n_test--) {
		scanf("%d %d", &a, &b); // input a  b
		frac.mom = b;
		frac.baby = a;
		//printf("%d/%d = ", a, b);
		printf("%d/%d = ", frac.baby, frac.mom);
		result = find_last_x(frac);
		printf("+ 1/%d\n", result.mom);
	}
	Sleep(100000);
}