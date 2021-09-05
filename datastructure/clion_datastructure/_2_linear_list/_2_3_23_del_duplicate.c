//
// Created by 12547 on 2021/9/5.
//

#include "stdio.h"
#include "stddef.h"
#include "malloc.h"
typedef struct LNode {
    int data;
    struct LNode *link;
}LNode, *LinkList;

/**
 * 创建 有头结点的单链表
 * @param a
 * @param n
 * @return
 */
LinkList CreateListWithHead(const int a[], int n) {
    LinkList hnode = (LinkList)malloc(sizeof(LNode));//头结点
    LinkList node = hnode;
    for (int i = 0; i < n; ++i) {
        LinkList tnode = (LinkList)malloc(sizeof(LNode));
        tnode->data = a[i];
        node->link = tnode;
        node = node->link;
    }
    node->link = NULL;
    return hnode;
}

int abs(int data) {
    return data >= 0 ? data : -data;
}
/**
 * 暴力解法
 * @param L
 */
void del_duplicate(LinkList L) {
    LNode *cur = L->link, *pre, *temp;
    while(cur != NULL) {
        pre = cur;
        temp = cur->link;
        while(temp != NULL) {
            if(abs(temp->data) == abs(cur->data)) {
                pre->link = temp->link;
                free(temp);
                temp = pre->link;
            } else {
                pre = pre->link;
                temp = temp->link;
            }
        }
        cur = cur->link;
    }
}
/**
 * 既然强调了|data|≤n，则说明这个n要用到
 * @param L
 * @param n
 */
void del_duplicate2(LinkList L, int n) {
    LNode *pre = L, *cur = L->link;
    int *record = (int*)malloc(sizeof(int) * n + 1);
    for (int i = 0; i < n + 1; ++i)
        record[i] = 0;
    while(cur != NULL) {
        int abs_data = abs(cur->data);
        if(record[abs_data] == 0) {
            record[abs_data] = 1;
            pre = pre->link;
            cur = cur->link;
        } else {
            pre->link = cur->link;
            free(cur);
            cur = pre->link;
        }

    }
    free(record);
}

int main() {
    int a[6] = {21, -15, -15, -7, 15, 21};
    LinkList l = CreateListWithHead(a, 6);
    del_duplicate(l);
    LinkList d = l->link;
    while(d != NULL) {
        printf("%d ", d->data);
        d = d->link;
    }
    printf("\n");

    int b[6] = {-15, -15, -15, -15, 15, 15};
    LinkList l2 = CreateListWithHead(b, 6);
    del_duplicate2(l2, 24);
    d = l2->link;
    while(d != NULL) {
        printf("%d ", d->data);
        d = d->link;
    }
    printf("\n");
}