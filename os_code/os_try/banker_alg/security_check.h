//
// Created by 12547 on 2021/8/6.
//

#ifndef OS_TRY_SECURITY_CHECK_H
#define OS_TRY_SECURITY_CHECK_H

#include "stdio.h"
#include "stdlib.h"

void create_work(const int* available, int* work, int m) {
    for (int i = 0; i < m; ++i) {
        work[i] = available[i];
    }
}

int vector_compare(const int* need, const int* work, int m) {
    for (int i = 0; i < m; ++i) {
        if (need[i] > work[i])
            return 0;
    }
    return 1;
}

void print_arr(const int* a, int m, char* info) {
    printf("%s\n", info);
    for (int i = 0; i < m; ++i) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void run_work(int* allocation, int* need, int* work, int process, int m) {
    printf("\n-------------------------------------\n");
    printf("Process %d::::::::>\n", process);
    print_arr(allocation, m, "allocation");
    print_arr(need, m, "need");
    print_arr(work, m, "work_vector");
    printf("Allocation（￣︶￣）↗　...............\n");
    for (int i = 0; i < m; ++i) {
        allocation[i] += need[i];
        work[i] -= need[i];
        need[i] = 0;
    }
    print_arr(allocation, m, "allocation");
    print_arr(need, m, "need");
    print_arr(work, m, "work_vector");

    printf("Working(lll￢ω￢)...............Done(*^_^*)\n");

    for (int i = 0; i < m; ++i) {
        work[i] += allocation[i];
        allocation[i] = 0;
    }
    print_arr(allocation, m, "allocation");
    print_arr(need, m, "need");
    print_arr(work, m, "work_vector");
}


int security_check(int** allocation,int** need, int* work,
                   int* flag, int process, int depth, int pro_count, int res_count) {
    if (depth > pro_count){
        for (int i = 0; i < pro_count; ++i) {
            printf("p%d:%d\n", i, flag[i]);
        }
        return 1;
    }
    int count = (process + 1) % pro_count;
    int res = 0;
    int temp_work[res_count];
    int temp_need[res_count];
    if (vector_compare(need[process], work, res_count) == 1) {

        for (int i = 0; i < res_count; ++i) {
            temp_work[i] = work[i];
            temp_need[i] = need[process][i];
            need[process][i] = 0;
//            work[i] -= need[process][i];
            work[i] += allocation[process][i];
        }
        flag[process] = depth;
        while(!(count >= pro_count && count % pro_count == process)) {
            if(flag[count] > 0) {
                count++;
                continue;
            }

            res = res | security_check(allocation, need, work,
                                       flag, count % pro_count, depth + 1, pro_count, res_count);
            count++;
        }
        flag[process] = 0;
        for (int i = 0; i < res_count; ++i) {
            work[i] = temp_work[i];
            need[process][i] = temp_need[i];
        }
        return res;
    } else return 0;

}

#endif //OS_TRY_SECURITY_CHECK_H
