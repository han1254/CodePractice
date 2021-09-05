//
// Created by 12547 on 2021/7/27.
//

#include "sqlist.h"

int middle_number(const int A[], const int B[], int len) {
    int temp;
    int i = 0, j = 0;
    for (int k = 0; k < len; ++k) {
        if(A[i] <= B[j]) {
            temp = A[i++];
        } else {
            temp = B[j++];
        }
    }
    printf("\n");
    return temp;
}


int middle_number2(const int A[], const int B[], int len) {
    int a_left = 0, a_right = len - 1;
    int b_left = 0, b_right = len - 1;
    while(a_left != a_right || b_left != b_right) {
        int m1 = (a_left + a_right) / 2;
        int m2 = (b_left + b_right) / 2;
        int size = a_right - a_left + 1;
        if(A[m1] == B[m1]) return A[m1];
        else if(A[m1] < B[m2]) {
            if(size % 2 == 1) {//若元素个数为奇数
                a_left = m1;//舍弃中间点之前的部分，保留中间点
                b_right = m2;//舍弃中间点之后的部分，保留中间点 m2 - 1是不对的
            } else {
                a_left = m1 + 1;//舍弃中间点以及中间点之前的部分
                b_right = m2;//舍弃中间点之后的部分，保留中间点
            }

        } else {
            if(A[m1] > B[m2]) {
                if(size % 2 == 1) {
                    a_right = m1;
                    b_left = m2;
                } else {
                    a_right = m1;
                    b_left = m2 + 1;
                }
            }
        }
    }
    return A[a_left] < B[b_left] ? A[a_left] : B[b_left];
}

int main() {
    int A[5] = {1,3,5};
    int B[5] = {2,4,6};
    printf("middle number=%d\n", middle_number(A, B, 3));
    printf("middle number=%d\n", middle_number2(A, B, 3));
}