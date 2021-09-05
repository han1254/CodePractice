//
// Created by 12547 on 2021/9/4.
//
#include "LinkListImpl.h"
/**
 * 删除带头节点的链表的最小元素
 * 递归法
 * @param L
 * @param res
 */
void del_min(LinkList L, int* res) {
    LNode *pre = L, *curr = L->next;
    LNode *min_pre = pre, *min = curr;
    while(curr != NULL) {
        if (curr->data < min->data) {
            min_pre = pre;
            min = curr;
        }
        pre = curr;
        curr = curr->next;
    }
    *res = min->data;
    min_pre->next = min->next;
    free(min);
}


int main() {
    int a[7] = {1, 2, 3, 4, 5, 6, 7};
    LinkList L;
    L = CreateListWithHead(a, 7);
    int res;
    del_min(L, &res);
    printListWithHead(L);

}