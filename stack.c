#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)
#define SIZE 5
int stack[SIZE];
void push(int);//���ÿ� ������ �� �� ����
void pop();//���ÿ��� ������ �� �� ����/����
void display();
int top = -1;

void  menu() {
	printf("\n..............................................\n");
	printf("1�� ���ÿ� ����(push)    2�� ���ؿ��� ����(pop)\n");
	printf("3�� ���� ����(display)   4�� ���α׷� ����(exit)\n");
	printf("\n----------------------------------------------\n");
}

int main() {
	int val, n;
	printf("      ************���� ���� �޴�************");
	while (1) {
		menu();
		printf("�޴��� �����ϼ��� : ");
		scanf("%d", &n);
		switch (n)
		{
		case 1:
			printf("���ÿ� ������ ���� : "); scanf("%d", &n);
			push(n);
			break;
		case 2:
			pop();
			break;
		case 3:
			display();
			break;
		case 4:
			return 0;
			break;
		default:
			printf("�ٽ� �Է��ϼ���");

		}
	}
}

void push(int n) {
	if (top == SIZE - 1)
		printf("*******������ ���� ��********");
	else stack[++top] = n;
}
void pop() {//������ ������� ���� ������ ������̶�� ǥ��
	if (top == -1)
		printf("������ �������");
	else printf("%d�� ������\n", stack[top--]);
}
void display() {
	printf("\n----------\n");
	for (int i = 0; i <= top; i++){
		printf("%4d", stack[i]);
	}
	printf("\n----------\n");
}
