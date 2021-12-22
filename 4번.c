#include <stdio.h>
#include <string.h>
#pragma warning(disable : 4996)

int main() {
    char h1[50];
    char h2[50];

    scanf("%[^\n]", h1);
    scanf("%[^\n]", h2);

    
    int a = strcmp(h1, h2);
    
    if (a == 0) {
        printf("%s", h1);
        printf("°°´Ù");
    }
    else if (a > 0) {
        printf("%s", h1);
    }
    else if (a < 0) {
        printf("%s", h2);
    }
    return 0;
}