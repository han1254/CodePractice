//
// Created by 12547 on 2021/9/4.
//
#include "LinkListImpl.h"
void divide_list(LinkList HC, LinkList A, LinkList B) {
    int flag = 1;
    LNode *a_tail = A, *b_head = B, *cur = HC->next, *pre = HC;
    while(cur != NULL) {
        if (flag % 2 == 1) {
            pre->next = cur->next;
            a_tail->next = cur;
            a_tail = a_tail->next;
            cur->next = NULL;
            cur = pre->next;
        } else {
            pre->next = cur->next;
            cur->next = b_head->next;
            b_head->next = cur;
            cur = pre->next;
        }
        flag++;
    }
}

void divide_list2(LinkList HC, LinkList B) {
    int flag = 1;
    LNode *b_head = B, *cur = HC->next, *pre = HC;
    while(cur != NULL) {
        if (flag % 2 == 1) {
            pre =  pre->next;//如果是奇数位，跳过，不理睬
            cur = cur->next;//如果是奇数位，跳过，不理睬
        } else {
            pre->next = cur->next;
            cur->next = b_head->next;
            b_head->next = cur;
            cur = pre->next;
        }
        flag++;
    }
}
int main() {

    int b[7] = {1, 4, 5, 6, 10, 11, 23};
    LinkList L2;
    L2 = CreateListWithHead(b, 7);

    LinkList A, B;
    A = (LNode*) malloc(sizeof (LNode));
    B = (LNode*) malloc(sizeof (LNode));
    A->next = NULL;
    B->next = NULL;//这个是必须的。默认的最后的指针不是NULL，是一个随机的野指针，必须手动设置为NULL

//    divide_list(L2, A, B);
    divide_list2(L2, B);

    printListWithHead(L2);
    printListWithHead(B);
}