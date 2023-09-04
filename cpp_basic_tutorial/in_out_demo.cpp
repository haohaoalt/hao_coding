#include <iostream>
#include <sstream>
using namespace std;
#include <string>
int main(){
    string s,tmp;
    getline(cin,s);
    stringstream ss(s);
    while(ss >> tmp){
        cout << tmp << endl;
    }
    cout << s << endl;

}