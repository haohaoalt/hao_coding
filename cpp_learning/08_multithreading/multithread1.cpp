/*
 * @Author: https://github.com/haohaoalt
 * @Date: 2023-08-29 10:21:50
 * @LastEditors: haohaoalt haohaoalt@163.com
 * @LastEditTime: 2023-08-29 10:46:49
 * @FilePath: /hao_coding/cpp_learning/08_multithreading/multithread1.cpp
 * @Description: 
 * Copyright (c) 2023 by haohaoalt@163.com, All Rights Reserved. 
 */
#include <iostream>
#include <cstdio>
#include <pthread.h>
#include <ctime>
#include <unistd.h>
#include <time.h>
#include <cstring>
using namespace std;
int global_cnt = 0; //global variable
void* thread(void * arg){
    int m_cnt = 0;
    m_cnt = 5;
    global_cnt ++;
    return 0;
}
int main(){
    int err = 0;
    pthread_t tid;
    int m_cnt = 0;
    err = pthread_create(&tid, NULL, thread, NULL); //创建子线程
    if(0 != err){
        printf("can't create thread: %s\n",strerror(err));
    }
    while(global_cnt == 0){
        usleep(3000); //300ms
    }
    printf("global_cnt = %d\n,m_cnt = %d\n",global_cnt,m_cnt);
    return 0;
}