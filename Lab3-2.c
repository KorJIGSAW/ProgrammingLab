#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

int main() {
	time_t now;
	while (1) {
		//printf("ctime() : %s", ctime(&now));
		now = time(NULL);
		struct tm* localtime(const time_t*);
		struct tm* tp = localtime(&now);
		char* weeks[] = { "��","ȭ","��","��","��","��","��" };
		printf("%d�� %2d�� %2d�� %s���� %2d�� %2d�� %2d��\r", 1900 + tp->tm_year, 1 + tp->tm_mon, tp->tm_mday, weeks[tp->tm_wday], tp->tm_hour, tp->tm_min, tp->tm_sec);
	}
}