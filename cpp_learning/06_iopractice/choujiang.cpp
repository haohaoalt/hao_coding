/*
 * @Author: https://github.com/haohaoalt
 * @Date: 2023-08-17 14:55:48
 * @LastEditors: haohaoalt haohaoalt@163.com
 * @LastEditTime: 2023-08-17 14:56:27
 * @FilePath: /hao_coding/cpp_learning/06 iopractice/choujiang.cpp
 * @Description: 
 * Copyright (c) 2023 by haohaoalt@163.com, All Rights Reserved. 
 */
#include <iostream>
#include <cstring>
#include <algorithm>
#include <fstream>
#include <vector>
#include <ctime>
#include <unistd.h>

using namespace std;

struct Player
{
    int user_id;
    string name;
    bool has_selected;
};

vector<Player> players;

void select(string lesson)
{
    puts("**********************************");
    printf("获得《%s》激活码的幸运同学是：\n", lesson.c_str());

    sleep(1);
    for (int i = 0; i < 10; i++)
    {
        int k = rand() % players.size();
        auto &player = players[k];
        if (player.has_selected)
            continue;
        player.has_selected = true;
        printf("%-10d%s\n", player.user_id, player.name.c_str());
        break;
    }

    sleep(1);
    puts("*********************************\n\n\n");
}

int main()
{
    ifstream fin("users.txt");

    srand(time(0));

    int user_id;
    string name;
    while (fin >> user_id >> name)
        players.push_back({user_id, name});

    select("考研算法辅导课");
    select("Web应用课");

    return 0;
}