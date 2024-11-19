#include <iostream>
#include <cmath>
#include "tsp.h"
#include "process.h"
#include <QDebug>
using namespace std;
/*
TSP::TSP(int map[allPlaceNum][allPlaceNum]) {

    int i, j;                                       //初始化所选择景点的距离矩阵
    matrix = (int**)new int* [selectedPlaceNum];
    for (i = 0; i < selectedPlaceNum; i++)
        matrix[i] = new int[selectedPlaceNum];
    for(i=0;i<selectedPlaceNum;i++)
      //将 map 中对应位置的距离复制到 matrix 中
        for (j = 0; j < selectedPlaceNum; j++) {
            matrix[i][j] = map[selectedPlace[i]][selectedPlace[j]];
        }

    dp = new Process* [selectedPlaceNum];
    for (int i = 0; i < selectedPlaceNum; i++) {
        dp[i] = new Process[1 << (selectedPlaceNum - 1)];
    }
}

void TSP::printSelectedPlace() {

    cout << "您选择的景点距离矩阵如下：" << endl;
    for (int i = 0; i < selectedPlaceNum; i++) {
        for (int j = 0; j < selectedPlaceNum; j++) {
            cout << matrix[i][j] << "  ";
        }
        cout << endl;
    }
    cout << endl;
}

void TSP::getShortestDistance() {
    int i, j, k;
    //初始化第一列
    for (i = 0; i < selectedPlaceNum; i++)
    {
        dp[i][0].distance = matrix[i][0];
        dp[i][0].pre = i;
        dp[i][0].now = 0;
    }
    //初始化剩余列
    for (j = 1; j < (1 << (selectedPlaceNum - 1)); j++)
    {
        for (i = 0; i < selectedPlaceNum; i++)
        {
            dp[i][j].distance = 0x7ffff;//设0x7ffff为无穷大

            //对于数字x，要看它的第i位是不是1，通过判断布尔表达式 (((x >> (i - 1) ) & 1) == 1的真值来实现

            if (((j >> (i - 1)) & 1) == 1)
            {
                continue;
            }
            for (k = 1; k < selectedPlaceNum; k++)
            {
                //不能达到k城市
                if (((j >> (k - 1)) & 1) == 0)
                {
                    continue;
                }
                if (dp[i][j].distance > matrix[i][k] + dp[k][j ^ (1 << (k - 1))].distance)
                {
                    dp[i][j].distance = matrix[i][k] + dp[k][j ^ (1 << (k - 1))].distance;
                    dp[i][j].pre = i;
                    dp[i][j].now = k;
                    dp[i][j].next = j ^ (1 << (k - 1));

                }
            }
        }
    }
    cout << "最短路径为" << dp[0][(1 << (selectedPlaceNum - 1)) - 1].distance << endl;
    cout << endl;

}


void TSP::getRoute() {
    fp.open("route.txt", ios::out | ios::in);
    int i = 0,j= (1 << (selectedPlaceNum - 1)) - 1;
    int temp_i, temp_j;
   // double each_time = 0;
    for (int k = 0; k < selectedPlaceNum ; k++) {
        route.push(dp[i][j].pre);//从终点开始回溯，将路径节点依次加入 route 队列中。
        temp_i = dp[i][j].now;
        temp_j = dp[i][j].next;
        i = temp_i;
        j = temp_j;
    }

    cout << "具体路径为：" << endl;
    while (!route.empty()) {
        int x = route.front();//从 route 队列中取出节点，按顺序打印路径。
        route.pop();
        cout << selectedPlace[x]+1 << " -> ";
        fp << selectedPlace[x] + 1 << " -> ";
    }
    cout << selectedPlace[0]+1<<endl;
    fp << selectedPlace[0] + 1 << endl;
    cout << endl;
    fp.close();
}


*/



