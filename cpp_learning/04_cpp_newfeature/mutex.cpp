/*
    - 加锁lock(),未锁锁定，锁定阻塞等待
    - 解锁unlock(),持有锁的线程才能解锁
    - 尝试加锁 try_lock(),互斥锁未锁定成功返回true，锁定则加锁失败，返回false
*/
#include <iostream>
#include <thread>  //线程类头文件
#include <mutex>  //互斥锁类头文件
using namespace std;

mutex mtx; //创建互斥锁，保护共享资源cout对象
//普通函数
void func(int bh, const string& str){
    for(int ii = 1; ii <= 10; ii++){
        mtx.lock(); //申请加锁
        cout << bh << str << endl;
        mtx.unlock(); //解锁
        this_thread::sleep_for(chrono::seconds(1));  //休眠1s
    }
}
int main()
{
    //用普通函数创建线程
    thread t1(func,1,"我是一只闪闪鸟~");
    cout << "thread t1" << endl;
    thread t2(func,2,"我是一只闪闪鸟~");
    cout << "thread t2" << endl;

    thread t3(func,3,"我是一只闪闪鸟~");
    cout << "thread t3" << endl;

    thread t4(func,4,"我是一只闪闪鸟~");
    cout << "thread t4" << endl;

    t1.join(); // 回收线程t1的资源 join()函数作用；用来线程的流程管理，通俗来说就是来进行阻塞。
    cout << "join t1" << endl;

    t2.join();   //回收线程t2的资源
    cout << "join t2" << endl;

    t3.join();   //回收线程t3的资源
    cout << "join t3" << endl;

    t4.join();   //回收线程t4的资源
    cout << "join t4" << endl;

    return 0;

}
