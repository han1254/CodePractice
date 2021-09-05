//
// Created by 12547 on 2021/9/5.
//
#include "DLinkListImpl.h"
int main() {
    int a[4] = {1, 3, 5, 7};

    DLinkList l = create_d_linklist_with_head(a, 4);
    print_d_linklist_with_head(l);

    DLinkList l2 = create_cycle_dl_with_head(a, 4);
    print_cycle_d_linklist_with_head(l2);
}