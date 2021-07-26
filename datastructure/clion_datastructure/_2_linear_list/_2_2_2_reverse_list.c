//
// Created by 12547 on 2021/7/25.
//

#include "sqlist.h"
int reverse_list(SqList *L);
int main() {
    int a[5] = {1, 6, 8, 2, 7};
    SqList list;
    createList(&list, a, 5);
    printList(list);
    reverse_list(&list);
    printList(list);

}

int reverse_list(SqList *L) {
    int temp;
    for (int i = 0; i < L->length / 2; ++i) {
        temp = L->data[i];
        L->data[i] = L->data[L->length - 1 - i];//对称的两个位置和应该为n-1，比如第一和最后一个位置分别为
        //0和n-1，那么他们的和为n-1，即L->length - 1
        L->data[L->length - 1 - i] = temp;
    }
    return 1;
}
