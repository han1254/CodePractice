//
// Created by 12547 on 2021/7/26.
//

#include "sqlist.h"
/**
 * 删除数组中s与t之间的元素
 * @param L 有序顺序表
 * @param s
 * @param t
 * @return
 */
int del_s_t(SqList* L, int s, int t) {
    int k = 0;//k记录在s,t之间的数的数量
    int j = 0;//结果指针
    if (s >= t || L->length == 0) {
        printf("参数不合理\n");
        return 0;
    }
    for (int i = 0; i < L->length; ++i) {
        if(L->data[i] >= s && L->data[i] <= t)
            k++;
        else
            L->data[j++] = L->data[i];
    }
    L->length -= k;
    return 1;
}


int del_s_t2(SqList* L, int s, int t) {
    int i = 0, j = L->length - 1;
    for (; i < L->length && L->data[i] < s; i++);
    if(i == L->length)
        return 0;//不存在s与t之间的数据
    for (; j >= 0 && L->data[j] > t; j--);
    j++;//因为j是从后往前找，找到的是最后一个符合s~t之间的元素，
    //加一后，是第一个大于t的元素
    while(j < L->length)
        L->data[i++] = L->data[j++];
    L->length = i;
    return 1;
}

int main() {
    int a[8] = {1, 3, 7, 9, 12, 14, 23, 24};
    SqList list;
    createList(&list, a, 8);
    printList(list);

    del_s_t2(&list, 2, 13);
    printList(list);
}