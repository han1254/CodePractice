//
// Created by 12547 on 2021/7/27.
//

#include "sqlist.h"

//int reverse(SqList* L, int start, int end) {
//    if(L->length == 0) return 0;
//    for (int i = start; i <= (start + end) / 2; ++i) {
//        int temp = L->data[i];
//        L->data[i] = L->data[start + end - i];
//        L->data[start + end - i] = temp;
//    }
//    return 1;
//}
//int left_swift(SqList* L, int p) {
//    p = p % L->length;
//    reverse(L, 0, L->length - 1);
//    reverse(L, 0, L->length - p - 1);
//    reverse(L, L->length - p, L->length - 1);
//    return 1;
//}

int reverse(int L[], int len, int start, int end) {
    if(len == 0) return 0;
    for (int i = start; i <= (start + end) / 2; ++i) {
        int temp = L[i];
        L[i] = L[start + end - i];
        L[start + end - i] = temp;
    }
    return 1;
}
int left_swift(int L[], int len, int p) {
    p = p % len;
    reverse(L, len, 0, len - 1);
    reverse(L,len, 0, len - p - 1);
    reverse(L, len, len - p, len - 1);
    return 1;
}

int left_swift2(int L[], int len, int p) {
    p = p % len;
    reverse(L, len, 0, p - 1);
    reverse(L, len, p, len - 1);
    reverse(L, len, 0, len - 1);
    return 1;
}

int main() {
    int a[8] = {1, 3, 5, 7, 9, 2, 4, 6};

    printArray(a, 8);

    left_swift2(a, 8, 3);
    printArray(a, 8);
}