//
// Created by 12547 on 2021/9/5.
//

#include "LinkListImpl.h"

LNode *find_common_and_create(LinkList A, LinkList B) {
    LNode *a = A->next, *b = B->next;
    LNode *res = (LNode*) malloc(sizeof(LNode*));
    res->next = NULL;
    LNode *cur = res;
    while(a != NULL && b != NULL) {
        if (a->data < b->data)
            a = a->next;
        else if(a->data > b->data)
            b = b->next;
        else {
            LNode *temp = (LNode*) malloc(sizeof(LNode*));
            temp->data = a->data;
            temp->next = NULL;
            cur->next = temp;
            cur = cur->next;
            a = a->next;
            b = b->next;
        }
    }
    return res;
}

int main() {
    int a[4] = {2, 4, 5, 10};
    int b[5] = {1, 4, 6, 10, 23};
    LinkList L1;
    LinkList L2;
    L1 = CreateListWithHead(a, 4);
    L2 = CreateListWithHead(b, 5);


    printListWithHead(find_common_and_create(L1, L2));
    //结果为：Head->23->10->7->6->5->4->3->2->1->NULL
}