//
// Created by 12547 on 2021/7/29.
//
#include "stdio.h"
#define INT_MAX 0x7fffffff

int get_dis(int a, int b) {
    return a > b ? a - b : b - a;
}

int is_min(int a, int b, int c) {
    if(a <= b && a <= c) return 1;
    return 0;
}
int min_dis(int S1[], int len1, int S2[], int len2, int S3[], int len3) {
    int t1 = 0, t2 = 0, t3 = 0;
    int min_dis = INT_MAX;
    int i = 0, j = 0, k = 0;
    while(i < len1 && j < len2 && k < len3 && min_dis > 0) {
        int d = get_dis(S1[i], S2[j]) + get_dis(S1[i], S3[k]) + get_dis(S2[j], S3[k]);
        if(d < min_dis) {
            min_dis = d;
            t1 = i;
            t2 = j;
            t3 = k;
        }
        if(is_min(S1[i], S2[j], S3[k])) i++;
        else if(is_min(S2[j], S1[i], S3[k])) j++;
        else k++;
    }
    printf("three points is S1[%d]=%d, S2[%d]=%d, S3[%d]=%d\n", t1, S1[t1], t2, S2[t2], t3, S3[t3]);
    return min_dis;
}

/**
 * 大力出奇迹的暴力解法！！！！
 * @param S1
 * @param len1
 * @param S2
 * @param len2
 * @param S3
 * @param len3
 * @return
 */
int min_dis2(int S1[], int len1, int S2[], int len2, int S3[], int len3) {
    int min = INT_MAX;
    int t1 = 0, t2 = 0, t3 = 0;
    for (int i = 0; i < len1; ++i) {
        for (int j = 0; j < len2; ++j) {
            for (int k = 0; k < len3; ++k) {
                int temp_dis = get_dis(S1[i], S2[j]) + get_dis(S1[i], S3[k]) + get_dis(S2[j], S3[k]);
//                if(temp_dis < min) min = temp_dis;
                if(temp_dis < min) {
                    min = temp_dis;
                    t1 = i;
                    t2 = j;
                    t3 = k;
                }
            }
        }
    }
    printf("three points is S1[%d]=%d, S2[%d]=%d, S3[%d]=%d\n", t1, S1[t1], t2, S2[t2], t3, S3[t3]);
    return min;
}

int main() {
    int S1[] = {-1, 0, 9};
    int S2[] = {-25, -10, 10, 11};
    int S3[] = {2, 9, 17, 30, 41};
    printf("%d\n", min_dis(S1, 3, S2, 4, S3, 4));
    printf("%d\n", min_dis2(S1, 3, S2, 4, S3, 4));
}
