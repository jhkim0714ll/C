#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)

int S[100] = { 5,10,13,25,26,31,34,36,39,40,45,65,79,100 };
int n, k;//k�� ���� ã�� ����
int birnarysearch(int s, int e) {
    while (s <= e) {
        int m = (s + e) / 2;//m�� middel
        if (S[m] == k)
            return m;//ã�� �迭�� �ε���(��ġ)
        if (S[m] > k)
            e = m - 1;
        else
            s = m + 1;
    }
    return -1;//�ᱹ �� ã��
}

int main(void) {
    int a;
    printf("ã�� ���� �Է�");
    scanf("%d", &a);
    printf("%d��°���� �߰�", birnarysearch(0, 13));
}