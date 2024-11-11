#include "Choose.h"
#include "ui_Choose.h"
#include "process.h"
#include "distanceData.h"

#include <QString>
#include <QDebug>


Choose::Choose(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Choose)
{
    ui->setupUi(this);
    Init();
}
Choose::~Choose()
{
    delete ui;
}
void Choose::Init(){

    //connect(ui->pbt,SIGNAL(clicked(bool)),this,SLOT(doProcessAddStartPlace(bool)));
    connect(ui->pbt2,SIGNAL(clicked(bool)),this,SLOT(doProcessAddOtherPlaceAndStartTime(bool)));
    connect(ui->ptb_clear,SIGNAL(clicked(bool)),this,SLOT(doProcessClean(bool)));
    connect(ui->findroute,SIGNAL(clicked(bool)),this,SLOT(doProcessFindRoute(bool)));
    connect(this,SIGNAL(inputFile()),this,SLOT(doProcessInputFile()));
}

void Choose::InitMatrix(int map[15][15]){    //初始化所选择景点的距离矩阵，及压缩矩阵
    int i, j;
    matrix = (int**)new int* [selectedPlaceNum];              //初始化所选择景点的距离矩阵
    for (i = 0; i < selectedPlaceNum; i++)
        matrix[i] = new int[selectedPlaceNum];
    for(i=0;i<selectedPlaceNum;i++)
        for (j = 0; j < selectedPlaceNum; j++) {
            matrix[i][j] = map[selectedPlace[i]][selectedPlace[j]];
        }

    dp = new Process* [selectedPlaceNum];                      //为压缩矩阵申请空间
    for (int i = 0; i < selectedPlaceNum; i++) {
        dp[i] = new Process[1 << (selectedPlaceNum - 1)];
    }
}

