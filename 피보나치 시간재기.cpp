#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

long long F(int n) // recursive ¹æ½Ä
{
	if (n <= 2) {
		return n;
	}
	else {
		return F(n - 1) + F(n - 2) + F(n - 3);
	}
}


int main() {
	int i, f;
	clock_t start, duration;
	for (i = 0; i <= 34; i++) {
		start = clock();
		f = F(i);
		duration = clock() - start;
		printf("F(%02d) = %9d (%d.%03d sec)\n", i, f, duration / CLOCKS_PER_SEC, duration % CLOCKS_PER_SEC);
	}
}