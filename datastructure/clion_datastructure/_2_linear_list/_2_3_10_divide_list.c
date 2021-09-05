//
// Created by 12547 on 2021/9/4.
//

#include "LinkListImpl.h"

void divide_list(LinkList L, LinkList LA, LinkList LB) {
    int flag = 1;
    LNode *pre = L, *cur = pre->next, *curA = LA, *curB = LB;
    while(cur != NULL) {
        if (flag % 2 == 1) {
            pre->next = cur->next;
            curA->next = cur;
            cur = cur->next;
            curA->next->next = NULL;
            curA = curA->next;
        } else {
            pre->next = cur->next;
            curB->next = cur;
            cur = cur->next;
            curB->next->next = NULL;
            curB = curB->next;
        }
        flag++;
    }
}

int main() {

    int b[6] = {4, 5, 6, 10, 11, 23};
    LinkList L2;
    L2 = CreateListWithHead(b, 6);

    LinkList A, B;
    A = (LNode*) malloc(sizeof (LNode *));
    B = (LNode*) malloc(sizeof (LNode *));

    divide_list(L2, A, B);

    printListWithHead(A);
    printListWithHead(B);
}