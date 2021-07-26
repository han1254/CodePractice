//
// Created by 12547 on 2021/7/26.
//

#include "sqlist.h"

/**
 * 删除有序数组中的重复元素
 * @param L 有序顺序表
 * @return
 */
int del_dup(SqList* L) {
    int i = 1;
    int k = 0;
    for (; i < L->length; i++)
        if(L->data[i] != L->data[k])
            L->data[++k] = L->data[i];
    L->length = k + 1;
    return 1;
}

int main() {
    int a[9] = {1, 3, 7, 7, 12, 14, 14, 24, 24};
    SqList list;
    createList(&list, a, 9);
    printList(list);

    del_dup(&list);
    printList(list);
}