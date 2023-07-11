/*
 * @Author: zhanghao
 * @Date: 2023-07-11 16:42:30
 * @LastEditTime: 2023-07-11 16:49:47
 * @FilePath: /hao_coding/algorithm_learning/ch2/chrono_demo.cpp
 * @Description: 
 */
// /*
//  * @Author: zhanghao
//  * @Date: 2023-07-11 16:42:30
//  * @LastEditTime: 2023-07-11 16:43:57
//  * @FilePath: /hao_coding/algorithm_learning/ch2/chrono_demo.cpp
//  * @Description: chrono
//  */
// #include <iostream>
// #include <iomanip>
// #include <vector>
// #include <numeric>
// #include <chrono>

// volatile int sink;
// int main()
// {
//     std::cout << std::fixed << std::setprecision(20) << std::left;
//     for (auto size = 1ull; size < 1000'000'000ull; size *= 100)
//     {
//         // record start time
//         auto start = std::chrono::system_clock::now();
//         // do some work
//         std::vector<int> v(size, 42);
//         sink = std::accumulate(v.begin(), v.end(), 0u);
//         // make sure it's a side effect
//         // record end time
//         auto end = std::chrono::system_clock::now();
//         std::chrono::duration<double> diff = end - start;
//         // 计算毫秒时间差并输出
//         // 如果要求其他时间单位可以修改 std::chrono::milliseconds 为其他类型
//         // 比如std::chrono::seconds
//         auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
//         std::cout << "Time to fill and iterate a vector of " << std::setw(20)
//                   << size << " ints : " << duration.count() << " ms\n";
//     }
// }
#include <chrono>
#include <iostream>
long fibonacci(unsigned n){
    if (n < 2)return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
    }
int main(){
    const auto start = std::chrono::steady_clock::now();
    const auto fb = fibonacci(42);
    const auto end = std::chrono::steady_clock::now();
    const std::chrono::duration<double> elapsed_seconds = end - start;
    std::cout << "f(42) = " << fb << '\n' << "过去、消逝时间 elapsed time: "; 
    std::cout << elapsed_seconds.count() << "s\n"; // Before C++20
    // std::cout << elapsed_seconds << '\n'; // C++20: operator<< chrono::duration
}