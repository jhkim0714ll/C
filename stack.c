#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)
#define SIZE 5
int stack[SIZE];
void push(int);//스택에 데이터 한 개 삽입
void pop();//스택에서 데이터 한 개 빼기/삭제
void display();
int top = -1;

void  menu() {
	printf("\n..............................................\n");
	printf("1번 스택에 삽입(push)    2번 스텍에서 삭제(pop)\n");
	printf("3번 내용 보기(display)   4번 프로그램 종료(exit)\n");
	printf("\n----------------------------------------------\n");
}

int main() {
	int val, n;
	printf("      ************스택 구현 메뉴************");
	while (1) {
		menu();
		printf("메뉴를 선택하세요 : ");
		scanf("%d", &n);
		switch (n)
		{
		case 1:
			printf("스택에 삽입할 숫자 : "); scanf("%d", &n);
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
			printf("다시 입력하세요");

		}
	}
}

void push(int n) {
	if (top == SIZE - 1)
		printf("*******스택이 가득 참********");
	else stack[++top] = n;
}
void pop() {//스택이 비어있을 때는 스택이 비었음이라고 표시
	if (top == -1)
		printf("스택이 비어있음");
	else printf("%d가 삭제됨\n", stack[top--]);
}
void display() {
	printf("\n----------\n");
	for (int i = 0; i <= top; i++){
		printf("%4d", stack[i]);
	}
	printf("\n----------\n");
}
