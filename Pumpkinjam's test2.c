#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// 리스트를 구성하는 노드를 정의한 구조체
typedef struct {
	int data;
	Node* next;
} Node;

// 연결 리스트를 나타내는 구조체
typedef struct {
	Node* first_node;	// 연결 리스트의 첫 노드의 주소
	int size;			// 연결 리스트에 담긴 노드의 갯수
} LinkedList;



/* Level 1.
 * 정수형 데이터를 전달받아, 그 수를 담는 노드를 생성해 주소를 반환한다.
 */
Node* newNode(int dat) {
	LinkedList first_node = dat;
}


/* Level 2.
 * 전달받은 list의 모든 노드들의 데이터를 출력
 * list가 비어있는 경우, "리스트가 비어있습니다." 를 출력한다.
 * ex) printList(myList);	=> "1 2 3 4 5\n"
 */
void printList(LinkedList* list) {
	/* todo */
}


/* Level 3.
 * list의 n번째 위치에 주어진 노드를 삽입하기
 * n이 list의 size보다 큰 경우 마지막 위치에 삽입하고, 경고 메시지 출력
 * ex) insertNode(myList, 100, newNode(3));		=> "warning : Index 100 out of bounds. Inserted at index 1"
 */
void insertNode(LinkedList* list, int n, Node* node) {
	/* todo */
}


/* Level 4.
 * list의 n번째에 위치한 노드를 삭제하기
 * n이 list의 size보다 크거나 같은 경우, 삭제를 수행하지 않고 에러 메시지 출력
 * ex) deleteNode(myList, 100);		=> "Error : Index 100 out of bounds. Deletion has been cancelled."
 */
void deleteNode(LinkedList* list, int n) {
	/* todo */
}


/* Bonus Level.
 * 주어진 list를 "깨끗이" 제거하기
 */
void deleteList(LinkedList* list) {
	/* todo */
}


int main() {

	LinkedList* myList;
	printf("리스트 생성됨 : ");
	printList(myList);

	insertNode(myList, 0, newNode(1));	// {0}
	insertNode(myList, 1, newNode(5));	// {0, 5}
	insertNode(myList, 1, newNode(-3));	// {0, -3, 5}

	printf("리스트 1차 출력 : ");
	printList(myList);

	insertNode(myList, 0, newNode(6));	// {6, 0, -3, 5}
	insertNode(myList, 9, newNode(9));	// {6, 0, -3, 5, 9}
	deleteNode(myList, 3);				// {6, 0, -3, 9}
	deleteNode(myList, 8);				// Error message

	printf("리스트 2차 출력 : ");
	printList(myList);

	deleteList(myList);
	return 0;
}