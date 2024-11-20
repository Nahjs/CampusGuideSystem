#include "Choose.h"
#include "ui_Choose.h"
#include "process.h"
#include "distanceData.h"
#include <QCheckBox>

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
    connect(ui->ptb,SIGNAL(clicked(bool)),this,SLOT(doProcessAddStartPlace(bool)));
    connect(ui->pbt2,SIGNAL(clicked(bool)),this,SLOT(doProcessAddOtherPlace(bool)));
    connect(ui->ptb_clear,SIGNAL(clicked(bool)),this,SLOT(doProcessClean(bool)));
    connect(ui->pbt2,SIGNAL(clicked(bool)),this,SLOT(doProcessFindRoute(bool)));
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

//回到起点的DP算法
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
    fp.open("route.txt", ios::out | ios::in);
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
        sRoute = sRoute + QString::number(selectedPlace[x] + 1) + " (" + placeName[selectedPlace[x]] + ") -> ";
        fp << selectedPlace[x] + 1 << " (" << placeName[selectedPlace[x]].toStdString() << ") -> ";
    }
    walkRoute[d] = selectedPlace[0] + 1;
    sRoute = sRoute + QString::number(selectedPlace[0] + 1) + " (" + placeName[selectedPlace[0]] + ")";
    ui->label_route->setText(sRoute);
    fp << selectedPlace[0] + 1 << " (" << placeName[selectedPlace[0]].toStdString() << ")" << std::endl;
    fp.close();
}

/*
//不回到起点的DP算法
void Choose::GetShortestDistance() {
    int i, j, k; // 用于遍历行、列和中间节点

    // 初始化第一列
    for (i = 0; i < selectedPlaceNum; i++) {
        dp[i][0].distance = 0; // 从第 i 个地点到第 i 个地点的距离为 0
        dp[i][0].pre = -1;     // 前一个地点的下标为 -1，表示起点
        dp[i][0].now = i;      // 当前地点的下标为 i
    }

    // 初始化剩余列
    for (j = 1; j < (1 << (selectedPlaceNum - 1)); j++) { // j 表示列
        for (i = 0; i < selectedPlaceNum; i++) {          // i 表示行
            dp[i][j].distance = 0x7ffff; // 设 0x7ffff 为无穷大

            // 对于数字 x，要看它的第 i 位是不是 1，通过判断布尔表达式 (((x >> (i - 1)) & 1) == 1) 的真值来实现
            if (((j >> (i - 1)) & 1) == 1) { // 如果状态 j 中已经包含了地点 i，则跳过
                continue;
            }

            // 如果通过地点 k 到达地点 i 的距离更短，则更新 dp[i][j] 的距离和路径信息
            for (k = 0; k < selectedPlaceNum; k++) { // k 从 0 开始，包括起点
                if (((j >> (k - 1)) & 1) == 0) { // 判断地点选择集合中是否包含 k 地点
                    continue;
                }
                if (dp[i][j].distance > matrix[i][k] + dp[k][j ^ (1 << (k - 1))].distance) {
                    dp[i][j].distance = matrix[i][k] + dp[k][j ^ (1 << (k - 1))].distance;
                    dp[i][j].pre = k;
                    dp[i][j].now = i;
                    dp[i][j].next = j ^ (1 << (k - 1));
                }
            }
        }
    }

    // 找到最终的最短距离
    shortestDistance = 0x7ffff;
    int finalPlace = -1;
    for (i = 0; i < selectedPlaceNum; i++) {
        if (dp[i][(1 << (selectedPlaceNum - 1)) - 1].distance < shortestDistance) {
            shortestDistance = dp[i][(1 << (selectedPlaceNum - 1)) - 1].distance;
            finalPlace = i;
        }
    }
}
void Choose::GetRoute() {
    fp.open("route.txt", std::ios::out | std::ios::in);

    int finalPlace = -1;
    for (int i = 0; i < selectedPlaceNum; i++) {
        if (dp[i][(1 << (selectedPlaceNum - 1)) - 1].distance == shortestDistance) {
            finalPlace = i;
            break;
        }
    }

    int i = finalPlace, j = (1 << (selectedPlaceNum - 1)) - 1;
    std::queue<int> route;

    // 回溯路径
    for (int k = 0; k < selectedPlaceNum; k++) {
        route.push(dp[i][j].pre);
        int temp_i = dp[i][j].now;
        int temp_j = dp[i][j].next;
        i = temp_i;
        j = temp_j;
    }

    int d = 0;
    QString sRoute{""};
    QString uiRoute{""};
    int totalDistance = 0;
    int totalTime = 0;
    const int speed = 70; // 每分钟70米

    // 输出路径信息
    while (!route.empty()) {
        int x = route.front();
        route.pop();
        walkRoute[d] = selectedPlace[x] + 1;
        d++;
        sRoute += QString::number(selectedPlace[x] + 1) + " (" + placeName[selectedPlace[x]] + ") -> ";
        fp << selectedPlace[x] + 1 << " (" << placeName[selectedPlace[x]].toStdString() << ") -> ";

        // 如果不是最后一个景点，添加到下一个景点的距离和时间
        if (route.size() > 1) { // 确保还有下一个景点
            int nextPlace = route.front();
            int distanceToNextPlace = matrix[x][nextPlace];
            int timeToNextPlace = (distanceToNextPlace + speed - 1) / speed; // 向上取整
            totalDistance += distanceToNextPlace;
            totalTime += timeToNextPlace;

            // 构建UI显示的详细路径信息
            uiRoute +=  QString::fromStdString(placeName[selectedPlace[x]].toStdString().c_str() )+ " -> " + placeName[selectedPlace[nextPlace]].toStdString().c_str() + "  " + QString::number(distanceToNextPlace) + "m  " + QString::number(timeToNextPlace) + "分钟\n";
        }
    }

    // 添加最后一个景点信息
    int lastPlace = route.front();
    sRoute += QString::number(selectedPlace[lastPlace] + 1) + " (" + placeName[selectedPlace[lastPlace]] + ")";
    fp << selectedPlace[lastPlace] + 1 << " (" << placeName[selectedPlace[lastPlace]].toStdString() << ")";

    // 添加总长度和总时间信息
    uiRoute +=  QString::fromStdString(placeName[selectedPlace[lastPlace]].toStdString().c_str() )+ "\n总长度: " + QString::number(totalDistance) + "m\n总时间: " + QString::number(totalTime) + "分钟";

    // 设置UI标签显示详细路径信息
    ui->label_route->setText(uiRoute);

    // 关闭文件
    fp.close();
}
*/

