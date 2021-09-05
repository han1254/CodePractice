//
// Created by 12547 on 2021/9/5.
//

#include "DLinkListImpl.h"
int judge_symmetry(DLinkList DL) {
    DNode *front = DL->next;
    DNode *end = DL->prior;
    if(DL->next == DL) return 1;//没有元素默认对称
    while(front != end && front->next != end) {//front != end奇数元素跳出的条件，front->next != end偶数个元素判断跳出的条件
        if(end->data != front->data)
            return 0;
        else {
            end = end->prior;//是prior，不要写next写习惯了就默认next
            front = front->next;
        }
    }
    return 1;
}

int main() {
    int a[7] = {1, 3, 5, 7, 5, 3, 1};

    DLinkList l = create_cycle_dl_with_head(a, 7);
    print_cycle_d_linklist_with_head(l);
    if(judge_symmetry(l) == 1) {
        printf("yes\n");
    } else
        printf("no\n");

    int b[6] = {1, 3, 5, 5, 3, 1};

    DLinkList l2 = create_cycle_dl_with_head(b, 6);
    print_cycle_d_linklist_with_head(l2);
    if(judge_symmetry(l2) == 1) {
        printf("yes\n");
    } else
        printf("no\n");

    int c[7] = {1, 3, 5, 7, 8, 5, 3};

    DLinkList l3 = create_cycle_dl_with_head(c, 7);
    print_cycle_d_linklist_with_head(l3);
    if(judge_symmetry(l3) == 1) {
        printf("yes\n");
    } else
        printf("no\n");
}