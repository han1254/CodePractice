//
// Created by 12547 on 2021/8/6.
//

#include "banker_init.h"
#include "security_check.h"
int main() {


    int* available;
    int** max;
    int** allocation;
    int** need;
    int* request;
    int* work;
    int process;
    int* flag;//��¼�����Ƿ��ڰ�ȫ������
    int secure_process_count = 0;
    int should_continue = 1;

    available = (int*) malloc(sizeof (int));
    int len;
    create_available("F:\\Cloud\\CodePractice\\os_code\\os_try\\banker_alg\\available.txt", available, &len);
    print_array(available, len, "Available");

    int row, col;
    printf("please insert the count of process:");
    scanf("%d", &row);
    max = (int**) malloc(sizeof (int*) * row);
    create_max("F:\\Cloud\\CodePractice\\os_code\\os_try\\banker_alg\\max.txt", max, &row, &col);
    print_two_dimension_array(max, row, col, "MAX");

    allocation = (int**) malloc(sizeof (int*) * row);
    create_allocation("F:\\Cloud\\CodePractice\\os_code\\os_try\\banker_alg\\allocation.txt", allocation, &row, &col);
    print_two_dimension_array(allocation, row, col, "ALLOCATION");
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            available[j] -= allocation[i][j];
        }
    }
    print_array(available, col, "AVAILABLE AFTER ALLOCATION");

    need = (int**) malloc(sizeof (int*) * 10);
    create_need(max, allocation, need, row, col);
    print_two_dimension_array(need, row, col, "NEED");


    //------------------------�㷨����------------------------//
    int m = col;//m����Դ������
    request = (int*) malloc(sizeof (int) * m);
    set_request(request, &process, m);
    printf("id=%d\n", process);
    print_array(request, m, "REQUEST");


    int process_count = row;
    work = (int*) malloc(sizeof (int) * m);
    create_work(available, work, m);
    flag = (int*) malloc(sizeof (int) * process_count);
    for (int i = 0; i < row; ++i)
        flag[i] = 0;

    //1. �������Need�Ƚ�
    if (check_exceed_need(request, process, m, need) == 1) {
        //2. �������Available�Ƚ�
        if (check_exceed_available(request, m, available) == 1) {
            //3. ���Է���
            attempt_to_allocate(request, available, m, process, allocation, need);
            print_two_dimension_array(allocation, row, col, "ALLOCATION");
            //-----------------��ȫ�Լ��-----------------//
//            while(should_continue) {
//                should_continue = 0;
//                for (int i = 0; i < process_count; ++i) {
//                    if (flag[i] > 0) {
//                        continue;
//                    } else {
//                        if (vector_compare(need[i], work, m)) {
//                            should_continue = 1 | should_continue;//process_count��ѭ���У�ֻ��Ҫһ���жϳɹ��Ϳ��ԣ�����ʹ�û�����
//                            flag[i] = ++secure_process_count;//���ý�������˳��
//                            run_work(allocation[i], need[i], work, i, m);
//                        }
//                    }
//                }
//            }
            for (int i = 0; i < row; ++i) {
                for (int j = 0; j < row; ++j) {
                    flag[i] = 0;
                }
                security_check(allocation, need, work, flag, i, 1, process_count, m);
            }


        }
    }

}