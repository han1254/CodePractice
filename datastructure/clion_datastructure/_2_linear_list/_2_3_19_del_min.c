//
// Created by 12547 on 2021/9/5.
//

#include "LinkListImpl.h"
void del_min(LinkList L) {
    LNode *p, *pre, *min, *min_pre;
    while(L->next != L) {//判断循环单链表是否为空
        p = L->next; pre = L;
        min = p; min_pre = pre;
        while(p != L) {//判断是否到头
            if (p->data < min->data) {
                min = p;
                min_pre = pre;
            }
            pre = p;
            p = p->next;
        }
        printf("delete:%d\n", min->data);
        min_pre->next = min->next;
        free(min);
    }
    free(L);
}

int main() {
    int b[7] = {1, 4, 5, 6, 10, 11, 23};
    LinkList L2;
    L2 = CreateCycleList(b, 7);

    del_min(L2);
}