TSP::TSP(int map[allPlaceNum][allPlaceNum]) {
    int i, j; // 初始化所选择景点的距离矩阵
    matrix = new int*[selectedPlaceNum];
    for (i = 0; i < selectedPlaceNum; i++)
        matrix[i] = new int[selectedPlaceNum];
    for(i = 0; i < selectedPlaceNum; i++)
        // 将 map 中对应位置的距离复制到 matrix 中
        for (j = 0; j < selectedPlaceNum; j++) {
            matrix[i][j] = map[selectedPlace[i]][selectedPlace[j]];
        }

    // 初始化 DFS 的一些数据结构
    visited = new bool[selectedPlaceNum]; // 标记每个城市是否被访问过
    bestDistance = INT_MAX; // 最短路径的距离
    bestRoute.clear(); // 最短路径的路线

    // 初始化状态压缩矩阵
    dp = new Process*[selectedPlaceNum];
    for (int i = 0; i < selectedPlaceNum; i++) {
        dp[i] = new Process[1 << (selectedPlaceNum - 1)];
    }

    // 打开文件
    fp.open("D:\\CLion\\CampusGuide\\route.txt", ios::out);
}

void TSP::printSelectedPlace() {
    cout << "您选择的景点距离矩阵如下：" << endl;
    for (int i = 0; i < selectedPlaceNum; i++) {
        for (int j = 0; j < selectedPlaceNum; j++) {
            cout << matrix[i][j] << "  ";
        }
        cout << endl;
    }
    cout << endl;
}

// 深度优先搜索 (DFS) 函数
void TSP::DFS(int currentCity, int visitedCount, int currentDistance, vector<int>& currentRoute) {
    if (visitedCount == selectedPlaceNum) {
        // 如果所有城市都访问过了，返回到起始城市
        currentDistance += matrix[currentCity][0]; // 回到起点的距离

        // 写入文件
        fp << "Path: ";
        for (int city : currentRoute) {
            fp << selectedPlace[city] + 1 << " -> ";
        }
        fp << selectedPlace[0] + 1 << " Distance: " << currentDistance << endl;

        if (currentDistance < bestDistance) {
            bestDistance = currentDistance;
            bestRoute = currentRoute; // 更新最佳路径
            bestRoute.push_back(0); // 将起点也加入路径
        }
        return;
    }

    for (int nextCity = 0; nextCity < selectedPlaceNum; nextCity++) {
        if (!visited[nextCity]) {
            // 如果下一个城市没有被访问过
            visited[nextCity] = true; // 标记为已访问
            currentRoute.push_back(nextCity); // 加入当前路径
            DFS(nextCity, visitedCount + 1, currentDistance + matrix[currentCity][nextCity], currentRoute);
            currentRoute.pop_back(); // 回溯，移除当前城市
            visited[nextCity] = false; // 恢复为未访问状态
        }
    }
}

void TSP::getShortestDistance() {
    // 初始化为未访问状态
    fill(visited, visited + selectedPlaceNum, false);
    vector<int> currentRoute;
    visited[0] = true; // 从城市 0 开始
    currentRoute.push_back(0);

    // 开始深度优先搜索
    DFS(0, 1, 0, currentRoute);

    fp << "最短路径为 " << bestDistance << endl;
}

void TSP::getRoute() {
    fp << "具体路径为：" << endl;

    // 输出路径
    for (int i = 0; i < bestRoute.size(); i++) {
        fp << selectedPlace[bestRoute[i]] + 1 << " -> ";
    }
    fp << selectedPlace[bestRoute[0]] + 1 << endl; // 最后回到起点

    fp.close();
}

void TSP::getAllRoutes() {
    // 初始化为未访问状态
    fill(visited, visited + selectedPlaceNum, false);
    vector<int> currentRoute;
    visited[0] = true; // 从城市 0 开始
    currentRoute.push_back(0);

    // 开始深度优先搜索以获取所有路径
    DFS(0, 1, 0, currentRoute);
}