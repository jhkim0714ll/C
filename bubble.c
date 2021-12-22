#pragma warning(disable : 4996)
#include <stdio.h>

void bubble1(int a[], int n) {
	for (int i = 0; i < n - 1; i++)
	{
		/*for (int j = 0; j < n - i; j++)
		{
			if (a[j - 1] > a[j]) {
				int t = a[j - 1];
				a[j - 1] = a[j];
				a[j] = t;
			}
		}*/
		for (int j = 0; j < n - i - 1; j++) {
			if (a[j] > a[j + 1]) {
				int t = a[j];
				a[j + 1] = a[j];
				a[j] = t;
			}
		}
	}
}

int main()
{
	int a[5] = { 5,2,3,4,1 };
	bubble1(a, 5);
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}