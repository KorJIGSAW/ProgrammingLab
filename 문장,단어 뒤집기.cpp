#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char buf[128]; //�Է� buffer
	char* p, * q, * s; //���ڿ� pointer����
	fgets(buf, 127, stdin);
	//gets(buf);
	// (1) ��ü�� ����� ���
	int len = strlen(buf);
	p = buf;
	//p += len-1;
	while(*p) {
		p++;
	}
	p--;
	// p�� buf�� �� ������ �̵��ߴٰ�
	// ������ ���鼭 ���
	printf("(1) : ");
	while (p >= buf) {
		putchar(*p);
		p--;
	}
	printf("\n");
	// (2) �ܾ� ������ ����� ���
	// p�� �ܾ��� ��������
	// q�� �ܾ �����ϴ� ��ĭ�� ��ġ
	// q-1���� p���� ����ϸ� �ܾ ��������.
	// p�� ���ο� �ܾ��� ���� ��ġ�� �̵�
	p = q = buf;
	printf("(2) : ");
	while (*p) {
		while (*q != ' ' && *q != '\0')
			q++;
		for (s = q - 1; s >= p; s--)
			putchar(*s);
		if (*q != '\0')
			putchar(*q);
		else
			break;
		p = (q + 1);
		q = p;
	}
	printf("\n");
}