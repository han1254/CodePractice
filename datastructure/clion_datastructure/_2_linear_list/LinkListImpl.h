//
// Created by han1254 on 5/22/21.
//

#ifndef CLION_DATASTRUCTURE_LINKLISTIMPL_H
#define CLION_DATASTRUCTURE_LINKLISTIMPL_H

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "LinkList.h"

void print_cycle_list(LinkList list) {
    LinkList d = list;
    LinkList cur = d->next;
    printf("Head<->");
    while(cur != d) {
        printf("%d<->", cur->data);
        cur = cur->next;
    }
    printf("Head\n");
}
void printList(LinkList list) {
    LinkList node = list;
    while(node != NULL) {
        printf("%d->", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

void printList1(LinkList* l) {//LinkList& l
    while ((*l) != NULL) {
        printf("%d ", (*l)->data);
        *l = (*l)->next;
    }
}

void printList2(LinkList* l) {//LinkList& l
    LinkList node = *l;
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
}

void printListWithHead(LinkList L) {
    printf("Head->");
    LNode *node = L->next;
    printList(node);
}

/**
 * 没有头节点的单链表
 * @param a
 * @param n
 * @return
 */
LinkList CreateList(const int a[], int n) {
    LinkList hnode = (LinkList)malloc(sizeof(LNode));
    hnode->data = a[0];
    LinkList node = hnode;
    for (int i = 1; i < n; ++i) {
        LinkList tnode = (LinkList)malloc(sizeof(LNode));
        tnode->data = a[i];
        node->next = tnode;
        node = node->next;
    }
    node->next = NULL;
    return hnode;
}

/**
 * 有头结点的单链表
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
        node->next = tnode;
        node = node->next;
    }
    node->next = NULL;
    return hnode;
}



/**
 * 有头结点的循环链表
 * @param a
 * @param n
 * @return
 */
LinkList CreateCycleList(const int a[], int n) {
    LinkList head = CreateListWithHead(a, n);
    LinkList cur = head;
    while (cur->next != NULL)
        cur = cur->next;
    cur->next = head;
    return head;
}

/**
 * 有头结点的循环链表
 * @param a
 * @param n
 * @return
 */
LinkList CreateCycleListWithoutHead(const int a[], int n) {
    LinkList head = CreateListWithHead(a, n);
    LinkList cur = head;
    while (cur->next != NULL)
        cur = cur->next;
    cur->next = head->next;
    return head->next;
}
#endif //CLION_DATASTRUCTURE_LINKLISTIMPL_H
