//
// Created by 12547 on 2021/9/4.
//

#include "LinkListImpl.h"

/**
 * 删除带有头节点的链表中处于x~y之间的结点
 * @param L
 * @param min
 * @param max
 */
void del_x_y(LinkList L, int min, int max) {
    LNode *pre = L, *cur = L->next;
    while(cur != NULL) {
        if(cur->data > min && cur->data < max) {
            pre->next = cur->next;
            free(cur);
            cur = pre->next;
        } else {
            pre = cur;
            cur = cur->next;
        }
    }
}

int main() {
    int a[8] = {1, 7, 5, 6, 3, 4, 2, 14};
    LinkList L;
    L = CreateListWithHead(a, 8);

    del_x_y(L, 0, 10);
    printListWithHead(L);
}