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
/**
 * 中心思想就是一个快慢指针，一个快指针先走k-1步
 * @param L
 * @param k
 * @return
 */
int find_reciprocal_kth(LinkList L, int k) {
    LNode *fast = L->link, *slow = L->link;
    int t = k - 1;
    while(t > 0 && fast != NULL) {
        fast = fast->link;
        t--;
    }
    if(fast == NULL) return 0;
    while(fast->link != NULL) {
        slow = slow->link;
        fast = fast->link;
    }
    printf("find the number:%d\n", slow->data);
    return 1;
}

int main() {
    int a[8] = {1, 7, 5, 6, 3, 4, 2, 14};
    LinkList L;
    L = CreateListWithHead(a, 8);
    find_reciprocal_kth(L, 3);
}