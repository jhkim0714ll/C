#include <stdio.h>
#pragma warning(disable : 4996)

int r = 1;
void geometric() {
	r *= 2;
	printf("%d ", r);
}


int main() {
	int n, i;
	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		geometric();
	}
	return 0;
}