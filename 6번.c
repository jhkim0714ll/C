#include <stdio.h>
#pragma warning(disable : 4996)

int main(void) {
	int n;
	scanf("%d", &n);
	printf("%d - ", n);
	for (;;) {
		if (n % 2 == 1) {
			n = n * 3 + 1;
			printf("%d - ", n);
		}
		if (n % 2 == 0) {
			n /= 2;
			printf("%d - ", n);
		}
		if (n == 1)break;
	}
	printf("%d",n);
}