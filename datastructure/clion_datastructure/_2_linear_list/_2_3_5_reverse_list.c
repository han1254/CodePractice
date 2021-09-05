//
// Created by 12547 on 2021/9/4.
//

#include "LinkListImpl.h"


LNode *reverse(LinkList L, LinkList head) {
    if (L->next == NULL) {
        head->next = L;
        return L;
    }
    reverse(L->next, head)->next = L;
    L->next = NULL;//加上这个很关键，假设L是逆转后的最后一位，那么next应该等于NULL
    return L;
}
void reverse_list(LinkList L) {
    if (L->next == NULL) return;
    reverse(L->next, L);
}


/**
 * 头插法
 * @param L
 * @return
 */
LinkList Reverse_1(LinkList L) {
    LNode *cur, *follow;
    cur = L->next;
    L->next = NULL;
    while(cur != NULL) {
        follow = cur->next;
        cur->next = L->next;
        L->next = cur;
        cur = follow;
    }
    return L;
}
/**
 * 反转指针
 * @param L
 * @return
 */
LinkList Reverse_2(LinkList L) {
    LNode *pre, *cur = L->next, *follow = cur->next;
    cur->next = NULL;
    while(follow != NULL) {
        pre = cur;
        cur = follow;
        follow = follow->next;
        cur->next = pre;
    }
    L->next = cur;
    return L;
}

int main() {
    int a[7] = {1, 2, 3, 4, 5, 6, 7};
    LinkList L;
    L = CreateListWithHead(a, 7);
    reverse_list(L);
    printListWithHead(L);

    L = Reverse_1(CreateListWithHead(a, 7));
    printListWithHead(L);
    L = Reverse_2(CreateListWithHead(a, 7));
    printListWithHead(L);
}