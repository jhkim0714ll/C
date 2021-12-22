#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable : 4996)

int main()
{
	char a[26] = { 'Q','W','E','R','T','Y','U','I','O','P','A','S','D','F','G','H','J','K','L','Z','X','C','V','B','N','M' };
	char per[100];
	scanf("%s", per);
	for (int i = 0; per[i] != NULL;i++) {
		if ((per[i] - 65 <= 0) || (per[i] - 65 >= 26))
			printf("%c", a[i]);
		else
			printf("%c", a[per[i] - 65]);
	}
}