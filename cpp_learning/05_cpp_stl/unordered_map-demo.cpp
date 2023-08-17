/*
 * @Author: https://github.com/haohaoalt
 * @Date: 2023-08-17 14:42:02
 * @LastEditors: haohaoalt haohaoalt@163.com
 * @LastEditTime: 2023-08-17 20:25:47
 * @FilePath: /hao_coding/cpp_learning/05_cpp_stl/unordered_map-demo.cpp
 * @Description: 
 * Copyright (c) 2023 by haohaoalt@163.com, All Rights Reserved. 
 */
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
class Myclass{
public:
    int first;
    vector<int> second;
    bool operator== (const Myclass& other) const
    {
        return first == other.first && second == other.second;
    }
};
namespace std
{
    template <>
    struct hash<Myclass>
    {
        size_t operator()(const Myclass &k) const
        {
            int h = k.first;
            for (auto x : k.second)
            {
                h ^= x;
            }
            return h;
        }

    };
}
int main(){
    unordered_map<Myclass, double> S;
    Myclass a = {2, {3, 4}};
    Myclass b = {3, {1, 2, 3, 4}};
    S[a] = 2.5;
    S[b] = 3.123;
    cout << S[a] << ' ' << S[b] << endl;
    return 0;
}