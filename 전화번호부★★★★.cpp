#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define N 5
#define MAX_SIZE 15

typedef struct {
	char name[MAX_SIZE];
	char tel[MAX_SIZE];
}TEL;

void print_tel(TEL *d) { //�ϼ�
	printf("%s %s\n", d->name, d->tel); //�ϳ��� ��¿ϼ�
}


int main() {
	TEL data[N] = {
	{"ȫ�浿","01011112345"},
	{"��ö��","01022232345"},
	{"�̵���","01033331234"},
	{"������","01034562356"},
	{"��ȣ��","01056782356"}
	};
	char buf[20];
	int i, count;
	//�߰��� �ϼ��� �κ�
	//��ü data ���(for ���)
	//quit �Է� ������ ã�Ƽ� ��� (strstr ���)
	printf("-- ��ü Data --\n");
	for (int i = 0; i < N; i++) {
		printf("%d: %s %s\n", i, data[i].name, data[i].tel);
	}
	printf("-------------------\n");
	while (true) {
		printf("ã�� �̸� �Ǵ� ��ȣ (����� Quit) : ");
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