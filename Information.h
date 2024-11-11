#ifndef INFORMATION_H
#define INFORMATION_H
#include <QWidget>
#include <QGuiApplication>
#include "Map.h"
#include "Choose.h"
#include "Inquiry.h"

namespace Ui {
class Information;
}

class Information : public QWidget
{
    Q_OBJECT

public:
    explicit Information(QWidget *parent = nullptr);
    ~Information();

signals:
    void SignalDataToMap(int);
    void SignalWalkRouteToMap(int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int);    //传递walkRoute[allPlaceNum]
    void SignalArriveTimeToMap(QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString);    //传递arriveTime[allPlaceNum]
    void SignalStayTimeRouteToMap(int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int);    //传递stayTime_route[allPlaceNum]

private slots:
    void ToChoose(bool);
    void ToIntroduction(bool);
    void ToPath(bool);
    void BjtuMapReturnToThis();

    //用于传递参数的槽
    void doProcessDataToInform(int);
    void doProcessSaveWalkRouteToInform(int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int);

private:
    Ui::Information *ui;
    Choose *choose;
    Inquiry *inquiry;
    Map *map;
    int flag_choose = 0; //标记信息录入界面是否被选中
    int flag_inquiry = 0;   //标记信息查询界面是否被选中
    int flag_path = 0;    //标记路线推荐界面是否被选中

    int walkRoute[allPlaceNum];
    QList<QPushButton*> spotButtons;  // 用于存储景点按钮的列表
    void Init();
};

#endif // INFORMATION_H
