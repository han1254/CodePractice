//
// Created by 12547 on 2021/7/27.
//
#include "sqlist.h"

int find_insert(SqList* L, int x) {

    int left = 0, right = L->length - 1;

    while(left <= right) {
        int mid = (left + right) / 2;
        if(L->data[mid] == x) {
            if(mid < L->length - 1) {
                int temp = L->data[mid];
                L->data[mid] = L->data[mid + 1];
                L->data[mid + 1] = temp;
                return 1;
            } else return 0;
        } else if(L->data[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    // 如果到最后一步，left == right，两个指针重合，但是没有找到目标数据
    // 那么：
    // 假设重合位置的数据小于x，left++，重合位置的后一位应该就是插入位置，而left++后，left指针正好指向了插入位置
    // 假设重合位置的数据大于x，right--，如果重合位置大于x，这个位置就是插入位置，left不变，则left依然指向插入位置
    // 可以得出这么一个结论，如果数据中没有目的元素x，那么最终left指针指向的是第一个大于x的位置，right指针指向的是第一个小于x的位置
    // 如果你想要插入x，则需要在left处插入即可
    int i = L->length;
    while(i > left) {
        L->data[i] = L->data[i - 1];
        i--;
    }
    L->data[left] = x;
    L->length++;
    return 1;
}

int main() {
    int a[5] = {1, 3, 5, 7, 9};
    SqList list;
    createList(&list, a, 5);
    printList(list);
    find_insert(&list, 5);
    printList(list);

    printf("-------------------\n");
    int b[5] = {1, 3, 5, 7, 9};
    SqList list2;
    createList(&list2, b, 5);
    printList(list2);
    find_insert(&list2, 10);
    printList(list2);
}