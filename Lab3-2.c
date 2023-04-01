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
		char* weeks[] = { "월","화","수","목","금","토","일" };
		printf("%d년 %2d월 %2d일 %s요일 %2d시 %2d분 %2d초\r", 1900 + tp->tm_year, 1 + tp->tm_mon, tp->tm_mday, weeks[tp->tm_wday], tp->tm_hour, tp->tm_min, tp->tm_sec);
	}
}