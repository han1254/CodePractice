//
// Created by 12547 on 2021/8/5.
// 软件实现临界区互斥 算法1
//

#include "stdio.h"
#include "stdlib.h"
#include "windows.h"
#include "process.h"

int num = 0;
#define thread_number 20

CRITICAL_SECTION critical;

DWORD WINAPI criticalFun(void *p);

int main() {
    InitializeCriticalSection(&critical);
    HANDLE handle[thread_number];
    for (int i = 0; i < thread_number; ++i) {
        handle[i] = CreateThread(NULL, 0, criticalFun,
                                 NULL, 0, NULL);
    }
    WaitForMultipleObjects(thread_number, handle, TRUE, INFINITE);
    DeleteCriticalSection(&critical);
    printf("number=%d\n", num);
    system("pause");
}

DWORD WINAPI criticalFun(void *p) {
    int i = 1;
    printf("进入临界区\n");
    EnterCriticalSection(&critical);
    while(i < 1000) {
        num++;
        i++;
    }
    LeaveCriticalSection(&critical);
    return 0;
}