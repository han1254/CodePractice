//
// Created by 12547 on 2021/8/5.
//
#include <stdio.h>
#include <pthread.h>
#include <windows.h>

#define sleepTime1 1000
#define sleepTime2 1000

int turn = 0;
int num = 0;
void* p0(void* p) {
    while(turn != 0) {
        printf("P0:进入区等待...\n");
    }
    printf("P0:临界区\n");
    num = num + 1;
    printf("P0:退出区\n");
    turn = 1;
    printf("P0:剩余区\n");
    Sleep(sleepTime1);
    printf("P0:结束\n");
}

void* p1(void* p) {
    while(turn != 1) {
        printf("P1:进入区等待...\n");
    }
    printf("P1:临界区\n");
    num = num + 1;
    printf("P1:退出区\n");
    turn = 0;
    printf("P1:剩余区\n");
    Sleep(sleepTime2);
    printf("P1:结束\n");
}

int main() {
    pthread_t pt0;
    pthread_t pt1;
//    if(pthread_create(&temp, NULL, producer, NULL) == -1){
//        printf("ERROR, fail to create producer%d\n", i);
//        exit(1);
//    }
    if(pthread_create(&pt0, NULL, p0, NULL) == -1) {
        printf("ERROR, fail to create producer p0\n");
        exit(1);
    }
    if(pthread_create(&pt1, NULL, p1, NULL) == -1) {
        printf("ERROR, fail to create producer p1\n");
        exit(1);
    }

    void* result;
//    if(pthread_join(pt0, &result) == -1 || pthread_join(pt1, &result) == -1){
//        printf("fail to recollect\n");
//        exit(1);
//    }
    int i = 0;
    while(TRUE) {
        if(i % 2 == 0)
            pthread_join(pt0, &result);
        else
            pthread_join(pt1, &result);
        i++;
        if(i == 100) break;
    }
    printf("%d\n", num);
}