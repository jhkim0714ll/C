//
//  15596.c
//  baekjoon
//
//  Created by 김준호 on 2022/04/04.
//

#include "15596.h"
#include "stdio.h"

int main(){
    int n;
    int a[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    sum(a, n);
    return 0;
}

long long sum(int *a,int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    return sum;
}