void Choose::GetShortestDistance(){
    int i, j, k;//用于遍历行、列和中间节点

    //初始化第一列
    for (i = 0; i < selectedPlaceNum; i++)
    {
        dp[i][0].distance = matrix[i][0];           //设置从第 i 个地点到第 0 个地点的距离。
        dp[i][0].pre = i;                          //设置前一个地点的下标为当前的 i
        dp[i][0].now = 0;                           //设置当前地点的下标为 0
    }

    //初始化剩余列
    for (j = 1; j < (1 << (selectedPlaceNum - 1)); j++)    //j表示列
    {
        for (i = 0; i < selectedPlaceNum; i++)            //i表示行
        {
            dp[i][j].distance = 0x7ffff;//设0x7ffff为无穷大

            //对于数字x，要看它的第i位是不是1，通过判断布尔表达式 (((x >> (i - 1) ) & 1) == 1的真值来实现
            if (((j >> (i - 1)) & 1) == 1)//如果状态 j 中已经包含了地点 i，则跳过。
            {
                continue;
            }

            //如果通过地点 k 到达地点 i 的距离更短，则更新 dp[i][j] 的距离和路径信息。
            for (k = 1; k < selectedPlaceNum; k++)
            {
                //不能达到k城市
                if (((j >> (k - 1)) & 1) == 0)           //判断地点选择集合中是否包含k城市
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
    shortestDistance=dp[0][(1 << (selectedPlaceNum - 1)) - 1].distance;//(1 << (selectedPlaceNum - 1)) - 1 表示所有地点都已访问过的状态

}

void Choose::GetRoute(){
    fp.open("D:\\CLion\\CampusGuide\\route.txt", ios::out | ios::in);
    int i = 0,j= (1 << (selectedPlaceNum - 1)) - 1;
    int temp_i, temp_j;
    for (int k = 0; k < selectedPlaceNum ; k++) {
        route.push(dp[i][j].pre);                     //从出发地点开始，依次将pre push进队列
        temp_i = dp[i][j].now;
        temp_j = dp[i][j].next;
        i = temp_i;
        j = temp_j;
    }

   int d=0;                                          //输出路径信息
   QString sRoute{""};
    while (!route.empty()) {
        int x = route.front();
        route.pop();
        walkRoute[d] = selectedPlace[x]+1;
        d++;
        sRoute = sRoute + QString::number(selectedPlace[x]+1)+" -> ";        
        fp << selectedPlace[x] + 1 << " -> ";
    }
    walkRoute[d] = selectedPlace[0]+1;
    sRoute = sRoute + QString::number(selectedPlace[0]+1);
    ui->label_route->setText(sRoute);
    fp << selectedPlace[0] + 1 << endl;
    fp.close();
}

void Choose::clean(){
    ui->checkBox_1->setCheckState(Qt::Unchecked);
    ui->checkBox_2->setCheckState(Qt::Unchecked);
    ui->checkBox_3->setCheckState(Qt::Unchecked);
    ui->checkBox_4->setCheckState(Qt::Unchecked);
    ui->checkBox_5->setCheckState(Qt::Unchecked);
    ui->checkBox_6->setCheckState(Qt::Unchecked);
    ui->checkBox_7->setCheckState(Qt::Unchecked);
    ui->checkBox_8->setCheckState(Qt::Unchecked);
    ui->checkBox_9->setCheckState(Qt::Unchecked);
    ui->checkBox_10->setCheckState(Qt::Unchecked);
    ui->checkBox_11->setCheckState(Qt::Unchecked);
    ui->checkBox_12->setCheckState(Qt::Unchecked);
    ui->checkBox_13->setCheckState(Qt::Unchecked);
    ui->checkBox_14->setCheckState(Qt::Unchecked);
    ui->checkBox_15->setCheckState(Qt::Unchecked);
    for(int i = 0; i < 20; i++){
        selectedPlace[i] = 0;
        walkRoute[i] = 0;
    }
    for(int i = 0; i < selectedPlaceNum; i++)
        for (int j = 0; j < selectedPlaceNum; j++) {
            matrix[i][j] = 0;
        }
    shortestDistance = 0;
    selectedPlaceNum = 0;
    ui->label_route->setText("");
}

void Choose::doProcessAddStartPlace(bool){
    QString s=ui->textEdit->toPlainText();
    int inputNum = s.toInt();
    //用户应该输入：0,6,10,30,28,17,24,63,60,41,27,42,25,12,58
        selectedPlace[selectedPlaceNum] = inputNum-1;
        selectedPlaceNum++;
    }

void Choose::doProcessAddOtherPlaceAndStartTime(bool){
    //输入后续点
    if(ui->checkBox_1->isChecked()){
        selectedPlace[selectedPlaceNum] = 0;     //0为该地点对应的下标
        selectedPlaceNum++;
    }
    if(ui->checkBox_2->isChecked()){
        selectedPlace[selectedPlaceNum] = 1;
        selectedPlaceNum++;
    }
    if(ui->checkBox_3->isChecked()){
        selectedPlace[selectedPlaceNum] = 2;
        selectedPlaceNum++;
    }
    if(ui->checkBox_4->isChecked()){
        selectedPlace[selectedPlaceNum] = 3;
        selectedPlaceNum++;
    }
    if(ui->checkBox_5->isChecked()){
        selectedPlace[selectedPlaceNum] = 4;
        selectedPlaceNum++;
    }
    if(ui->checkBox_6->isChecked()){
        selectedPlace[selectedPlaceNum] = 5;
        selectedPlaceNum++;
    }
    if(ui->checkBox_7->isChecked()){
        selectedPlace[selectedPlaceNum] = 6;
        selectedPlaceNum++;
    }
    if(ui->checkBox_8->isChecked()){
        selectedPlace[selectedPlaceNum] = 7;
        selectedPlaceNum++;
    }
    if(ui->checkBox_9->isChecked()){
        selectedPlace[selectedPlaceNum] = 8;
        selectedPlaceNum++;
    }
    if(ui->checkBox_10->isChecked()){
        selectedPlace[selectedPlaceNum] = 9;
        selectedPlaceNum++;
    }
    if(ui->checkBox_11->isChecked()){
        selectedPlace[selectedPlaceNum] = 10;
        selectedPlaceNum++;
    }
    if(ui->checkBox_12->isChecked()){
        selectedPlace[selectedPlaceNum] = 11;
        selectedPlaceNum++;
    }
    if(ui->checkBox_13->isChecked()){
        selectedPlace[selectedPlaceNum] = 12;
        selectedPlaceNum++;
    }
    if(ui->checkBox_14->isChecked()){
        selectedPlace[selectedPlaceNum] = 13;
        selectedPlaceNum++;
    }
    if(ui->checkBox_15->isChecked()){
        selectedPlace[selectedPlaceNum] = 14;
        selectedPlaceNum++;
    }
}

void Choose::doProcessFindRoute(bool){     //初始化所选择景点的距离矩阵，及压缩矩阵，发送信号，进行路径选择
    QString s{""};
    InitMatrix(BJTUmap);
    GetShortestDistance();
    GetRoute();

    // 发射传递参数的信号
    emit signalDataToInform(selectedPlaceNum);
    emit SignalWalkRouteToInform(walkRoute[0],walkRoute[1],walkRoute[2],walkRoute[3],walkRoute[4],walkRoute[5],walkRoute[6],walkRoute[7],walkRoute[8],
            walkRoute[9],walkRoute[10],walkRoute[11],walkRoute[12],walkRoute[13],walkRoute[14],walkRoute[15],walkRoute[16],walkRoute[17],
            walkRoute[18],walkRoute[19]);
    emit inputFile();

}
void Choose::doProcessAddMap(bool){
    emit AddMap();
}

void Choose::doProcessClean(bool){
    clean();
}

void Choose::doProcessInputFile(){
    QString txt = "";

    QFile file("D:\\CLion\\CampusGuide\\route.txt");
    file.open(QIODevice::WriteOnly | QIODevice::Text);

    txt.append("您所查询的路径为:\n");
    QString route1 = "";
    for(int i = 0; i < selectedPlaceNum; i++){
        route1.append(placeName[walkRoute[i]-1]+"->");
    }
    route1.append(placeName[walkRoute[0]-1]+"\n");
    txt.append(route1);

   file.write(txt.toUtf8());
}







