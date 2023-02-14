# C++11 新特性——互斥锁、条件变量、原子类型
## 01 互斥锁
C++提供了4种互斥锁：
- mutex:互斥锁
- timed_mutex:带超时机制的互斥锁
- recursive_mutex:递归互斥锁
- recursive_timed_mutex: 带超时机制的互斥锁

头文件包含： `#include <mutex>`
### 01 mutex类


### 02 timed_mutex类


### 03 recursive_mutex类


### 04 lock_guard类

lock_guard是模板类，可以简化互斥锁的使用，也更安全；

```cpp
//lock_guard定义如下
template<class Mutex>
class lock_guard{
    explicit lock_guard(Mutex& mtx);
}

```

lock_guard在构造函数中加锁，在析构函数中解锁

lock_guard采用RAII思想(在类构造函数中分配资源，在析构函数中释放资源，保证资源在离开作用域时自动释放)

## 02 条件变量

条件变量是一种线程同步机制。当条件不满足时，相关线程被一直阻塞，直到某种条件出现，这些线程才会被唤醒。
C++的条件变量提供两个类：

**condition_variable**

- condition_variable
- condition_variable_any 

(包含头文件condition_variable)

**unique_lock**




## 03 原子类型atomic