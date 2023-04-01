#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// ����Ʈ�� �����ϴ� ��带 ������ ����ü
typedef struct {
	int data;
	Node* next;
} Node;

// ���� ����Ʈ�� ��Ÿ���� ����ü
typedef struct {
	Node* first_node;	// ���� ����Ʈ�� ù ����� �ּ�
	int size;			// ���� ����Ʈ�� ��� ����� ����
} LinkedList;



/* Level 1.
 * ������ �����͸� ���޹޾�, �� ���� ��� ��带 ������ �ּҸ� ��ȯ�Ѵ�.
 */
Node* newNode(int dat) {
	LinkedList first_node = dat;
}


/* Level 2.
 * ���޹��� list�� ��� ������ �����͸� ���
 * list�� ����ִ� ���, "����Ʈ�� ����ֽ��ϴ�." �� ����Ѵ�.
 * ex) printList(myList);	=> "1 2 3 4 5\n"
 */
void printList(LinkedList* list) {
	/* todo */
}


/* Level 3.
 * list�� n��° ��ġ�� �־��� ��带 �����ϱ�
 * n�� list�� size���� ū ��� ������ ��ġ�� �����ϰ�, ��� �޽��� ���
 * ex) insertNode(myList, 100, newNode(3));		=> "warning : Index 100 out of bounds. Inserted at index 1"
 */
void insertNode(LinkedList* list, int n, Node* node) {
	/* todo */
}


/* Level 4.
 * list�� n��°�� ��ġ�� ��带 �����ϱ�
 * n�� list�� size���� ũ�ų� ���� ���, ������ �������� �ʰ� ���� �޽��� ���
 * ex) deleteNode(myList, 100);		=> "Error : Index 100 out of bounds. Deletion has been cancelled."
 */
void deleteNode(LinkedList* list, int n) {
	/* todo */
}


/* Bonus Level.
 * �־��� list�� "������" �����ϱ�
 */
void deleteList(LinkedList* list) {
	/* todo */
}


int main() {

	LinkedList* myList;
	printf("����Ʈ ������ : ");
	printList(myList);

	insertNode(myList, 0, newNode(1));	// {0}
	insertNode(myList, 1, newNode(5));	// {0, 5}
	insertNode(myList, 1, newNode(-3));	// {0, -3, 5}

	printf("����Ʈ 1�� ��� : ");
	printList(myList);

	insertNode(myList, 0, newNode(6));	// {6, 0, -3, 5}
	insertNode(myList, 9, newNode(9));	// {6, 0, -3, 5, 9}
	deleteNode(myList, 3);				// {6, 0, -3, 9}
	deleteNode(myList, 8);				// Error message

	printf("����Ʈ 2�� ��� : ");
	printList(myList);

	deleteList(myList);
	return 0;
}