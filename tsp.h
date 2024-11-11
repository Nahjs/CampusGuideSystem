#ifndef TSP_H
#define TSP_H
#include "process.h"
#include <queue>
#include <fstream>
#include <iostream>

#define allPlaceNum 15
using namespace std;

class TSP {
private:
    int** matrix;                   //所选地点之间距离  用二维矩阵存储
    Process** dp;                         //状态压缩矩阵(二维数组)

public:
    int selectedPlace[allPlaceNum]{0};    //用于记录已选择的地点序号 便于后续赋值和行走路径地点确认
    int selectedPlaceNum{0};			//所选地点个数
    queue <int> route;                   //保存具体路径
    fstream fp;

    TSP(int map[allPlaceNum][allPlaceNum]);//这个数组包含了所有地点之间的距离信息。
    void printSelectedPlace();           //打印matrix矩阵（已选择景点的距离矩阵）
    void getShortestDistance();         //动态规划求最短路径距离
    void getRoute();                    //求具体路径
};
#endif // TSP_H
