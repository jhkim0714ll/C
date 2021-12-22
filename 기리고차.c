#include <stdio.h>
#pragma warning(disable : 4996)

int main() {
	double book, jong;
	double reach = 0;
	scanf("%lf %lf", &book, &jong);
	for (;;) {
		if (jong - 1 > 0) {
			jong--;
			reach+=0.5;
		}
		if (jong - 2 > 0) {
			jong -= 2;
			reach++;
		}
		if (book - 1 > 0) {
			book--;
			reach += 5;
		}
		if (book - 2 > 0) {
			book -= 2;
			reach += 10;
		}
		if (jong < 0 && book < 0) break;
		printf("%.1f\n", reach);
	}
	return 0;
}