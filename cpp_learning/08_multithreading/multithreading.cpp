/*
 * @Author: https://github.com/haohaoalt
 * @Date: 2023-08-20 16:40:46
 * @LastEditors: haohaoalt haohaoalt@163.com
 * @LastEditTime: 2023-08-29 10:18:53
 * @FilePath: /hao_coding/cpp_learning/08_multithreading/multithreading.cpp
 * @Description: 
 * Copyright (c) 2023 by haohaoalt@163.com, All Rights Reserved. 
 */
#include <pthread.h>
#include <cstdlib>
#include <iostream>
using namespace std;
#define NUM_THREADS 5
void *PrintHello(void *threadid){
    long tid;
    tid = (long)threadid;
    cout << "Hello world Thread ID," << tid << endl;
    pthread_exit(NULL);
}
int main(){
    pthread_t threads[NUM_THREADS];
    int rc;
    int i;
    for(int i = 0; i < NUM_THREADS; i++){
        cout << "main(): creating thread," << i << endl;
        // pthread_create (thread, attr, start_routine, arg)
        // thread: 子例程返回的新线程的不透明唯一标识符
        // attr: 一个opaque属性对象，可用于设置线程属性。 您可以指定线程属性对象，或者为默认值指定NULL
        // start_routine: 线程创建后将执行的C++例程
        // arg: 可以传递给start_routine的单个参数。 它必须通过引用传递为void类型的指针转​​换。 如果不传递参数，则可以使用NULL
        rc = pthread_create(&threads[i], NULL, PrintHello,(void *)i);
        if(rc){
            cout << "Error: Unable to create thread" << rc << endl;
            exit(-1);
        }
    }
    pthread_exit(NULL);
}