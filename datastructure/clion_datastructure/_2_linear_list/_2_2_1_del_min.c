//
// Created by 12547 on 2021/7/25.
//

#include "sqlist.h"

int del_min(SqList* L, int* res);

int main() {
    int a[5] = {1, 6, 8, 2, 7};
    SqList list;
    createList(&list, a, 5);
    printList(list);

    int res;
    del_min(&list, &res);

    printList(list);
}

int del_min(SqList* L, int* res) {
    if(L->length == 0) return 0;
    int min = L->data[0];
    int min_index = 0;
    for (int i = 1; i < L->length; ++i) {
        if (L->data[i] < min) {
            min = L->data[i];
            min_index = i;
        }
    }
    *res = L->data[min_index];
    L->data[min_index] = L->data[L->length - 1];
    L->length--;
    return 1;
}