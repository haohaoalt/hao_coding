#include <iostream>
using namespace std;
class Singleton
{
public:
    // 在静态函数 Singleton::getInstance() 中定义了 Singleton 的静态变量对象 s，并返回此对象的引用。
    static Singleton &get_instance()
    {
        static Singleton s;
        return s;
    }
    void show()
    {
        std::cout << "This is Singleton" << std::endl;
    }
    /*
    同时为避免创建Singleton对象，还需要：
    - 构造函数私有化，使得外部无法创建Singleton对象；
    - 关闭拷贝构造函数，右值拷贝构造函数；
    - 关闭赋值运算符重载函数；
    */
private:
    Singleton() {}
    Singleton(const Singleton &) = delete;
    Singleton(const Singleton &&) = delete;
    Singleton &operator=(const Singleton &) = delete;
};
int main(){
    Singleton& s = Singleton::get_instance();
    s.show();
    return 0;
}