#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)

int S[100] = { 5,10,13,25,26,31,34,36,39,40,45,65,79,100 };
int n, k;//k는 내가 찾을 숫자
int birnarysearch(int s, int e) {
    while (s <= e) {
        int m = (s + e) / 2;//m은 middel
        if (S[m] == k)
            return m;//찾은 배열의 인덱스(위치)
        if (S[m] > k)
            e = m - 1;
        else
            s = m + 1;
    }
    return -1;//결국 못 찾음
}

int main(void) {
    int a;
    printf("찾을 숫자 입력");
    scanf("%d", &a);
    printf("%d번째에서 발견", birnarysearch(0, 13));
}