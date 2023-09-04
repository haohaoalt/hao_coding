// TODO example https://www.cnblogs.com/wkfvawl/p/9429128.html
#include <iostream>
using namespace std;
#include <string>
int main(){
    string s("a1b2c3d4e5c4");
    string flag;
    string::size_type position;
    position = s.find("c3");
    // 1.string中find()返回值是字母在母串中的位置（下标记录），如果没有找到，那么会返回一个特别的标记npos。（返回值可以看成是一个int型的数）
    if(position != s.npos){
        cout << "position is :" << position << endl;
        cout << s.npos << endl;
    }else{
        printf("NOT found the flag\n");
    }
    // 2.返回子串出现在母串中的首次出现的位置，和最后一次出现的位置。
    flag = 'c';
    position = s.find_first_of(flag);
    cout << "s.find_first_of(flag) is :" << position << endl;
    position = s.find_last_of(flag);
    cout << "s.find_last_of(flag) is :" << position << endl;
    // 3.查找某一给定位置后的子串的位置
    position = s.find("b", 5);
    cout << "s.find(b,5) is : " << position << endl;
    //4.查找所有子串在母串中出现的位置
    flag = "c";
    position = 0;
    int i = 1;
    while ((position = s.find(flag, position)) != string::npos)
    {
        cout << "position  " << i << " : " << position << endl;
        position++;
        i++;
    }
    // 5.反向查找子串在母串中出现的位置，通常我们可以这样来使用，当正向查找与反向查找得到的位置不相同说明子串不唯一。
    flag = "3";
    position = s.rfind(flag);
    cout << "s.rfind(flag) " << position << endl;
}