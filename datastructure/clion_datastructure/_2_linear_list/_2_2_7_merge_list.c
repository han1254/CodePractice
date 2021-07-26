//
// Created by 12547 on 2021/7/26.
//

#include "sqlist.h"
int merge_list(SqList A, SqList B, SqList* C) {
    int i = 0, j = 0;
    int k = 0;
    C->length = 0;
    while(i < A.length && j < B.length) {
        if(A.data[i] < B.data[j]) {
            C->data[k++] = A.data[i++];
        } else {
            C->data[k++] = B.data[j++];
        }
        C->length++;
    }
    while(i < A.length) {
        C->data[k++] = A.data[i++];
        C->length++;
    }
    while(j < B.length) {
        C->data[k++] = B.data[j++];
        C->length++;
    }
    return 1;
}

int main() {
    int a[9] = {1, 3, 7, 12, 14, 24, 35, 66, 100};
    int b[4] = {2, 4, 8, 10};
    SqList A, B, C;
    createList(&A, a, 9);
    createList(&B, b, 4);
    merge_list(A, B, &C);
    printList(C);
}