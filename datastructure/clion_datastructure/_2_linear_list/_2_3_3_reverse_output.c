//
// Created by 12547 on 2021/9/4.
//

#include "LinkListImpl.h"

void reverse_output(LinkList L) {
//    if (L->next == NULL) {
//        printf("%d ", L->data);
//        return;
//    };
    if (L->next != NULL)
        reverse_output(L->next);
    printf("%d ", L->data);
}

int main() {
    int a[7] = {1, 2, 3, 4, 5, 6, 7};
    LinkList L;
    L = CreateListWithHead(a, 7);

    reverse_output(L->next);
}