//
// Created by 12547 on 2021/9/5.
//
#include "stddef.h"
#include "malloc.h"
#include "stdio.h"
typedef struct DNode {
    int data;
    int freq;
    struct DNode *prior, *next;
}DNode, *DLinkList;
/**
 * 与题目无关，仅用于功能拓展
 * @param DL
 */
void print_d_linklist_with_head(DLinkList DL) {
    DLinkList d = DL->next;
    printf("Head->");
    while(d != NULL) {
        printf("%d(freq:%d)->", d->data, d->freq);
        d = d->next;
    }
    printf("NULL\n");
}
/**
 * 与题目无关，仅用于功能拓展
 * @param a
 * @param n
 * @return
 */
DLinkList create_d_linklist_with_head(const int a[], int n) {
    DNode *head = (DLinkList)malloc(sizeof(DLinkList));
    DNode *cur = head;
    cur->prior = NULL;
    cur->next = NULL;
    for (int i = 0; i < n; ++i) {
        DNode *node = (DLinkList)malloc(sizeof(DLinkList));
        node->data = a[i];
        node->freq = 0;
        node->next = cur->next;
        node->prior = cur;
        cur->next = node;
        cur = node;
    }
    return head;
}


DLinkList Locate(DLinkList L, int x) {
    DNode *cur = L->next, *pre;
    while(cur != NULL && cur->data != x)
        cur = cur->next;
    if(cur == NULL) {
        printf("%d not found.\n",x);
        return NULL;
    } else {
        printf("find %d\n", x);
        cur->freq++;
        pre = cur->prior;
        if(cur->next != NULL)
            cur->next->prior = cur->prior;
        cur->prior->next = cur->next;
        while(pre != L && pre->freq <= cur->freq)
            pre = pre->prior;
        cur->next = pre->next;
        cur->prior = pre;
        pre->next->prior = cur;//这一点很容易被忽略，不要漏掉
        pre->next = cur;
    }
    return cur;
}

int main() {
    DLinkList res;
    int c[5] = {2, 4, 5, 10, 24};
    DLinkList L4 = create_d_linklist_with_head(c, 5);

    print_d_linklist_with_head(L4);

    Locate(L4, 5);

    print_d_linklist_with_head(L4);

    Locate(L4, 2);
    print_d_linklist_with_head(L4);
    Locate(L4, 2);
    print_d_linklist_with_head(L4);
    Locate(L4, 2);
    print_d_linklist_with_head(L4);
    Locate(L4, 4);
    print_d_linklist_with_head(L4);

    Locate(L4, 4);
    print_d_linklist_with_head(L4);

}