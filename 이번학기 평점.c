#include<stdio.h>
#pragma warning(disable : 4996)

int main(void) {
	int n;
	float sum = 0.0;
	float total = 0.0;
	char x = '1';
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		while (x != ' ')
			scanf("%c", &x);
		scanf("%c", &x);
		int mul = x - '0';
		total += mul;
		scanf("%c", &x);
		scanf("%c", &x);
		float score;

		int v = 4;
		if (x != 'F') {
			for (int i = 65; i < 68; i++) {
				if (x == i) score = v;
				v--;
			}
		}
		if (score != 0.0) {
			scanf("%c", &x);
			if (x == '+') score += 0.3;
			else if (x == '-') score -= 0.3;
		}
		sum += score * (float)mul;
	}
	printf("%.2f", sum / total);
	return 0;
}