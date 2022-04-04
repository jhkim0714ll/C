#include "8958.h"
#include <stdio.h>
#include <string.h>

int main(){
    int n;
    int cnt=0;
    char ox[100];
    int hap[100]={0};
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s",ox);
        for(int j=0;j<strlen(ox);j++){
            if(ox[j]=='O'){
                cnt++;
            }else cnt = 0;

            hap[i] += cnt;
            printf("cnt=%d j=%d hap[%d]=%d\n",cnt,j,i,hap[i]);
        }
        printf("%d\n",hap[i]);
        cnt=0;
    }
    return 0;
}

