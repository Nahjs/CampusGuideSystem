#ifndef INFORMATION_H
#define INFORMATION_H
#include <QWidget>
#include <QGuiApplication>
#include "introduction.h"
#include <QPaintEvent>
#include <QPainter>
#include <QLabel>*
#include <qlistwidget.h>
#include <QPushButton>
#define allPoint 72
#define allPlaceNum 15

namespace Ui {
class Information;
}

class Information : public QWidget
{
    Q_OBJECT

public:
    explicit Information(QWidget *parent = nullptr);
    ~Information();
    void ShowIntroduction();

signals:
    void SignalDataToMap(int);
    void SignalWalkRouteToMap(int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int);    //传递walkRoute[allPlaceNum]
    void SignalArriveTimeToMap(QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString);    //传递arriveTime[allPlaceNum]
    void SignalStayTimeRouteToMap(int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int);    //传递stayTime_route[allPlaceNum]
    void ReturnToInquiry();

private slots:
   // void ToChoose(bool);
   // void ToPath(bool);
   // void ReturnToChoose();
    void doProcessAddPlace(bool);
    void doProcessOpenSchoolWeb(bool);

    void doProcessDataToMap(int);
    void doProcessSaveWalkRouteToMap(int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int);
    void doProcessReturnToInquiry(bool);

    //用于传递参数的槽
    void doProcessDataToInform(int);
    void doProcessSaveWalkRouteToInform(int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int);


    void onDFSButtonClicked();
    void onShortestPathButtonClicked();
    void onMSTButtonClicked();

protected:
    void paintEvent(QPaintEvent*event);

private:
    Ui::Information *ui;
   // Choose *choose;
   // bjtuMap *map;
    int flag_choose = 0; //标记信息录入界面是否被选中
    int flag_inquiry = 0;   //标记信息查询界面是否被选中
    int flag_path = 0;    //标记路线推荐界面是否被选中

    int selectedStart = -1;   // 用户选择的起点索引
    int selectedEnd = -1;     // 用户选择的终点索引
    QVector<int> path;  // 保存路径
    QVector<QVector<int>> allPaths;  // 存储所有路径
    QVector<QPair<int, int>> mstEdges;  // 保存最小生成树的边



    void DFS(int start, QVector<int> &visited, QVector<int> &path, QVector<QVector<int>> &allPaths);

    int calculatePathLength(const QVector<int> &path);

    void displayPathsAndLength(const QVector<QVector<int>> &allPaths);

    void onPathItemClicked(QListWidgetItem *item);

    QVector<int> parsePathString(const QString &pathStr);

    QPair<int, QVector<int>> dijkstra(int start, int end);

    QVector<QPair<int, int>> primMST();


    int walkRoute[allPlaceNum];
    QList<QPushButton*> spotButtons;  // 用于存储景点按钮的列表
    QList<QLabel*> spotPoints;  // 用于存储路线规划点的列表
    void Init();

    void onStartPointChanged(const QString &text);
    void updateEndComboBox(int excludeIndex);
    QStringList places = {"1 西操", "2 家属区", "3 东门", "4 思源楼", "5 明湖", "6 逸夫楼", "7 南门",
                          "8 东区一教", "9 交大公交站", "10 学活", "11 图书馆", "12 天佑会堂"};
    int place;   //地点编号 从1开始 对应右边提示
    QString introduction;
    PlaceIntro Intro[15];
    void InitIntroduction();
//图
    QPoint point[allPoint];            //存储所有的点
    int flag_point[allPoint][allPoint];   //点与点之间是否有连线标志位，如果有，值为1，否则为0
    int selectedPlaceNum{0};
    int s=4;
    int walk[4]={1,2,3,1};
    int a=1;
    int i,help;
    QWindow *window;
    QPixmap pic[allPlaceNum];
    QLabel *label[allPlaceNum];
    void InitPoint();
    void InitPic();
    void outputInformation();   //用于页面显示路径等信息
    void printPlaceOrder();

};

#endif // INFORMATION_H
