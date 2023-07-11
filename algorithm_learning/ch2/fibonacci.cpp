/*
 * @Author: zhanghao
 * @Date: 2023-07-11 22:25:52
 * @LastEditTime: 2023-07-11 22:31:47
 * @FilePath: /hao_coding/algorithm_learning/ch2/fibonacci.cpp
 * @Description: fibonacci
 */
#include <iostream>
#include <chrono>
#include <thread>
using namespace std;
using namespace chrono;
int fibonacci(int i){
    if(i == 0) return 0;
    if(i == 1) return 1;
    return fibonacci(i-1) + fibonacci(i-2);
}
void time_consumption(){
    int n;
    while(cin >> n){
        auto start_time = duration_cast<milliseconds>(system_clock::now().time_since_epoch());
        fibonacci(n);
        auto end_time = duration_cast<milliseconds>(system_clock::now().time_since_epoch());
        cout << milliseconds(end_time).count() - milliseconds(start_time).count() << " ms" << endl;
    }
}
int main(){
    time_consumption();
    return 0;
}
