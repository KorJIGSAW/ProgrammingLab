#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define N 5
#define MAX_SIZE 15

typedef struct {
	char name[MAX_SIZE];
	char tel[MAX_SIZE];
}TEL;

void print_tel(TEL *d) { //완성
	printf("%s %s\n", d->name, d->tel); //하나만 출력완성
}


int main() {
	TEL data[N] = {
	{"홍길동","01011112345"},
	{"김철수","01022232345"},
	{"이도령","01033331234"},
	{"김제동","01034562356"},
	{"강호동","01056782356"}
	};
	char buf[20];
	int i, count;
	//추가로 완성할 부분
	//전체 data 출력(for 사용)
	//quit 입력 전가지 찾아서 출력 (strstr 사용)
	printf("-- 전체 Data --\n");
	for (int i = 0; i < N; i++) {
		printf("%d: %s %s\n", i, data[i].name, data[i].tel);
	}
	printf("-------------------\n");
	while (true) {
		printf("찾을 이름 또는 번호 (종료는 Quit) : ");
		scanf("%s", buf);
		if (strcmp(buf, "Quit") == 0 || strcmp(buf, "quit") == 0)
			break;
		for (int i = 0; i < N; i++) {
			if (strstr(data[i].name, buf) || strstr(data[i].tel, buf)) {
				printf("%d : ", i + 1);
				print_tel(&data[i]);
			}
		}
	}


}