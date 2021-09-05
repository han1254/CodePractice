//
// Created by 12547 on 2021/9/4.
//

#include "LinkListImpl.h"

/**
 * 两个升序排列的链表，合并成降序排列，使用头插法
 * @param A
 * @param B
 * @return
 */
LNode *merge_desc_order(LinkList A, LinkList B) {
    LinkList ResH = (LNode*) malloc(sizeof (LNode));
    ResH->next = NULL;
    LNode *a = A->next;
    LNode *b = B->next;
    while(a != NULL && b != NULL) {
        if (a->data < b->data) {
            LNode *temp = a->next;
            a->next = ResH->next;
            ResH->next = a;
            a = temp;
        } else {
            LNode *temp = b->next;
            b->next = ResH->next;
            ResH->next = b;
            b = temp;
        }
    }

    while(a != NULL) {
        LNode *temp = a->next;
        a->next = ResH->next;
        ResH->next = a;
        a = temp;
    }
    while(b != NULL) {
        LNode *temp = b->next;
        b->next = ResH->next;
        ResH->next = b;
        b = temp;
    }
    return ResH;
}

int main() {
    int a[4] = {2, 3, 5, 7};
    int b[5] = {1, 4, 6, 10, 23};
    LinkList L1;
    LinkList L2;
    L1 = CreateListWithHead(a, 4);
    L2 = CreateListWithHead(b, 5);


    printListWithHead(merge_desc_order(L1, L2));
    //结果为：Head->23->10->7->6->5->4->3->2->1->NULL
}