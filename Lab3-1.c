#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

int main() {
	time_t now;
	now = time(NULL);
	printf("now = %d\n", now);
	printf("ctime() : %s", ctime(&now));
	struct tm* localtime(const time_t*);
	struct tm* tp = localtime(&now);
	char* weeks[] = { "��","ȭ","��","��","��","��","��" };
	printf("%d�� %d�� %d�� %s���� %d�� %d�� %d��\n", 1900 + tp->tm_year, 1 + tp->tm_mon, tp->tm_mday, weeks[tp->tm_wday], tp->tm_hour, tp->tm_min, tp->tm_sec);
}