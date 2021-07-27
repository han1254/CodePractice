//
// Created by 12547 on 2021/7/27.
//

#include "sqlist.h"

int reverse(SqList* L, int start, int end) {
    if(L->length == 0) return 0;
    int temp;
    for (int i = start; i <= (start + end) / 2; ++i) {
        temp = L->data[i];
        L->data[i] = L->data[start + end - i];
        L->data[start + end - i] = temp;
    }
    return 1;
}

int reverse_a_b(SqList* L, int m, int n) {
    if(m + n != L->length) return 0;
    reverse(L, 0, L->length - 1);
    reverse(L, 0, n - 1);
    reverse(L, n, L->length - 1);
    return 1;
}

int main() {
    int a[8] = {1, 3, 5, 7, 9, 2, 4, 6};
    SqList list;
    createList(&list, a, 8);
    printList(list);
    reverse_a_b(&list, 5, 3);
    printList(list);

}