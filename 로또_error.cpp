#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
    int numbers[6];
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
    for (int i = 0; i < 6; i++) {
        if (i == 0)
        {
            printf("[%02d] : ", i);
        }
        printf("%2d ", key[i]);
    }
    printf("\n");
}

int main() {
    printf("2071360 이종범\n");
    srand(time(NULL));
    int l = 0;
    scanf("%d", &l);
    int key[6];

    if (l == 0) {
        for (int i = 0; i < 6; i++) {
            key[i] = rand() % 45 + 1;
            sort(key);
            prt(key);
        }

    }
    for (int m = 0; m < l; m++) {
        Lottery paper;
        key[6] = { 0, };    // 추첨된 복권의 당첨숫자의 배열
        if (l > 0) {
            for (int i = 0; i < l; i++) {
                scanf("%d", &key[i]);
            }
        }
        else {
            for (int j = 0; j < 6; j++) {
                key[j] = (rand() % 45) + 1;
                for (int k = 0; k < j; k++) {
                    if (key[j] == key[k]) {
                        j--;
                        break;
                    }
                }
            }
        }
        sort(key);

        for (int i = 0; i < 6; i++) {
            paper.numbers[i] = key[i];
        }
        prt(paper.numbers);
    }

    return 0;
}