/*
// DFS算法
void Choose::DFS(int currentPlace, int visitedCount, int currentDistance, std::vector<int>& currentRoute) {
    if (visitedCount == selectedPlaceNum) {
        if (currentDistance < minDistance) {
            minDistance = currentDistance;
            minRoute = currentRoute;
        }
        return;
    }

    for (int nextPlace = 0; nextPlace < selectedPlaceNum; nextPlace++) {
        if (!visited[nextPlace]) {
            visited[nextPlace] = true;
            currentRoute.push_back(nextPlace);
            DFS(nextPlace, visitedCount + 1, currentDistance + matrix[currentPlace][nextPlace], currentRoute);
            currentRoute.pop_back();
            visited[nextPlace] = false;
        }
    }
}

void Choose::GetShortestDistance() {
    minDistance = INT_MAX; // 仍然初始化为最大值，但仅用于比较路径长度
    std::vector<int> currentRoute;
    std::fill(std::begin(visited), std::end(visited), false);
    visited[0] = true;
    currentRoute.push_back(0);

    DFS(0, 1, 0, currentRoute);
    shortestDistance = minDistance;
}

void Choose::GetRoute() {
    fp.open("route.txt", ios::out | ios::in);

    int d = 0;
    QString sRoute{""};
    QString uiRoute{""};
    int totalDistance = 0;
    int totalTime = 0;
    const int speed = 70; // 每分钟70米

    for (int i = 0; i < minRoute.size(); i++) {
        int currentPlace = minRoute[i];
        int currentPlaceIndex = selectedPlace[currentPlace];

        walkRoute[d] = selectedPlace[minRoute[i]] + 1;
        d++;

        // 添加景点信息
        sRoute = sRoute + QString::number(selectedPlace[minRoute[i]] + 1) + " (" + QString::fromStdString(placeName[selectedPlace[minRoute[i]]].toStdString()) + ")";
        fp << selectedPlace[minRoute[i]] + 1 << " (" << placeName[selectedPlace[minRoute[i]]].toStdString() << ")";

        // 如果不是最后一个景点，添加到下一个景点的距离
        if (i < minRoute.size() - 1) {
            sRoute = sRoute + " -> ";
            fp << " -> ";

            int nextPlace = minRoute[i + 1];
            int nextPlaceIndex = selectedPlace[nextPlace];
            int distanceToNextPlace = matrix[currentPlace][nextPlace];
            int timeToNextPlace = (distanceToNextPlace + speed - 1) / speed; // 向上取整
            totalDistance += distanceToNextPlace;
            totalTime += timeToNextPlace;

            uiRoute +=  QString::fromStdString(placeName[currentPlaceIndex].toStdString().c_str()) + " -> " + placeName[nextPlaceIndex].toStdString().c_str() + "  " + QString::number(distanceToNextPlace) + "m\n";
        } else {
            // 到达最后一个景点
            uiRoute +=  "\n总距离: " + QString::number(totalDistance) + "m ，预计步行时间为: " + QString::number(totalTime) + "分钟";
        }

    }
    ui->label_route->setText(uiRoute);
    fp.close();
}
*/

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
    ui->label_3->setText("");
    ui->textEdit->clear();
    for (int i = 1; i <= 15; ++i) {
        QCheckBox* checkBox = findChild<QCheckBox*>("checkBox_" + QString::number(i));
        if (checkBox) {
            checkBox->setEnabled(true);
        }
    }
}

void Choose::doProcessAddStartPlace(bool){
    QString s=ui->textEdit->toPlainText();
    int inputNum = s.toInt();
        selectedPlace[selectedPlaceNum] = inputNum-1;
        selectedPlaceNum++;
    QString routeText ="成功添加起点："+ s+" "+placeName[inputNum - 1] ;
    ui->label_3->setText(routeText);

    // Enable all checkboxes
    for (int i = 1; i <= 15; ++i) {
        QCheckBox* checkBox = findChild<QCheckBox*>("checkBox_" + QString::number(i));
        if (checkBox) {
            checkBox->setEnabled(true);
        }
    }
    // Disable the corresponding checkbox
    QCheckBox* checkBox = findChild<QCheckBox*>("checkBox_" + QString::number(inputNum));
    if (checkBox) {
        checkBox->setEnabled(false);
    }
}

void Choose::doProcessAddOtherPlace(bool){
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
   // txt.append("规划的路线为:\n");
    QString route1 = "";
    for(int i = 0; i < selectedPlaceNum; i++){
        route1.append(placeName[walkRoute[i]-1]);

    if(i < selectedPlaceNum-1)
        route1.append("->");
    }
    txt.append(route1);

   file.write(txt.toUtf8());
}







