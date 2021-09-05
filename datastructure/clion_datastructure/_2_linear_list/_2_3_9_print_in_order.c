//
// Created by 12547 on 2021/9/4.
//

#include "LinkListImpl.h"

/**
 * 按顺序打印带有头结点的单链表
 * @param L
 */
void print_in_order(LinkList L) {
    LNode *pre, *cur;
    LNode *min_pre, *min;
    while(L->next != NULL) {
        pre = L; cur = pre->next;
        min_pre = pre; min = cur;
        while(cur != NULL) {
            if (cur->data < min->data) {
                min = cur;
                min_pre = pre;
            }
            pre = pre->next;
            cur = cur->next;
        }
        printf("%d ", min->data);
        min_pre->next = min->next;
        free(min);
    }
}

int main() {

    int b[6] = {6, 5, 4, 3, 2, 1};
    LinkList L2;
    L2 = CreateListWithHead(b, 6);


    print_in_order(L2);
}