/*
    递归互斥锁允许同意线程多次获得互斥锁，可以解决同一线程多次加锁造成的死锁问题
*/
#include <iostream>
#include <mutex>
using namespace std;

class AA{
    recursive_mutex m_mutex;
public:
    void func1(){
        m_mutex.lock();
        cout << "调用了func1 \n";
        m_mutex.unlock();
    }
    void func2(){
        m_mutex.lock();
        cout << "调用了func2 \n";
        func1();
        m_mutex.unlock();    
    }
};

int main()
{
    AA aa;
    // aa.func1();
    aa.func2();
    return 0;
}