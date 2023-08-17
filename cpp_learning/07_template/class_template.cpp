/*
 * @Author: https://github.com/haohaoalt
 * @Date: 2023-08-17 20:32:00
 * @LastEditors: haohaoalt haohaoalt@163.com
 * @LastEditTime: 2023-08-17 20:41:35
 * @FilePath: /hao_coding/cpp_learning/07_template/class_template.cpp
 * @Description: 
 * Copyright (c) 2023 by haohaoalt@163.com, All Rights Reserved. 
 */
#include <iostream>

// 定义一个类模板，用于表示二维向量
template <typename T>
class Vector2D
{
public:
    T x;
    T y;

    Vector2D(T x, T y) : x(x), y(y) {}

    void print()
    {
        std::cout << "Vector: (" << x << ", " << y << ")" << std::endl;
    }
};

int main()
{
    // 使用类模板创建两个不同类型的向量对象
    Vector2D<int> vec1(1, 2);
    vec1.print();

    Vector2D<double> vec2(3.14, 2.71);
    vec2.print();

    return 0;
}