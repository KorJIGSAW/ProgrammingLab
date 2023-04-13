#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N_PIC 4 //무늬수
#define N_ONE_SET 13 //무늬별 장수
#define N_CARDS 54   //총 트럼프카드
#define N_PLAYERS 4  //플레이어 인원수
#define N_DEAL 6     //한명당 6장

int main() {
	int cards[N_CARDS] = { 0 }; //전체 카드를 1차원 Array에 저장, 1이면 이미 나눠준 카드.
	int player, card, deal;
	int type, no;
	const char* card_type[] = {"♥", "♣", "♠", "◆"};
	const char* card_no[] = { "A", "2","3","4","5","6","7","8","9","10","J","Q","K" };
	const char* joker = "JK";
	srand(time(NULL));
	for (int i = 0; i < N_PLAYERS; i++) {//각각의 학생에게
		printf("학생[%d] : ", i+1);
		for (int j = 0; j < N_DEAL; j++) { 
			//카드 6장 분배
			//이미 나눠준 카드인지 체크하면서, 나눠준 카드면 표시한다.
			//card 번호 0~N_CARDS로 card_type과 card_no, joker인지 구분해서 출력한다.
			do {
				card = rand() % N_CARDS;//모든 카드중 랜덤난수로 선택한다.
			} while (cards[card] == 1); //이미 나온 카드인지 체크단계
			cards[card] = 1; //뽑은 카드는 1로 기록한다.
			if (card >= N_PIC * N_ONE_SET) //조커인경우
				printf(" %s ", joker);
			else {
				type = card / N_ONE_SET;
				no = card % N_ONE_SET;
				printf("%s%s ", card_type[type], card_no[no]);
			}

		}
		printf("\n");
	}
}