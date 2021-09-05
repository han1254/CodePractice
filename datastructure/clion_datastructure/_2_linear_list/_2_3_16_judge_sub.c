//
// Created by 12547 on 2021/9/5.
//

#include "LinkListImpl.h"
/**
 * 暴力解法
 * @param A
 * @param B
 * @return
 */
int judge_sub(LinkList A, LinkList B) {
    LNode *pa = A->next, *pb = B->next, *tp_a, *tp_b;
    while(pa != NULL) {
        tp_a = pa;
        tp_b = pb;
        while(tp_a != NULL && tp_b != NULL && tp_a->data == tp_b->data) {
            tp_a = tp_a->next;
            tp_b = tp_b->next;
        }
        if (tp_b == NULL) return 1;
        pa = pa->next;
    }
    return 0;
}

int main() {
    int a[7] = {2, 4, 4, 5, 10, 10, 24};
    int b[3] = {4, 5, 10};
    LinkList L1;
    LinkList L2;
    L1 = CreateListWithHead(a, 7);
    L2 = CreateListWithHead(b, 3);
    if (judge_sub(L1, L2) == 1) {
        printf("yes\n");
    } else {
        printf("no\n");
    }

    int c[7] = {2, 4, 4, 5, 10, 10, 24};
    int d[3] = {4, 5, 11};
    LinkList L3 = CreateListWithHead(c, 7);
    LinkList L4 = CreateListWithHead(d, 3);
    if (judge_sub(L3, L4) == 1) {
        printf("yes\n");
    } else {
        printf("no\n");
    }


}

