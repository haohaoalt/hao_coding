#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    // 定义一个vector对象
    vector<string> vec;
    vec.push_back("hello");
    vec.push_back("world");

    // 输出vector中的元素
    cout << "Original vector:" << endl;
    for (auto& s : vec) {
        cout << s << " ";
    }
    cout << endl;

    // 移动vector对象到另一个vector对象中
    vector<string> vec2 = move(vec);

    // 输出移动后的vector中的元素
    cout << "Moved vector:" << endl;
    for (auto& s : vec2) {
        cout << s << " ";
    }
    cout << endl;

    // 输出原始vector中的元素（已经被移动）
    cout << "Original vector after move:" << endl;
    for (auto& s : vec) {
        cout << s << " ";
    }
    cout << endl;

    return 0;
}

