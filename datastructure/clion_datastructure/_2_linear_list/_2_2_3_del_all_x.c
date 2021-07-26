//
// Created by 12547 on 2021/7/25.
//
#include "sqlist.h"
int del_all_x(SqList* L, int x);
int del_all_x2(SqList* L, int x);
int del_all_x3(SqList *L, int x);
int main() {
    int a[8] = {1, 6, 8, 2, 7, 4, 2, 2};
    SqList list;
    createList(&list, a, 8);
    printList(list);

    del_all_x3(&list, 2);
    printList(list);
}

int del_all_x(SqList* L, int x) {
    if(L->length == 0) return 0;
    int k = 0;
    for (int i = 0; i < L->length; ++i) {
        if (L->data[i] != x)
            L->data[k++] = L->data[i];
    }
    L->length = k;
    return 1;
}

int del_all_x2(SqList* L, int x) {
    if(L->length == 0) return 0;
    int i = 0;
    int k = 0;
    while(i < L->length) {
        if (L->data[i] == x)
            k++;
        else
            L->data[i - k] = L->data[i];
        i++;
    }
    L->length -= k;
    return 1;
}

int del_all_x3(SqList *L, int x) {
    int h = 0;
    int t = L->length - 1;
    while(h < t) {
        while(h < t && L->data[h] != x)
            h++;
        while(t > h && L->data[t] == x)
            t--;
        int temp = L->data[h];
        L->data[h] = L->data[t];
        L->data[t] = temp;
    }
    L->length = h;
    return 1;
}