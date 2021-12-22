#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)

int main() {
	int a[10] = { 95, 67, 84, 73, 72 , 65, 27, 28, 83, 75 };
	int per[10] = { 0 };
	for (int i = 0; i < 10; i++) {
		per[a[i] / 10]++;
	}
	for (int i = 0; i < 10; i++) {
		printf("%d : %d", i * 10, per[i]);
		for (int i = 0; i < per[i]; i++) {
			printf("*");
		}
		printf("\n");
	}
}