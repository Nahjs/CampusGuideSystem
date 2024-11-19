#ifndef ADDINFORM_H
#define ADDINFORM_H

#include <QButtonGroup>
#include <QMessageBox>
#include <QFile>

#include "process.h"
#include <queue>
#include <fstream>
#include <iostream>
#include <vector>
#define allPlaceNum 20
using namespace::std;

namespace Ui {
class Choose;
}

class Choose : public QWidget
{
    Q_OBJECT

public:
    explicit Choose(QWidget *parent = nullptr);
    ~Choose();

    int selectedPlace[allPlaceNum]{0};           //用于记录已选择的地点序号
    int selectedPlaceNum{0};                     //所选地点个数
    queue <int> route;                   //保存具体路径
    int walkRoute[allPlaceNum];        //存储路径
    QString placeName[allPlaceNum]={"西操","家属区","东门","思源楼","明湖","逸夫楼","南门","东教一楼","交大公交站",
                                   "学生活动中心","图书馆","天佑会堂","嘉园","校医院","麦当劳"};

    fstream fp;

    // DFS 相关的成员变量
    int minDistance{INT_MAX};      // 最短路径
    bool visited[allPlaceNum];     // 用于标记景点是否已访问过
    std::vector<int> minRoute;     // 最短路径序列

signals:
    void AddMap();
    void SignalDataToMap(int walkRoute[allPlaceNum]);
   void signalDataToInform(int);
    void SignalWalkRouteToInform(int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int);    //传递walkRoute[allPlaceNum]
     void inputFile();

private slots:
    void doProcessAddStartPlace(bool);       //接受“添加”按钮的槽,读取LineText,增加起始地点
    void doProcessAddOtherPlace(bool);

    void doProcessFindRoute(bool);       //初始化所选择景点的距离矩阵，及压缩矩阵，发送信号，进行路径选择
    void doProcessAddMap(bool);              //显示地图的槽
    void doProcessClean(bool);           //清空所有信息
    void doProcessInputFile();           //将信息输入进txt文件

private:
    Ui::Choose *ui;
    int inputNum;              //每次输入LineEdit的数字
    int** matrix;              //所选地点之间距离  用二维矩阵存储
    Process** dp;              //状态压缩矩阵
    int shortestDistance{0};   //所走路径最短距离

    void Init();
    void InitMatrix(int map[15][15]);

    void DFS(int currentPlace, int visitedCount, int currentDistance, std::vector<int> &currentRoute);

    void GetShortestDistance();              //选择最短路径
    void GetRoute();                      //求具体路径
    void Output();
    void clean();


};

#endif // ADDINFORM_H
