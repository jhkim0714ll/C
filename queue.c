#include <stdio.h>
#pragma warning(disable : 4996)

int queue[5];
void menuf() {
	printf("\n1.ť�� ���� 2. ť���� ����\n");
	pritnf("3. ���� ���� 4. ����");
}

void Enqueue(int* back, int item) {//ť���� ������ ����
	if (*back == 4) {
		printf("ť�� ������\n");
		return;
	}
	queue[++ * back] = item;
}

void Dequeue(int* front, int back) {//ť���� ������ ����
	if (*front == back) {
		//ť�� �����
		return -1; 
	}
	return queue[++ * front];
}
