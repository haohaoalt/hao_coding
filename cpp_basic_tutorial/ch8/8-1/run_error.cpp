#include <iostream>
#include <string>
#include <exception>
using namespace std;
// int main()
// {
//     string str = "http://baidu.com";
//     char ch1 = str[100]; //下标越界
//     cout << ch1 << endl;
//     //at()是string类的一个成员函数，他会根据下标来返回字符串的一个字符，且会检查下标是否越界，如果越界，则会抛出一个异常。
//     char ch2 = str.at(100); //下标越界，抛出异常
//     cout << ch2 << endl;
//     return 0;
    
// }

int main()
{
    string str = "http://baidu.com";
    try{
        char ch1 = str[100];
        cout<<ch1<<endl;
    }catch(exception e){
        cout<<"[1]out of bound!"<<endl;
    }
    try{
        char ch2 = str.at(100);
        cout<<ch2<<endl;
    }catch(exception &e){  //exception类位于<exception>头文件中
        cout<<"[2]out of bound!"<<endl;
    }
    return 0;
    
}