#define _CRT_SECURE_NO_WARNINGS
#define N 34
#include <stdio.h>
#include<time.h>

int F(int n) {
	if (n <= 2)
		return n;
	else
		return F(n - 1) + F(n - 2) + F(n - 3);
}

int main()
{
	printf("2071360 이종범\n");
	int i = 0;
	int f;
	clock_t start, duration;
	do{
		start = clock();
		f = F(i);
		duration = clock() - start;
		if (duration % CLOCKS_PER_SEC > 0.0 && duration / CLOCKS_PER_SEC < 3) { 
			//0초이상부터 프린트 2초이상은 하나만 프린트하고 나머지는 프린트x
			printf("F(%02d) = %9d (%d.%03d sec)\n", i, f, duration / CLOCKS_PER_SEC,duration % CLOCKS_PER_SEC);
		}
		i++;
	} while (i <= N); 
}
