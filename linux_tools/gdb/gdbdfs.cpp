/*
 * @Author: https://github.com/haohaoalt
 * @Date: 2023-08-20 19:31:07
 * @LastEditors: haohaoalt haohaoalt@163.com
 * @LastEditTime: 2023-08-20 19:31:29
 * @FilePath: /hao_coding/linux_tools/gdb/gdbdfs.cpp
 * @Description: 
 * Copyright (c) 2023 by haohaoalt@163.com, All Rights Reserved. 
 */
#include <iostream>
#include <algorithm>

using namespace std;

const int N = 10;

int n;
int a[N];
int path[N];
bool st[N];

void dfs(int u)
{
    if (u >= n)
    {
        for (int i = 0; i < n; i++)
            cout << path[i] << ' ';
        cout << endl;
        return;
    }

    for (int i = 0; i < n; i++)
    {
        if (!st[i])
        {
            path[u] = a[i];
            st[i] = true;
            dfs(u + 1);
            st[i] = false;
            while (i + 1 < n && a[i + 1] == a[i])
                i++;
        }
    }
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    dfs(0);
    return 0;
}