#include <stdio.h>
#pragma warning(disable : 4996)

int main() {
	int i, j;
	int a[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	printf("���� �������迭\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("��� ���� �ٲ� ������ �迭\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", a[j][i]);
		}
		printf("\n");
	}
	return 0;
}