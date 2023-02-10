#include<iostream>
using namespace std;
template <class T>
class smartptr // 自定义的智能指针
{
public:
    smartptr(T *_ptr) // 构造函数
            :ptr(_ptr)
    {
    }

    ~smartptr() // 析构函数
    {
        if (ptr != nullptr)
        {
            cout << "smartptr:delete" << endl;
            delete ptr;
            ptr = nullptr;
        }
    }
    T &operator*() // 重载出*运算符
    {
        return *ptr;
    }
    T *operator->() // 重载出->运算符
    {
        return ptr;
    }

private:
    T *ptr; // 指针对象
};

int main()
{
    smartptr<int> ptr1(new int(1));  //指向int类型的智能指针
    smartptr<string> ptr2(new string("string")); //指向string类型的智能指针
    cout << *ptr1 << endl;
    cout << ptr2->c_str() << endl;
}