/*
 * @Author: https://github.com/haohaoalt
 * @Date: 2023-08-16 10:22:19
 * @LastEditors: haohaoalt haohaoalt@163.com
 * @LastEditTime: 2023-08-16 11:07:26
 * @FilePath: /hao_coding/cpp_learning/05_cpp_stl/stl_init.cpp
 * @Description: stl init and output
 * Copyright (c) 2023 by haohaoalt@163.com, All Rights Reserved. 
 */
#include <iostream>
#include <vector>
#include <list>
#include <unordered_set>
#include <map>
using namespace std;
int main(){
    vector<int> v = {1,2,3,4,5};
    cout << "Vector v : ";
    for(auto i : v) cout << i << " ";
    cout << endl;

    list<int> l = {1,2,3,4,5};
}