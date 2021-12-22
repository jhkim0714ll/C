#include <stdio.h>
#include <string.h>
#pragma warning(disable : 4996)

int main() {
	char v[1000];
	char v1[1000];
	int n, cnt = 0;
	int nn;
	scanf("%s", v);
	n = strlen(v);

	for (int i = 0; i < n; i++) {
		if(v[i] !> 48 && v[i] !< 58)
	}
	for (int i = 0; i < n; i++) {
		if (v[i] > 48 && v[i] < 58) {
			nn = v[i] - 48;
			for (int j = i - 1; j > i - nn - 1; j--) {
				v1[cnt] = v[j];
				printf("%c", v1[cnt]);
				cnt++;
			}
		}
	}
	return 0;
}