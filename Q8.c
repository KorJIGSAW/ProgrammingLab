// Lab01-8 배열 처리 함수
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void print_array(int* arr, int n){
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

double compute_avg(int* arr, int n){
	double sum = 0;
	for (int i = 0; i < 10; i++) {
		sum += arr[i];
	}
	double avg = sum / n;
	return avg;
}

int find_max(int* arr, int n){
	int max = 0;
	for (int i = 0; i < 10; i++) {
		if (i == 9) {
			break;
		}
		else if (arr[i] > arr[i + 1]){
			max = arr[i];
		}
		else {
			max = arr[i + 1];
		}
	}
	return max;
}

int find_min(int* arr, int n){
	int min = 0;
	for (int i = 0; i < 10; i++) {
		if (i == 9) {
			break;
		}
		else if (arr[i] < arr[i + 1]) {
			min = arr[i];
		}
		else {
			min = arr[i + 1];
		}
	}
	return min;
}

void main() {
	int arr[10] = { 12, 30, 5, 20, 44, 3, 100, 88, 9, 101 };

	print_array(arr, 10);
	printf("평균 = %lf\n", compute_avg(arr, 10));
	printf("최대 = %d\n", find_max(arr, 10));
	printf("최소 = %d\n", find_min(arr, 10));
}