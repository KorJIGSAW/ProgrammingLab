// ���α׷��ַ� 6��
// Lab6-3 ����ü ����� �� ���
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h> // �̸� ã�� ���� �ʿ�
#include <windows.h>
typedef struct student {
	char name[20];
	int year;
	char no[20];
	char phone[20];
} Student;

void PrintStudent(Student* s)
{
	printf("\n�̸� : %s\n", s->name);
	printf("�г� : %d\n", s->year);
	printf("�й� : %s\n", s->no);
	printf("��ȭ : %s\n", s->phone);
} 
void InputStudent(Student* s)
{
	printf("�̸� : ");
	scanf("%s", &s->name);
	printf("�г� : ");
	scanf("%d", &s->year);
	printf("�й� : ");
	scanf("%s", &s->no);
	printf("��ȭ : ");
	scanf("%s", &s->phone);
}

void main(void)
{
	int i, count, found;
	char name[20]; // ã�� �̸� �Է� ��
	Student* data;
	printf("��� : ");
	scanf("%d", &count);
	data = (Student*)malloc(sizeof(student) * count); // �ϼ��Ұ�
	for (i = 0; i < count; i++) {
		// �Է� �κ� �ϼ�
		printf("\n�ڷ��ȣ %d �Է�\n", i + 1);
		InputStudent(data + i); // �ϼ��Ұ�
	}
	for (i = 0; i < count; i++) { // ���
		PrintStudent(data + i);
	}


	printf("\nã�� �̸�: ");
	scanf("%s", name); // �̸� �Է�
	for (i = 0; i < count; i++) { // �ڷ� ã��
		// ���� �̸��� ã�Ƽ� ������  break
		if (strcmp(name,(data+i)->name) == 0) // ã���� break
			break;
	}
	if (i < count) // ã�Ҵ�.
		PrintStudent(data+i);
	else
		printf("ã�� �����Ͱ� �����ϴ�.\n");
	Sleep(10000);
}