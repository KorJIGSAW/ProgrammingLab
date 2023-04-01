// 프로그래밍랩 5주
// Lab5-2 주사위 
// (1) n번 던져서 각각의 수의 발생 확률 계산해 보기
// (2) 확률이 조작된 주사위 
//      1~5 = 10%, 6 = 50% 즉, 6이 자주 나오는 주사위
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    printf("2071360 이종범\n");
    int i, r, ntest, dice;
    int count[6] = { 0 }; // 1 ~ 6 count 를 보관
    srand(time(NULL)); // 난수 초기화
    printf("주사위 횟수 : ");
    scanf("%d", &ntest);
    ntest = 10000;
    printf("정상적인 주사위\n");
    for (i = 0; i < ntest; i++) {
        dice = rand() % 6; //0~5->주사위 1~6
        count[dice]++;
    }
    for (i = 0; i < 6; i++) {
        printf("%d : %d <%.2lf%%>\n", i+1, count[i], count[i]*100./ntest);
        // 화면과 같이 출력
    }
    printf("\n");

    // 이상한 주사위
    printf("\n이상한 주사위 6이 50%% 확률\n");
    for (i = 0; i < 6; i++)
        count[i] = 0;
    for (i = 0; i < ntest; i++) {
        // 분포를 0~99로 구하고 0~9, 10~19, 20~29, 30~39, 40~49, 50~99 를
        // 1, 2, 3, 4, 5, 6 으로 맵핑
        // 발생 회수 증가
        if (rand() % 100 >= 50)//6이 나올 확률을 50프로로 올리고
            dice = 5;
        else {//나머지 1~5 값들이 나오게끔한다
            dice = rand() % 5;
        }
        count[dice]++;
    }
    for (i = 0; i < 6; i++) {
        // 화면과 같이 출력
        printf("%d : %4d (%.2lf%%)\n", i + 1, count[i], count[i] * 100. / ntest);
    }
}