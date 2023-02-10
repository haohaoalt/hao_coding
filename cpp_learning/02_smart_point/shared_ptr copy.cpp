#include <iostream>
#include <memory>
using namespace std;
int main(){
    shared_ptr<int> ptr6(new int(2));
    shared_ptr<int> ptr7 = ptr6;
    return 0;
}