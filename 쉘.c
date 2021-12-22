#include <stdio.h>
#pragma warning(disable: 4996)

void shellsort(int arr[], int n) {
	int i, j, gap, tmp;
	for (gap = n / 2; gap > 0; gap /= 2) {//gap = gap / 2;
		if (!(gap % 2)) gap++;//짝수면 홀수로
		for (i = gap; i < n; i++) {//삽입정렬 응용
			tmp = arr[i];
			j;
			for (j = i; j >= gap && arr[j - gap] > tmp; j -= gap)
				arr[j] = arr[j - gap];
			arr[j] = tmp;
			printf("%4d", arr[j]);
		}
		printf("\n");
	}
}

int main() {//10개 데이터를 쉘 정렬하는 법
	int arr[] = { 1,9,15,12,3,7,5,8,11,2 };
	int n = sizeof(arr) / sizeof(int);

	printf("%d개 데이터 정렬\n",n);
	shellsort(arr, n);
	for (int i = 0; i < n; i++) {
		printf("%4d", arr[i]);
	}
	printf("\n");
}