//
// Created by 12547 on 2021/9/4.
//


#include "LinkListImpl.h"
/**
 * 递归算法，删除《不带头节点》的单链表L中所有值为x的结点
 * @param L
 * @param x
 */
LNode* recur_del_x(LinkList L, int x) {
    if (L == NULL) return NULL;
    if (L->data == x) {
        LNode* temp = L->next;
        free(L);
        return recur_del_x(temp, x);
    }
    L->next = recur_del_x(L->next, x);
    return L;
}

/**
 * 王道书上的做法
 * @param L
 * @param x
 */
void Del_X_3(LinkList* L, int x) {
    LNode* p;
    if (*L == NULL) {
        return;
    }
    if ((*L)->data == x) {
        p = *L;
        *L = (*L)->next;
        free(p);
        Del_X_3(L, x);
    } else
        Del_X_3(&(*L)->next, x);
}

int main() {
    int a[6] = {1, 3, 3, 6, 2, 8};
    int b[6] = {1, 3, 3, 6, 2, 8};
    LinkList L;
    LinkList L2;
    L = CreateList(a, 6);
    L2 = CreateList(b, 6);
    L = recur_del_x(L, 1);
    Del_X_3(&L2, 1);
    printList(L);
    printList(L2);
}

