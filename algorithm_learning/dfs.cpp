#include <bits/stdc++.h>

using namespace std;

const int N = 7; // 给定的数字最大为7
int path[N];     // 用来存储排列过程中每个位置的数字
bool st[N];      // 标记每一个数字在枚举时的状态
int n;           // 输入值

void dfs(int u)
{
    if (u == n) // 说明排列数字的时候已经每个空位都已经排列好了数字
    {
        for (int i = 0; i < n; i++)
            printf("%d ", path[i]);
        printf("\n"); // 遍历每个位置上的数字然后输出
    }

    for (int i = 1; i <= n; i++)
    {
        if (!st[i]) // 如果有数字的状态是未填
                    // 说明数字排列过程中有空位没有填满则会执行该语句
        {
            path[u] = i;   // 将该数字填进排列位置中
            st[i] = true;  // 标记该数字为已用
            dfs(u + 1);    // 递归完成下一个位置的数字的填写
            st[i] = false; // 恢复现场
        }
    }
}

int main()
{
    scanf("%d", &n); // 输入排列数字的最大数值

    dfs(0); // 深度优先搜索

    return 0;
}