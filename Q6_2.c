// Lab2-6
// 파일을 이용한 배열 입력 후 총점, 최대, 최소값 출력
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

void main()
{
	int i, j, T, K, sum, min, max;
	int* data;
	scanf("%d", &T); // 테스트 케이스의 수 3

	for (i = 0; i < T; i++) {
		// 데이타 갯수 K 를 입력을 받고
		scanf("%d", &K);

		// malloc()으로 data[] 공간 확보
		data = (int*)malloc(K * sizeof(int));

		// for j = 0 ~ K-1 까지
			// data[j] 입력
			// sum 누적
		for (j = 0; j < K; j++) {
			scanf("%d", data+j); //data+j --> &(data[j]) 배열의 특성 : 첫항의 주소 0x00라 가정시 두번째항의 주소는 0x04다.
		}

		// max, min 을 찾는다
		max = data[0];
		min = data[0];
		sum = 0;
		for (j = 1; j < K; j++) {
			max = max > data[j] ? max : data[j];
			min = min < data[j] ? min : data[j];
			sum += data[j];
		}
		sum += data[0];

		// sum, max, min 을 출력한다.
		
		printf("%d %d %d\n", sum, max, min);
		// free()로 data 공간 반환
		free(data);
	}
	Sleep(10000); // 10초간 정지
}