#include<stdio.h>
#pragma warning(disable : 4996)

int main(void) { 
	int a, b, c, x, y;
	int res = 0;

	scanf("%d %d %d %d %d", &a, &b, &c, &x, &y);

	if (a + b > c * 2) {
		while((x > 0) && (y > 0)) { 
			x--;
			y--;
			res += c * 2;
		}

		if (x > 0) {
			if(a > c * 2) { 
				res += (x * c * 2);
			}
			else {
				res += x * a;
			}
		}

		else if (y > 0) {
			if (b > c * 2) {
				res += (y * c * 2);
			}
			else {
				res += b * y;
			}
		}
	}
	else {
		res += x * a + y * b;
	}
	printf("%d", res);
	return 0;
}
