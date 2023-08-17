/*
 * @Author: https://github.com/haohaoalt
 * @Date: 2023-08-17 20:31:47
 * @LastEditors: haohaoalt haohaoalt@163.com
 * @LastEditTime: 2023-08-17 20:36:13
 * @FilePath: /hao_coding/cpp_learning/07_template/func_template.cpp
 * @Description: 
 * Copyright (c) 2023 by haohaoalt@163.com, All Rights Reserved. 
 */
#include <iostream>
//define a func template to calculate max
template <typename T>
T max(T x, T y){
    return x > y ? x : y;
}
int main(){
    int num1 = 10, num2 = 20;
    double num3 = 3.14, num4 = 2.71;
    int maxINt = max(num1,num2);
    std::cout << "Max Integer: " << maxINt << std::endl;
    double maxDouble = max(num3,num4);
    std::cout << "Max double: " << maxDouble << std::endl;
    return 0;
}