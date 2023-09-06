/*
 * @Author: https://github.com/haohaoalt
 * @Date: 2023-09-06 15:29:07
 * @LastEditors: haohaoalt haohaoalt@163.com
 * @LastEditTime: 2023-09-06 15:45:20
 * @FilePath: /hao_coding/cpp_basic_tutorial/static_func_demo.cpp
 * @Description: 
 * Copyright (c) 2023 by haohaoalt@163.com, All Rights Reserved. 
 */
#include <iostream>
#include <string>
using namespace std;
class Person{
    public:
    Person(int a):m_a(a){}
    int m_a;
    static int m_b;
    static void show(){
        cout << "静态成员函数show的调用m_b = " << m_b << endl; //静态成员函数访问静态成员变量
    }
    static void fun(){
        cout << "静态成员函数fun的调用" << endl;
        show(); //静态成员函数调用静态成员函数
    }
    void shownormal(){
        cout << "普通成员函数" << endl;
    }

};
int Person::m_b = 10; //类外分配空间，在全局区
int main(){
    Person p(15);
    p.fun();
    Person::fun(); 
    p.shownormal();
    cout << sizeof(p) << endl;
    return 0;
}