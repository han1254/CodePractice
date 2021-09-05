//
// Created by 12547 on 2021/9/4.
//

#include "LinkListImpl.h"

LNode *find_same_node(LinkList LA, LinkList LB) {
    LNode *nodeA = LA, *nodeB = LB;
    int len1 = 0, len2 = 0;
    while(nodeA != NULL || nodeB != NULL) {
        if (nodeA != NULL) {
            len1++;
            nodeA = nodeA->next;
        }
        if (nodeB != NULL) {
            len2++;
            nodeB = nodeB->next;
        }
    }
    nodeA = LA, nodeB = LB;
    if(len1 > len2) {
        for (int i = 0; i < len1 - len2; ++i)
            nodeA = nodeA->next;
    } else {
        for (int i = 0; i < len2 - len1; ++i)
            nodeB = nodeB->next;
    }
    while(nodeA != NULL && nodeB != NULL) {
        if(nodeA == nodeB) return nodeA;
        nodeA = nodeA->next;
        nodeB = nodeB->next;
    }
    return NULL;
}

int main() {
    int a[3] = {1, 2, 3};
    LinkList L;
    L = CreateList(a, 3);
    int b[6] = {4, 5, 6, 10, 11, 23};
    LinkList L2;
    L2 = CreateList(b, 6);
    int c[3] = {7, 8, 9};
    LinkList L3;
    L3 = CreateList(c, 3);

    LNode *tailA = L2,*tailB = L3;
    while(tailA->next != NULL) tailA = tailA->next;
    while(tailB->next != NULL) tailB = tailB->next;
    tailA->next = L;
    tailB->next = L;
    printList(L2);
    printList(L3);

    printList(find_same_node(L2, L3));
}