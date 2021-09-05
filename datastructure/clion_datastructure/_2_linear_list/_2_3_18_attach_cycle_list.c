//
// Created by 12547 on 2021/9/5.
//

#include "LinkListImpl.h"

LinkList link(LinkList A, LinkList B) {
    LNode *p1 = A, *p2 = B;
    while (p1->next != A) p1 = p1->next;
    while (p2->next != B) p2 = p2->next;

    p1->next = B;
    p2->next = A;
    return A;
}

int main() {
    int c[7] = {2, 4, 4, 5, 10, 10, 24};
    int d[3] = {4, 5, 11};
    LinkList L3 = CreateCycleList(c, 7);
    LinkList L4 = CreateCycleList(d, 3);

    print_cycle_list(link(L3, L4));//输出结果：Head<->2<->4<->4<->5<->10<->10<->24<->12017024<->4<->5<->11<->Head
    //中间有一个很怪异的数字，不要害怕，这只是L4的表头，由于没有设置data，内容是不固定的一个随机数
}