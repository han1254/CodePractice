//
// Created by 12547 on 2021/9/4.
//

#include "LinkListImpl.h"
/**
 * 移除重复元素，只保留一个，带头结点
 * @param L
 */
void remove_duplicate(LinkList L) {
    LNode *pre = L->next, *cur = pre->next;
    while(cur != NULL) {
        if (pre->data == cur->data) {
            pre->next = cur->next;
            free(cur);
            cur = pre->next;
        } else {
            pre = pre->next;
            cur = cur->next;
        }
    }
}

int main() {
    int b[9] = {1, 4, 4, 6, 10, 10, 23, 23, 23};
    LinkList L2;
    L2 = CreateListWithHead(b, 9);

    remove_duplicate(L2);

    printListWithHead(L2);
}