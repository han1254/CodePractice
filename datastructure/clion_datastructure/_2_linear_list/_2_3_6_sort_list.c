//
// Created by 12547 on 2021/9/4.
//

#include "LinkListImpl.h"

/**
 * 将带有头节点的链表排序
 * O(n^2)
 * @param L
 */
void SortList(LinkList L) {
    LNode *pre, *cur = L->next, *follow = cur->next;
    L->next->next = NULL;
    cur = follow;//这里不继续写follow = cur->next是因为考虑到这时候cur可能等于NULL
    while(cur != NULL) {
        follow = cur->next;
//        pre = L->next;// 错误的写法，因为cur->data有可能很小，需要直接插到L的后面,所以pre从L开始
//        while(pre != NULL && pre->data < cur->data)
//            pre = pre->next;
        pre = L;
        while(pre->next != NULL && pre->next->data < cur->data)
            pre = pre->next;
        cur->next = pre->next;
        pre->next = cur;
        cur = follow;
    }
}

int main() {
    int a[7] = {1, 7, 5, 6, 3, 4, 2};
    LinkList L;
    L = CreateListWithHead(a, 7);
    SortList(L);
    printListWithHead(L);
}