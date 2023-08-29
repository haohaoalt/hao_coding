/*
 * @Author: https://github.com/haohaoalt
 * @Date: 2023-08-27 09:33:14
 * @LastEditors: haohaoalt haohaoalt@163.com
 * @LastEditTime: 2023-08-27 09:35:44
 * @FilePath: /hao_coding/cpp_learning/07_template/func_template_copy.cpp
 * @Description: 
 * Copyright (c) 2023 by haohaoalt@163.com, All Rights Reserved. 
 */
#include <iostream>
#include <string>
using namespace std;
//function template
template <typename T>
inline T const& Max(T const& a, T const& b){
    return a < b? b: a;
}
