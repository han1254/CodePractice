#include <stdio.h>
#include <pthread.h>
#include <windows.h>
#define N 100
#define true 1
#define producerNum  10
#define consumerNum  5
#define sleepTime 1000

typedef int semaphore;
typedef int item;
item buffer[N] = {0};
int in = 0;
int out = 0;
int proCount = 0;
semaphore mutex = 1, empty = N, full = 0, proCmutex = 1;

void * producer(void * a){
    while(true){
        while(proCmutex <= 0);
        proCmutex--;
        proCount++;
        printf("����һ����ƷID%d, ������λ��Ϊ%d\n",proCount,in);
        proCmutex++;

        while(empty <= 0){
            printf("������������\n");
        }
        empty--;

        while(mutex <= 0);
        mutex--;

        buffer[in] = proCount;
        in = (in + 1) % N;

        mutex++;
        full++;
        Sleep(sleepTime);
    }
}

void * consumer(void *b){
    while(true){
        while(full <= 0){
            printf("������Ϊ�գ�\n");
        }
        full--;

        while(mutex <= 0);
        mutex--;

        int nextc = buffer[out];
        buffer[out] = 0;//�����꽫����������Ϊ0

        out = (out + 1) % N;

        mutex++;
        empty++;

        printf("\t\t\t\t����һ����ƷID%d,������λ��Ϊ%d\n", nextc,out);
        Sleep(sleepTime);
    }
}

int main()
{
    pthread_t threadPool[producerNum+consumerNum];
    int i;
    for(i = 0; i < producerNum; i++){
        pthread_t temp;
        if(pthread_create(&temp, NULL, producer, NULL) == -1){
            printf("ERROR, fail to create producer%d\n", i);
            exit(1);
        }
        threadPool[i] = temp;
    }//���������߽��̷����̳߳�


    for(i = 0; i < consumerNum; i++){
        pthread_t temp;
        if(pthread_create(&temp, NULL, consumer, NULL) == -1){
            printf("ERROR, fail to create consumer%d\n", i);
            exit(1);
        }
        threadPool[i+producerNum] = temp;
    }//���������߽��̷����̳߳�


    void * result;
    for(i = 0; i < producerNum+consumerNum; i++){
        if(pthread_join(threadPool[i], &result) == -1){
            printf("fail to recollect\n");
            exit(1);
        }
    }//�����̳߳�
    return 0;
}