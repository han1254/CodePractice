//
// Created by 12547 on 2021/7/25.
//

#ifndef CLION_DATASTRUCTURE_SQLIST_H
#define CLION_DATASTRUCTURE_SQLIST_H
#include "stdio.h"
#define MaxSize 50
typedef struct {
    int data[MaxSize];
    int length;
}SqList;

typedef struct {
    int* data;
    int max_size;
    int length;
} SeqList;

void printList(SqList L) {
    for (int i = 0; i < L.length; ++i)
        printf("%d ", L.data[i]);

    printf("\n");
}

void printArray(const int arr[], int n) {
    for (int i = 0; i < n; ++i)
        printf("%d ", arr[i]);

    printf("\n");
}

int createList(SqList *L, const int* a, int n) {
    L->length = 0;
    for (int i = 0; i < n; ++i) {
        L->data[i] = a[i];
        (L->length)++;
    }
    return 1;
}

int listInsert(SqList *L, int i ,int e) {
    if(i < 0 || i > L->length)
        return 0;
    if(L->length >= MaxSize) {
        printf("Maxsize, can't insert\n");
        return 0;
    }
    for (int j = L->length; j > i; j--)
        L->data[j] = L->data[j - 1];
    L->data[i] = e;
    L->length++;
    return 1;
}

int listDelete(SqList *L, int i, int *e) {
    if(i < 0 || i >= L->length)
        return 0;
    *e = L->data[i];
    for (int j = i; j < L->length - 1; ++j)
        L->data[j] = L->data[j+1];
    L->length--;
    return 1;
}

int locateElement(SqList *L, int e) {
    for (int i = 0; i < L->length; ++i)
        if(L->data[i] == e)
            return i;
    return -1;
}

#endif //CLION_DATASTRUCTURE_SQLIST_H
