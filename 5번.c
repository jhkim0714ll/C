#include <stdio.h>
#pragma warning(disable : 4996)

char cat(char h1[], char h2[]) {
	int cnt = 0;
	for (int i = 0; i < 20; i++) {
		if (*(h1 + i) != NULL) {
			cnt++;
		} 
		else {
			break;
		}
	}
	*(h1 + cnt) = ' ';
	for (int i = 0; *(h1 + i) != NULL; i++) {
		*(h1 + cnt + i) = *(h2 + i);
	}
}

int main() {
	char h1[50];
	char h2[50];
	gets(h1);
	gets(h2);
	cat(h1, h2);
	printf("%s", h1);
}