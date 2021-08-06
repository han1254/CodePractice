//
// Created by 12547 on 2021/8/6.
//
#include "stdlib.h"
#include "stdio.h"
#ifndef OS_TRY_BANKER_INIT_H
#define OS_TRY_BANKER_INIT_H

void print_two_dimension_array(int** arr, int row, int col, char* info) {
    printf("%s\n", info);
    for (int i = 0; i < row; ++i) {
        printf("p%d:", i);
        for (int j = 0; j < col; ++j) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void print_array(int* arr, int n, char* info) {
    printf("%s\n", info);
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void create_available(char* path, int* available, int *len) {
    FILE* ava_file;
    ava_file = fopen(path, "r");
    if(ava_file == NULL) {
        printf("file not found\n");
        return;
    }
    int m = 0;
    fscanf(ava_file, "%d\n", &m);//读入资源个数
    *len = m;
    if(m == 0) {
        printf("error: resources count is not valid to be zero\n");
        return;
    }
    for (int i = 0; i < m; ++i) {
        fscanf(ava_file, "%d", &available[i]);
        printf("%d ", available[i]);
    }
    printf("\n");
    fclose(ava_file);
}


void create_matrix(char* path, int** matrix, int* row, int* col) {
    FILE* matrix_file = fopen(path, "r");
    if (matrix == NULL) {
        printf("error\n");
        return;
    } else {
        fscanf(matrix_file, "%d %d", col, row);
        for (int i = 0; i < *row; ++i) {
            matrix[i] = (int*)malloc(sizeof (int) * *col);
        }
        for (int i = 0; i < *row; ++i) {
            for (int j = 0; j < *col; ++j) {
                fscanf(matrix_file, "%d", &matrix[i][j]);
            }
        }
        printf("\n");
        fclose(matrix_file);
    }
}

void create_max(char* path, int** max, int* row, int* col) {
    create_matrix(path, max, row, col);
}
void create_allocation(char* path, int** allocation, int* row, int* col) {
    create_matrix(path, allocation, row, col);
}

void set_request(int* request, int *process_id, int m) {
    printf("input process id:");
    scanf("%d", process_id);
    printf("input %d resource request.\n", m);
    for (int i = 0; i < m; ++i) {
        scanf("%d", &request[i]);
    }
}

void create_need(int** max, int** allocation, int** need, int n, int m) {
    for (int i = 0; i < n; ++i)
        need[i] = (int*) malloc(sizeof (int) * m);

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            need[i][j] = max[i][j] - allocation[i][j];
        }
    }
}

/**
 *
 * @param request 资源请求向量
 * @param process 进程号
 * @param m 资源数量
 * @param need 实现声明需要量
 * @return
 */
int check_exceed_need(const int* request, int process, int m, int** need) {
    for (int i = 0; i < m; ++i) {
        if (request[i] > need[process][i]) {
            printf("resource %d exceed the need: need %d, request %d\n",
                   i, need[process][i], request[i]);
            return 0;
        }

    }
    return 1;
}

int check_exceed_available(const int* request, int m, const int* available) {
    for (int i = 0; i < m; ++i) {
        if (request[i] > available[i]) {
            printf("resource %d exceed the available: available %d, request %d\n",
                   i, available[i], request[i]);
            return 0;
        }

    }
    return 1;
}

void attempt_to_allocate(const int* request, int* available, int m,
                        int process, int** allocation, int** need) {
    for (int i = 0; i < m; ++i) {
        available[i] -= request[i];
        allocation[process][i] += request[i];
        need[process][i] -= request[i];
    }
}

#endif //OS_TRY_BANKER_INIT_H
