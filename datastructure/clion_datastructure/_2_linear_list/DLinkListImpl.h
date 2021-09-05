//
// Created by 12547 on 2021/9/5.
//

#ifndef CLION_DATASTRUCTURE_DLINKLISTIMPL_H
#define CLION_DATASTRUCTURE_DLINKLISTIMPL_H

#include "DLinkList.h"
#include <malloc.h>
#include <stddef.h>
#include "stdio.h"

void print_d_linklist_with_head(DLinkList DL) {
    DLinkList d = DL->next;
    printf("Head->");
    while(d != NULL) {
        printf("%d->", d->data);
        d = d->next;
    }
    printf("NULL\n");
}

void print_cycle_d_linklist_with_head(DLinkList DL) {
    DLinkList d = DL;
    DLinkList cur = d->next;
    printf("Head<->");
    while(cur != d) {
        printf("%d<->", cur->data);
        cur = cur->next;
    }
    printf("Head\n");
}

DLinkList create_d_linklist_with_head(const int a[], int n) {
    DNode *head = (DLinkList)malloc(sizeof(DNode));
    DNode *cur = head;
    cur->prior = NULL;
    cur->next = NULL;
    for (int i = 0; i < n; ++i) {
        DNode *node = (DLinkList)malloc(sizeof(DNode));
        node->data = a[i];
        node->next = cur->next;
        node->prior = cur;
        cur->next = node;
        cur = node;
    }
    return head;
}

DLinkList create_d_linklist(const int a[], int n) {
    return create_d_linklist_with_head(a, n)->next;
}

DLinkList create_cycle_dl_with_head(const int a[], int n) {
    DNode *head = create_d_linklist_with_head(a, n);
    DNode *cur = head;
    while(cur->next != NULL)
        cur = cur->next;
    head->prior = cur;
    cur->next = head;
    return head;
}



#endif //CLION_DATASTRUCTURE_DLINKLISTIMPL_H
