//
// Created by 12547 on 2021/9/5.
//

#include "stdio.h"
#include "stddef.h"
#include "malloc.h"
typedef struct LNode {
    char data;
    struct LNode *next;
}LNode, *LinkList;

/**
 * 与题目无关：创建 有头结点的单链表
 * @param a
 * @param n
 * @return
 */
LinkList CreateListWithHead(const char a[], int n) {
    LinkList hnode = (LinkList)malloc(sizeof(LNode*));//头结点
    LinkList node = hnode;
    for (int i = 0; i < n; ++i) {
        LinkList tnode = (LinkList)malloc(sizeof(LNode*));
        tnode->data = a[i];
        node->next = tnode;
        node = node->next;
    }
    node->next = NULL;
    return hnode;
}


LinkList find_common_suffix(LinkList str1, LinkList str2) {
    int len1 = 0, len2 = 0;
    LNode *p1 = str1, *p2 = str2;
    while(p1 != NULL) {
        len1++;
        p1 = p1->next;
    }
    while (p2 != NULL) {
        len2++;
        p2 = p2->next;
    }
    p1 = str1->next;
    p2 = str2->next;
    if(len1 > len2) {
        for (int i = 0; i < len1 - len2; ++i)
            p1 = p1->next;
    } else {
        for (int i = 0; i < len2 - len1; ++i)
            p2 = p2->next;
    }

    while(p1 != p2 && p1 != NULL && p2 != NULL) {
        p1 = p1->next;
        p2 = p2->next;
    }
    return p1;
}

int main() {
    char a[4] = "load";
    char b[2] = "be";
    char c[3] = "ing";
    LinkList str1 = CreateListWithHead(a, 4);
    LinkList str2 = CreateListWithHead(b, 2);
    LinkList str = CreateListWithHead(c, 3);

    LinkList temp = str1;
    while(temp->next != NULL) temp = temp->next;
    temp->next = str->next;
    temp = str2;
    while(temp->next != NULL) temp = temp->next;
    temp->next = str->next;

    LinkList res = find_common_suffix(str1, str2);
    while (res != NULL) {
        printf("%c", res->data);
        res = res->next;
    }
    printf("\n");
}

