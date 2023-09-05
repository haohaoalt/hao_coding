#include <bits/stdc++.h>
#include <iostream>
const int N = 50;
using namespace std;
class Solution {

public:
    int climbStairs(int n) {
      
        // int f[N] = {0};
        vector<int> f;
        vector<int> b;
        cout << b.size() << endl;
        f.push_back(1);
        f.push_back(3);
        cout << f[0] << f[1] <<  endl;
        cout << f.size() << endl;
        f[0] = 1;
        f[1] = 2;
        for(int i = 2; i < n; i++){
            f[i] = f[i-1] + f[i-2];
        }
        return f[n-1];

    }
};
int main(){
    int n;
    cin >> n;
    Solution s;
    cout << s.climbStairs(n) << endl;

}