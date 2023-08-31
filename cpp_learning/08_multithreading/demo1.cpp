/*
 * @Author: https://github.com/haohaoalt
 * @Date: 2023-08-29 10:52:56
 * @LastEditors: haohaoalt haohaoalt@163.com
 * @LastEditTime: 2023-08-29 11:02:54
 * @FilePath: /hao_coding/cpp_learning/08_multithreading/demo1.cpp
 * @Description: 
 * Copyright (c) 2023 by haohaoalt@163.com, All Rights Reserved. 
 */
#include <iostream>
#include <thread>
#include <unistd.h>
using namespace std;

void hello()
{
    cout << "\nhello concurrent world." << endl;
}

int main()
{
    thread t(hello);
    cout << "thread_id: " << t.get_id() << endl;
    usleep(3e6);
    cout << "sleeping 3e6 us" << endl;
    t.join();
    cout << "main_id: " << this_thread::get_id() << endl;
    return -1;
}