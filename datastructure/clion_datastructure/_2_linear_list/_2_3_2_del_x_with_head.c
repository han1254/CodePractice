//
// Created by 12547 on 2021/9/4.
//

#include "LinkListImpl.h"

void del_x_with_head(LinkList L, int x) {
    LNode *node = L;
    while(node != NULL && node->next != NULL) {
        if (node->next->data == x) {
            LNode* temp = node->next;
            node->next = node->next->next;
            free(temp);
        } else node = node->next;
    }
}

int main() {
    int a[7] = {1, 3, 3, 6, 2, 8, 3};
    LinkList L;
    L = CreateListWithHead(a, 7);

    del_x_with_head(L, 3);
    printListWithHead(L);
}