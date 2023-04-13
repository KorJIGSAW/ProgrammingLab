#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N_PIC 4 //���̼�
#define N_ONE_SET 13 //���̺� ���
#define N_CARDS 54   //�� Ʈ����ī��
#define N_PLAYERS 4  //�÷��̾� �ο���
#define N_DEAL 6     //�Ѹ�� 6��

int main() {
	int cards[N_CARDS] = { 0 }; //��ü ī�带 1���� Array�� ����, 1�̸� �̹� ������ ī��.
	int player, card, deal;
	int type, no;
	const char* card_type[] = {"��", "��", "��", "��"};
	const char* card_no[] = { "A", "2","3","4","5","6","7","8","9","10","J","Q","K" };
	const char* joker = "JK";
	srand(time(NULL));
	for (int i = 0; i < N_PLAYERS; i++) {//������ �л�����
		printf("�л�[%d] : ", i+1);
		for (int j = 0; j < N_DEAL; j++) { 
			//ī�� 6�� �й�
			//�̹� ������ ī������ üũ�ϸ鼭, ������ ī��� ǥ���Ѵ�.
			//card ��ȣ 0~N_CARDS�� card_type�� card_no, joker���� �����ؼ� ����Ѵ�.
			do {
				card = rand() % N_CARDS;//��� ī���� ���������� �����Ѵ�.
			} while (cards[card] == 1); //�̹� ���� ī������ üũ�ܰ�
			cards[card] = 1; //���� ī��� 1�� ����Ѵ�.
			if (card >= N_PIC * N_ONE_SET) //��Ŀ�ΰ��
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