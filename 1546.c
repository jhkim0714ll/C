////
////  1546.c
////  baekjoon
////
////  Created by 김준호 on 2022/03/30.
////
//
//#include "1546.h"
//
//int main()
//{
//    int n;
//    int max = 0;
//    double avg = 0;
//
//    scanf("%d", &n);
//
//    int score[n];
//
//    for (int i = 0; i < n; i++) {
//        scanf("%d", &score[i]);
//        if (max < score[i]) max = score[i];
//    }
//
//    for (int i = 0; i < n; i++) {
//        avg += (double)score[i] / max * 100;
//    }
//
//    printf("%f\n", avg / n);
//
//    return 0;
//}
