/*
 * @Author: zhanghao
 * @Date: 2023-07-11 11:13:30
 * @LastEditTime: 2023-07-11 16:29:43
 * @FilePath: /hao_coding/algorithm_learning/ch2/time_cost.cpp
 * @Description: 代码随想录
 */
#include <iostream>
#include <chrono> 
#include <thread>
using namespace std;
using namespace chrono;
//O(n)
void f1(long long n){
    long long k = 0;
    for (long long i = 0; i < n; i++){
        k++;
    }
}
//O(n^2)
void f2(long long n){
    long long k = 0;
    for (long long j = 0; j < n; j++){
        for (long j = 0; j < n; j++){
            k++;
        }
    }
}
//O(nlogn)
void f3(long long n){
    long long k = 0;
    for (long long i = 0; i < n; i++){
        for (long long j = 1; j < n; j = j * 2){
            k++;
        }
    }
}
int main(){
    long long n;
    while(1){
        cout << "Input n:";
        cin >> n;
        milliseconds start_time = duration_cast<milliseconds>(system_clock::now().time_since_epoch());
        f1(n);
        //f2(n);
        //f3(n);
        milliseconds end_time = duration_cast<milliseconds>(system_clock::now().time_since_epoch());
        cout << "Cost time:" << milliseconds(end_time).count() - milliseconds(start_time).count() << " ms" << endl;
        }
}