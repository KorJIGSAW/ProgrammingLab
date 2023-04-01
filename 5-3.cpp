#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
	int numbers[5][6];
} Lottery;

void sort(int* key) {
	int temp = 0;
	for (int i = 0; i < 5; i++) {
		for (int j = i + 1; j < 6; j++) {
			if (key[i] > key[j]) {
				temp = key[i];
				key[i] = key[j];
				key[j] = temp;
			}
		}
	}
}

void prt(int* key) {
	printf("{");
	for (int i = 0; i < 6; i++) {
		printf("%2d", key[i]);
		if (i < 5) {
			printf(", ");
		}
	}
	printf("}\n");
}

//�ߺ��� ���� ���� 6���� ������ ��ü�� �迭
void check(int* key) {
	key[0] = (rand() % 45) + 1;

	for (int j = 1; j < 6; j++) {
	haha:
		key[j] = (rand() % 45) + 1;

		for (int k = 0; k < j; k++) {
			if (key[j] == key[k]) {
				key[j] = (rand() % 45) + 1;
				goto haha;
			}
		}
	}
}

void printPaper(Lottery paper) {
	for (int i = 0; i < 5; i++) {
		prt(paper.numbers[i]);
	}
}


int main() {
	srand(time(NULL));
	int l = 0;
	printf("���� ��ðڽ��ϱ�? : ");
	scanf_s("%d", &l);


	for (int m = 0; m < l; m++) {
		Lottery paper;

		for (int n = 0; n < 5; n++) {
			int key[6] = { 0,0,0,0,0,0 };	// ��÷�� ������ ��÷������ �迭
			check(key);
			sort(key);

			for (int i = 0; i < 6; i++) {
				paper.numbers[n][i] = key[i];
			}
		}
		printPaper(paper);
		printf("\n\n");
	}
}
