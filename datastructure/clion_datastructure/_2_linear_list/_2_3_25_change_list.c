//
// Created by 12547 on 2021/9/5.
//
#include "stdio.h"
#include "stddef.h"
#include "malloc.h"
typedef struct NODE {
    int data;
    struct NODE *next;
}NODE;
NODE *CreateListWithHead(const int a[], int n) {
    NODE *hnode = (NODE*)malloc(sizeof(NODE));//头结点
    NODE *node = hnode;
    for (int i = 0; i < n; ++i) {
        NODE *tnode = ( NODE *)malloc(sizeof( NODE));
        tnode->data = a[i];
        node->next = tnode;
        node = node->next;
    }
    node->next = NULL;
    return hnode;
}
void change_list(NODE *h) {
    NODE *slow = h, *fast = h;
    while(fast->next != NULL) {
        slow = slow->next;
        fast = fast->next;
        if(fast->next != NULL) fast = fast->next;
    }

    NODE *cur = slow->next;
    slow->next = NULL;
    while(cur != NULL) {//一提到逆转，想到头插法，slow结点就当成头插法的头，遍历后半段，头插，即可以将后半段逆转
        NODE *temp = cur->next;
        cur->next = slow->next;
        slow->next = cur;
        cur = temp;
    }

    NODE *front = h->next, *latter = slow->next;
    slow->next = NULL;//很重要，不加就又无限循环了
    while(latter != NULL) {
        NODE *temp = latter->next;
        latter->next = front->next;
        front->next = latter;
        front = front->next->next;//这点很关键，一定要跳过插入的那个结点
        latter = temp;
    }
}

int main() {
    int a[11] = {1, 3, 5, 7, 9, 11, 10, 8, 6, 4, 2};

    NODE *L = CreateListWithHead(a, 11);
    NODE *t = L->next;


    change_list(L);
    while(t != NULL) {
        printf("%d ", t->data);
        t = t->next;
    }
    printf("\n");

}