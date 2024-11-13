#include "bjtuMap.h"
#include "ui_bjtuMap.h"
#include <QDebug>
#include <QSize>


bjtuMap::bjtuMap(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::bjtuMap)
{
    ui->setupUi(this);
    Init();
}

bjtuMap::~bjtuMap()
{
    delete ui;
}

void bjtuMap::Init(){
    setAutoFillBackground(true);

    connect(ui->pushButton_return,SIGNAL(clicked(bool)),this,SLOT(doProcessReturnToInquiry(bool)));

    InitPoint();
    InitPic();

    ui->pushButton_email->hide();
    ui->pushButton_screen->hide();
    printPlaceOrder();
}

void bjtuMap::InitPoint(){
    //初始化各点的坐标
    point[0] = QPoint(140,120);//西操
    point[1] = QPoint(355,70);//家属区                 6
    point[2] = QPoint(590,85);//东门                  10
    point[3] = QPoint(250,180);//思源楼                30
    point[4] = QPoint(355,174);//明湖                 28
    point[5] = QPoint(481,210);//逸夫楼                17
    point[6] = QPoint(255,300);//南门                 24
    point[7] = QPoint(480,444);//东区一教               63
    point[8] = QPoint(320,432);//交大公交站              60
    point[9] = QPoint(75,200);//学活                     41
    point[10] = QPoint(430,174);//图书馆               27
    point[11] = QPoint(200,250);//天佑会堂              42
    point[12] = QPoint(320,310);//嘉园宿舍楼             25
    point[13] = QPoint(570,110);//校医院                  12
    point[14] = QPoint(270,368);//麦当劳                 58

    point[24] = QPoint(140,150);//西操入口处                1
    point[27] = QPoint(170,150);//西操出来左边第一个路口     2
    point[30] = QPoint(220,140);//西北门                   3
    point[28] = QPoint(220,90);//从西北门进右转弯处          4
    point[17] = QPoint(355,90);//家属区前                   5
    point[63] = QPoint(385,90);//16宿舍楼北西侧路口          7
    point[60] = QPoint(465,90);//16号楼北东侧路口             8
    point[41] = QPoint(555,90);//东门校医院路口               9
    point[42] = QPoint(555,110);//校医院前                   11
    point[25] = QPoint(555,145);//校医院南侧                 12
    point[58] = QPoint(465,145);//东1门                       14


    point[15] = QPoint(465,200);//图书馆与逸夫操场南路口
    point[16] = QPoint(555,200);//工程素质中心北
    point[18] = QPoint(465,255);//留园餐厅北
    point[19] = QPoint(555,255);//隧道中心北
    point[20] = QPoint(440,255);//专家公寓东
    point[21] = QPoint(440,280);//四食堂
    point[22] = QPoint(326,280);//嘉园入口
    point[23] = QPoint(255,280);//小树林东南侧
    point[26] = QPoint(385,200);//明湖图书馆路口
    point[29] = QPoint(250,200);//思源楼前
    point[31] = QPoint(220,200);//思西思源路口
    point[32] = QPoint(277,200);//思源思东路口
    point[33] = QPoint(277,140);//思源思东路口向北
    point[34] = QPoint(385,140);//明湖餐厅路口
    point[35] = QPoint(409,118);//一餐厅（明湖餐厅）

    point[36] = QPoint(335,140);//管理楼
    point[37] = QPoint(335,200);//思东明湖路口
    point[38] = QPoint(170,200);//9号办公楼东
    point[39] = QPoint(170,210);//去学活
    point[40] = QPoint(120,210);//学活前



    point[43] = QPoint(250,250);//校徽
    point[44] = QPoint(220,250);//天佑会堂前
    point[45] = QPoint(277,250);//校徽东侧路口
    point[46] = QPoint(380,250);//红果园宾馆路口
    point[47] = QPoint(380,280);//思源时光

    point[48] = QPoint(220,290);//京东超市
    point[49] = QPoint(170,290);//19号楼
    point[50] = QPoint(170,265);//天佑球场西侧
    point[51] = QPoint(220,265);//天佑球场东侧
    point[52] = QPoint(197,200);//校史馆


    point[53] = QPoint(120,150);//体育馆老馆路口
    point[54] = QPoint(20,150);//西门
    point[55] = QPoint(20,210);//高梁桥路1
    point[56] = QPoint(140,335);//高梁桥路2
    point[57] = QPoint(255,327);//南门红绿灯

    point[59] = QPoint(264,410);//高梁桥路3
    point[61] = QPoint(420,470);//高梁桥路4
    point[62] = QPoint(510,490);//东校区南门

    point[64] = QPoint(480,360);//东区学生餐厅
    point[65] = QPoint(410,360);//东区小西门
    point[66] = QPoint(404,320);//快乐零食路口

    point[67] = QPoint(170,240);//天佑会堂西北路口
    point[68] = QPoint(220,240);//天佑会堂东北路口
    point[69] = QPoint(446,157);//18号楼前
    point[70] = QPoint(585,310);//羊蝎子
    point[71] = QPoint(585,145);//校医院路口

    //设置flag标志位初始为0
    for(int i = 0; i < allPoint; i++)
        for(int j = 0; j < allPoint; j++){
            flag_point[i][j] = 0;
        }
}

void bjtuMap::InitPic(){
    pic[0] = QPixmap(R"(D:\CLion\CampusGuide\Resource\location1.png)");
    pic[1] = QPixmap(R"(D:\CLion\CampusGuide\Resource\location2.png)");
    pic[2] = QPixmap(R"(D:\CLion\CampusGuide\Resource\location3.png)");
    pic[3] = QPixmap(R"(D:\CLion\CampusGuide\Resource\location4.png)");
    pic[4] = QPixmap(R"(D:\CLion\CampusGuide\Resource\location5.png)");
    pic[5] = QPixmap(R"(D:\CLion\CampusGuide\Resource\location6.png)");
    pic[6] = QPixmap(R"(D:\CLion\CampusGuide\Resource\location7.png)");
    pic[7] = QPixmap(R"(D:\CLion\CampusGuide\Resource\location8.png)");
    pic[8] = QPixmap(R"(D:\CLion\CampusGuide\Resource\location9.png)");
    pic[9] = QPixmap(R"(D:\CLion\CampusGuide\Resource\location10.png)");
    pic[10] = QPixmap(R"(D:\CLion\CampusGuide\Resource\location11.png)");
    pic[11] = QPixmap(R"(D:\CLion\CampusGuide\Resource\location12.png)");
    pic[12] = QPixmap(R"(D:\CLion\CampusGuide\Resource\location13.png)");
    pic[13] = QPixmap(R"(D:\CLion\CampusGuide\Resource\location14.png)");
    pic[14] = QPixmap(R"(D:\CLion\CampusGuide\Resource\location15.png)");

    QSize picSize(50,50);
    pic[0] = pic[0].scaled(picSize, Qt::KeepAspectRatio);
    pic[1] = pic[1].scaled(picSize, Qt::KeepAspectRatio);
    pic[2] = pic[2].scaled(picSize, Qt::KeepAspectRatio);
    pic[3] = pic[3].scaled(picSize, Qt::KeepAspectRatio);
    pic[4] = pic[4].scaled(picSize, Qt::KeepAspectRatio);
    pic[5] = pic[5].scaled(picSize, Qt::KeepAspectRatio);
    pic[6] = pic[6].scaled(picSize, Qt::KeepAspectRatio);
    pic[7] = pic[7].scaled(picSize, Qt::KeepAspectRatio);
    pic[8] = pic[8].scaled(picSize, Qt::KeepAspectRatio);
    pic[9] = pic[9].scaled(picSize, Qt::KeepAspectRatio);
    pic[10] = pic[10].scaled(picSize, Qt::KeepAspectRatio);
    pic[11] = pic[11].scaled(picSize, Qt::KeepAspectRatio);
    pic[12] = pic[12].scaled(picSize, Qt::KeepAspectRatio);
    pic[13] = pic[13].scaled(picSize, Qt::KeepAspectRatio);
    pic[14] = pic[14].scaled(picSize, Qt::KeepAspectRatio);

    for(int i = 0; i < allPlaceNum; i++){    //标签[0]对应地点1 指标号飞下标
        label[i] = new QLabel(this);
        label[i]->setGeometry(point[i].rx()-20,point[i].ry()-50,50,50);
    }
}

void bjtuMap::outputInformation(){
    //输出路线信息
    QString routeS1{""};
    QString routeS2{""};
    QString routeS3{""};
    QString routeS4{""};

    for(int i = 0; i < selectedPlaceNum; i++){
        if(i < 4){
           routeS1 = routeS1 + QString::number(walkRoute[i])+" -> ";
        }else if(i < 8){
           routeS2 = routeS2 + QString::number(walkRoute[i])+" -> ";
        }else if(i < 12){
           routeS3 = routeS3 + QString::number(walkRoute[i])+" -> ";
        }else{
           routeS4 = routeS4 + QString::number(walkRoute[i])+" -> ";
        }
    }

    //添加起点
    if(selectedPlaceNum < 4){
       routeS1 = routeS1 + QString::number(walkRoute[0]);
    }else if(selectedPlaceNum < 8){
       routeS2 = routeS2 + QString::number(walkRoute[0]);
    }else if(selectedPlaceNum < 12){
       routeS3 = routeS3 + QString::number(walkRoute[0]);
    }else{
       routeS4 = routeS4 + QString::number(walkRoute[0]);
    }

    ui->label_route_1->setText(routeS1);
    ui->label_route_2->setText(routeS2);
    ui->label_route_3->setText(routeS3);
    ui->label_route_4->setText(routeS4);
}

//绘制路线
void bjtuMap::setRouteLine(){
    for(int i = 0; i < selectedPlaceNum; i++){
            if(( walkRoute[i]== 1) && (walkRoute[i+1] == 2)){      //西操（篮球场）到家属区437m
                flag_point[0][24]=1;
                flag_point[24][27]=1;
                flag_point[27][30]=1;
                flag_point[30][28]=1;
                flag_point[28][17]=1;
                flag_point[17][1]=1;
            }
            if((walkRoute[i] == 1) && (walkRoute[i+1] == 3)){      //西操到东门890m
                flag_point[0][24]=1;
                flag_point[24][27]=1;
                flag_point[27][30]=1;
                flag_point[30][33]=1;
                flag_point[33][58]=1;
                flag_point[58][60]=1;
                flag_point[60][2]=1;
            }
            if((walkRoute[i]==1)&&(walkRoute[i+1]==4)){            //西操到思源楼272m
                flag_point[0][24]=1;
                flag_point[24][27]=1;
                flag_point[27][38]=1;
                flag_point[38][29]=1;
                flag_point[29][3]=1;
            }
            if((walkRoute[i]==1)&&(walkRoute[i+1]==5)){            //西操到明湖349m
                flag_point[0][24]=1;
                flag_point[24][27]=1;
                flag_point[27][30]=1;
                flag_point[30][36]=1;
                flag_point[36][4]=1;
            }
            if((walkRoute[i]==1)&&(walkRoute[i+1]==6)){            //西操到逸夫583m
                flag_point[0][24]=1;
                flag_point[24][27]=1;
                flag_point[27][30]=1;
                flag_point[30][58]=1;
                flag_point[58][15]=1;
                flag_point[15][5]=1;
            }
            if((walkRoute[i]==1)&&(walkRoute[i+1]==7)){             //西操到南门486m
                flag_point[0][24]=1;
                flag_point[24][27]=1;
                flag_point[27][49]=1;
                flag_point[49][23]=1;
                flag_point[23][6]=1;
            }
            if((walkRoute[i]==1)&&(walkRoute[i+1]==8)){            //西操到东区1教1300m
                flag_point[0][24]=1;
                flag_point[24][27]=1;
                flag_point[27][49]=1;
                flag_point[49][23]=1;
                flag_point[23][57]=1;
                flag_point[57][66]=1;
                flag_point[66][65]=1;
                flag_point[65][64]=1;
                flag_point[64][7]=1;
            }
            if((walkRoute[i]==1)&&(walkRoute[i+1]==9)){            //西操到交大公交站832m
                flag_point[0][24]=1;
                flag_point[24][27]=1;
                flag_point[27][49]=1;
                flag_point[49][23]=1;
                flag_point[23][57]=1;
                flag_point[57][59]=1;
                flag_point[59][8]=1;
            }
            if((walkRoute[i]==1)&&(walkRoute[i+1]==10)){            //西操到学生活动中心153m
                flag_point[0][24]=1;
                flag_point[24][53]=1;
                flag_point[53][40]=1;
                flag_point[40][9]=1;

            }
            if((walkRoute[i]==1)&&(walkRoute[i+1]==11)){            //西操到图书馆437m
                flag_point[0][24]=1;
                flag_point[24][27]=1;
                flag_point[27][30]=1;
                flag_point[30][34]=1;
                flag_point[34][26]=1;
                flag_point[26][10]=1;
            }
            if((walkRoute[i]==1)&&(walkRoute[i+1]==12)){            //西操到天佑会堂314m
                flag_point[0][24]=1;
                flag_point[24][27]=1;
                flag_point[27][67]=1;
                flag_point[67][68]=1;
                flag_point[68][44]=1;
                flag_point[44][11]=1;
            }
            if((walkRoute[i]==1)&&(walkRoute[i+1]==13)){            //西操到嘉园666m
                flag_point[0][24]=1;
                flag_point[24][27]=1;
                flag_point[27][49]=1;
                flag_point[49][23]=1;
                flag_point[23][22]=1;
                flag_point[22][12]=1;
            }
            if((walkRoute[i]==1)&&(walkRoute[i+1]==14)){            //西操到校医院728m
                flag_point[0][24]=1;
                flag_point[24][27]=1;
                flag_point[27][30]=1;
                flag_point[30][25]=1;
                flag_point[25][42]=1;
                flag_point[42][13]=1;
            }
            if((walkRoute[i]==1)&&(walkRoute[i+1]==15)){            //西操到麦当劳669m
                flag_point[0][24]=1;
                flag_point[24][27]=1;
                flag_point[27][49]=1;
                flag_point[49][23]=1;
                flag_point[23][57]=1;
                flag_point[57][14]=1;
            }

            if(( walkRoute[i]== 2) && (walkRoute[i+1] == 1)){      //家属区到西操437m
                flag_point[1][17] = 1;
                flag_point[17][28] = 1;
                flag_point[28][30] = 1;
                flag_point[30][27] = 1;
                flag_point[27][24] = 1;
                flag_point[24][0] = 1;
            }
            if(( walkRoute[i]== 2) && (walkRoute[i+1] == 3)){      //家属区到家属区东门443m
                flag_point[1][17]=1;
                flag_point[17][41]=1;
                flag_point[41][2]=1;
            }
            if(( walkRoute[i]== 2) && (walkRoute[i+1] == 4)){      //家属区到思源楼455m
                flag_point[1][17]=1;
                flag_point[17][28]=1;
                flag_point[28][31]=1;
                flag_point[31][29]=1;
                flag_point[29][3]=1;
            }
            if(( walkRoute[i]== 2) && (walkRoute[i+1] == 5)){      //家属区到明湖415m
                flag_point[1][17]=1;
                flag_point[17][60]=1;
                flag_point[60][58]=1;
                flag_point[58][34]=1;
                flag_point[34][4]=1;
            }
            if(( walkRoute[i]== 2) && (walkRoute[i+1] == 6)){//家属区到逸夫466m
                flag_point[1][17]=1;
                flag_point[17][60]=1;
                flag_point[60][58]=1;
                flag_point[58][69]=1;
                flag_point[69][15]=1;
                flag_point[15][5]=1;
            }
            if(( walkRoute[i]== 2) && (walkRoute[i+1] == 7)){      //家属区到南门666m
                flag_point[1][17]=1;
                flag_point[17][28]=1;
                flag_point[28][44]=1;
                flag_point[44][43]=1;
                flag_point[43][6]=1;
            }
            if(( walkRoute[i]== 2) && (walkRoute[i+1] == 8)){      //家属区到东区1教1.5km
                flag_point[1][17]=1;
                flag_point[17][28]=1;
                flag_point[28][44]=1;
                flag_point[44][43]=1;
                flag_point[43][57]=1;
                flag_point[57][66]=1;
                flag_point[66][65]=1;
                flag_point[65][64]=1;
                flag_point[64][7]=1;
            }
            if(( walkRoute[i]== 2) && (walkRoute[i+1] == 9)){      //家属区到交大公交站1km
                flag_point[1][17]=1;
                flag_point[17][28]=1;
                flag_point[28][44]=1;
                flag_point[44][43]=1;
                flag_point[43][57]=1;
                flag_point[57][59]=1;
                flag_point[59][8]=1;
            }
            if(( walkRoute[i]== 2) && (walkRoute[i+1] == 10)){      //家属区到学生活动中心572m
                flag_point[1][17]=1;
                flag_point[17][28]=1;
                flag_point[28][30]=1;
                flag_point[30][27]=1;
                flag_point[27][53]=1;
                flag_point[53][40]=1;
                flag_point[40][9]=1;
            }
            if(( walkRoute[i]== 2) && (walkRoute[i+1] == 11)){      //家属区到图书馆450m
                flag_point[1][17]=1;
                flag_point[17][60]=1;
                flag_point[60][58]=1;
                flag_point[58][34]=1;
                flag_point[34][26]=1;
                flag_point[26][10]=1;
            }
            if(( walkRoute[i]== 2) && (walkRoute[i+1] == 12)){      //家属区到天佑会堂519m
                flag_point[1][17]=1;
                flag_point[17][28]=1;
                flag_point[28][44]=1;
                flag_point[44][11]=1;
            }
            if(( walkRoute[i]== 2) && (walkRoute[i+1] == 13)){      //家属区到嘉园754m
                flag_point[1][17]=1;
                flag_point[17][28]=1;
                flag_point[28][44]=1;
                flag_point[44][43]=1;
                flag_point[43][23]=1;
                flag_point[23][22]=1;
                flag_point[22][12]=1;
            }
            if(( walkRoute[i]== 2) && (walkRoute[i+1] == 14)){      //家属区到校医院464m
                flag_point[1][17]=1;
                flag_point[17][41]=1;
                flag_point[41][42]=1;
                flag_point[42][13]=1;
            }
            if(( walkRoute[i]== 2) && (walkRoute[i+1] == 15)){      //家属区到麦当劳849m
                flag_point[1][17]=1;
                flag_point[17][28]=1;
                flag_point[28][44]=1;
                flag_point[44][43]=1;
                flag_point[43][57]=1;
                flag_point[57][14]=1;
            }

            if((walkRoute[i] == 3) && (walkRoute[i+1] == 1)){      //东门到西操 890m
                flag_point[2][60] = 1;
                flag_point[60][58] = 1;
                flag_point[58][33] = 1;
                flag_point[33][30] = 1;
                flag_point[30][27] = 1;
                flag_point[27][24] = 1;
                flag_point[24][0] = 1;
            }
            if(( walkRoute[i]== 3) && (walkRoute[i+1] == 2)){      //东门到家属区 443m
                flag_point[2][41]=1;
                flag_point[41][17]=1;
                flag_point[17][1]=1;
            }
            if(( walkRoute[i]== 3) && (walkRoute[i+1] == 4)){      //东门到思源楼802m
                flag_point[2][41]=1;
                flag_point[41][60]=1;
                flag_point[60][58]=1;
                flag_point[58][34]=1;
                flag_point[34][26]=1;
                flag_point[26][29]=1;
                flag_point[29][3]=1;
            }
            if(( walkRoute[i]== 3) && (walkRoute[i+1] == 5)){      //东门到明湖580m
                flag_point[2][41]=1;
                flag_point[41][60]=1;
                flag_point[60][58]=1;
                flag_point[58][34]=1;
                flag_point[34][4]=1;
            }
            if(( walkRoute[i]== 3) && (walkRoute[i+1] == 6)){      //东门到逸夫楼617m
                flag_point[2][41]=1;
                flag_point[41][60]=1;
                flag_point[60][58]=1;
                flag_point[58][69]=1;
                flag_point[69][15]=1;
                flag_point[15][5]=1;
            }
            if(( walkRoute[i]== 3) && (walkRoute[i+1] == 7)){      //东门到南门1km
                flag_point[2][41]=1;
                flag_point[41][60]=1;
                flag_point[60][58]=1;
                flag_point[58][33]=1;
                flag_point[33][45]=1;
                flag_point[45][43]=1;
                flag_point[43][6]=1;
            }
            if(( walkRoute[i]== 3) && (walkRoute[i+1] == 8)){      //东门到东区1教1.2km
                flag_point[2][70]=1;
                flag_point[70][66]=1;
                flag_point[66][65]=1;
                flag_point[65][64]=1;
                flag_point[64][7]=1;
            }
            if(( walkRoute[i]== 3) && (walkRoute[i+1] == 9)){      //东门到交大公交站1.3km
                flag_point[2][70]=1;
                flag_point[70][57]=1;
                flag_point[57][59]=1;
                flag_point[59][8]=1;
            }
            if(( walkRoute[i]== 3) && (walkRoute[i+1] == 10)){      //东门到学生活动中心1km
                flag_point[2][41]=1;
                flag_point[41][28]=1;
                flag_point[28][30]=1;
                flag_point[30][27]=1;
                flag_point[27][53]=1;
                flag_point[53][40]=1;
                flag_point[40][9]=1;
            }
            if(( walkRoute[i]== 3) && (walkRoute[i+1] == 11)){      //东门到图书馆609m
                flag_point[2][41]=1;
                flag_point[41][60]=1;
                flag_point[60][58]=1;
                flag_point[58][34]=1;
                flag_point[34][26]=1;
                flag_point[26][10]=1;
            }
            if(( walkRoute[i]== 3) && (walkRoute[i+1] == 12)){      //东门到天佑会堂964m
                flag_point[2][41]=1;
                flag_point[41][28]=1;
                flag_point[28][44]=1;
                flag_point[44][11]=1;
            }
            if(( walkRoute[i]== 3) && (walkRoute[i+1] == 13)){      //东门到嘉园1.2km
                flag_point[2][41]=1;
                flag_point[41][28]=1;
                flag_point[28][44]=1;
                flag_point[44][43]=1;
                flag_point[43][23]=1;
                flag_point[23][22]=1;
                flag_point[22][12]=1;
            }
            if(( walkRoute[i]== 3) && (walkRoute[i+1] == 14)){      //东门到校医院165m
                flag_point[2][41]=1;
                flag_point[41][42]=1;
                flag_point[42][13]=1;
            }
            if(( walkRoute[i]== 3) && (walkRoute[i+1] == 15)){      //东门到麦当劳1.1km
                flag_point[2][70]=1;
                flag_point[70][57]=1;
                flag_point[57][14]=1;
            }

            if(( walkRoute[i]== 4) && (walkRoute[i+1] == 1)){            //思源到西操 272m
                flag_point[3][29] = 1;
                flag_point[29][38] = 1;
                flag_point[38][27] = 1;
                flag_point[27][24] = 1;
                flag_point[24][0] = 1;
            }
            if(( walkRoute[i]== 4) && (walkRoute[i+1] == 2)){      //思源楼到家属区 455m
                flag_point[3][29]=1;
                flag_point[29][31]=1;
                flag_point[31][28]=1;
                flag_point[28][17]=1;
                flag_point[17][1]=1;
            }
            if(( walkRoute[i]== 4) && (walkRoute[i+1] == 3)){      //思源楼到东门 802m
                flag_point[3][29] = 1;
                flag_point[29][26] = 1;
                flag_point[26][34] = 1;
                flag_point[34][58] = 1;
                flag_point[58][60] = 1;
                flag_point[60][41] = 1;
                flag_point[41][2] = 1;
            }
            if(( walkRoute[i]== 4) && (walkRoute[i+1] == 5)){      //思源楼到明湖167m
                flag_point[3][29] = 1;
                flag_point[29][37]=1;
                flag_point[37][4]=1;
            }
            if(( walkRoute[i]== 4) && (walkRoute[i+1] == 6)){      //思源楼到逸夫楼318m
                flag_point[3][29] = 1;
                flag_point[29][15]=1;
                flag_point[15][5]=1;
            }
            if(( walkRoute[i]== 4) && (walkRoute[i+1] == 7)){      //思源楼到南门284m
                 flag_point[3][29] = 1;
                flag_point[29][32]=1;
                flag_point[32][45]=1;
                flag_point[45][43]=1;
                flag_point[43][6]=1;
            }
            if(( walkRoute[i]== 4) && (walkRoute[i+1] == 8)){      //思源楼到东区1教1.1km
                flag_point[3][29] = 1;
                flag_point[29][32]=1;
                flag_point[32][45]=1;
                flag_point[45][43]=1;
                flag_point[43][6]=1;
                flag_point[6][57]=1;
                flag_point[57][66]=1;
                flag_point[66][65]=1;
                flag_point[65][64]=1;
                flag_point[64][7]=1;
            }
            if(( walkRoute[i]== 4) && (walkRoute[i+1] == 9)){      //思源楼到交大公交站630m
                flag_point[3][29] = 1;
                flag_point[29][32]=1;
                flag_point[32][45]=1;
                flag_point[45][43]=1;
                flag_point[43][57]=1;
                flag_point[57][59]=1;
                flag_point[59][8]=1;
            }
            if(( walkRoute[i]== 4) && (walkRoute[i+1] == 10)){      //思源楼到学生活动中心256m
                flag_point[3][29] = 1;
                flag_point[29][38]=1;
                flag_point[38][39]=1;
                flag_point[39][40]=1;
                flag_point[40][9]=1;
            }
            if(( walkRoute[i]== 4) && (walkRoute[i+1] == 11)){      //思源楼到图书馆192m
                flag_point[3][29]=1;
                flag_point[29][26]=1;
                flag_point[26][10]=1;
            }
            if(( walkRoute[i]== 4) && (walkRoute[i+1] == 12)){      //思源楼到天佑会堂158m
                flag_point[3][29]=1;
                flag_point[29][31]=1;
                flag_point[31][44]=1;
                flag_point[44][11]=1;
            }
            if(( walkRoute[i]== 4) && (walkRoute[i+1] == 13)){      //思源楼到嘉园428m
                flag_point[3][29]=1;
                flag_point[29][32]=1;
                flag_point[32][45]=1;
                flag_point[45][43]=1;
                flag_point[43][23]=1;
                flag_point[23][22]=1;
                flag_point[22][12]=1;
            }
            if(( walkRoute[i]== 4) && (walkRoute[i+1] == 14)){      //思源楼到校医院640m
                flag_point[3][29]=1;
                flag_point[29][26]=1;
                flag_point[26][34]=1;
                flag_point[34][25]=1;
                flag_point[25][42]=1;
                flag_point[42][13]=1;
            }
            if(( walkRoute[i]== 4) && (walkRoute[i+1] == 15)){      //思源楼到麦当劳467m
                flag_point[3][29]=1;
                flag_point[29][32]=1;
                flag_point[32][45]=1;
                flag_point[45][43]=1;
                flag_point[43][57]=1;
                flag_point[57][14]=1;
            }

            if((walkRoute[i]==5)&&(walkRoute[i+1]==1)){            //明湖到西操 349m
                flag_point[4][30] = 1;
                flag_point[30][27] = 1;
                flag_point[27][24] = 1;
                flag_point[24][0] = 1;
            }
            if(( walkRoute[i]== 5) && (walkRoute[i+1] == 2)){      //明湖到家属区 415m
                flag_point[4][34]=1;
                flag_point[34][58]=1;
                flag_point[58][60]=1;
                flag_point[60][17]=1;
                flag_point[17][1]=1;
            }
            if(( walkRoute[i]== 5) && (walkRoute[i+1] == 3)){      //明湖到东门 580m
                flag_point[4][34] = 1;
                flag_point[34][58] = 1;
                flag_point[58][60] = 1;
                flag_point[60][41] = 1;
                flag_point[41][2] = 1;
            }
            if(( walkRoute[i]== 5) && (walkRoute[i+1] == 4)){      //明湖到思源楼 167m
                flag_point[4][37] = 1;
                flag_point[37][29] = 1;
                flag_point[29][3] = 1;
            }
            if(( walkRoute[i]== 5) && (walkRoute[i+1] == 6)){      //明湖到逸夫楼183m
                flag_point[4][26]=1;
                flag_point[26][15]=1;
                flag_point[15][5]=1;
            }
            if(( walkRoute[i]== 5) && (walkRoute[i+1] == 7)){      //明湖到南门385m
                flag_point[4][37]=1;
                flag_point[37][32]=1;
                flag_point[32][45]=1;
                flag_point[45][43]=1;
                flag_point[43][6]=1;
            }
            if(( walkRoute[i]== 5) && (walkRoute[i+1] == 8)){      //明湖到东区1教1.2km
                flag_point[4][37]=1;
                flag_point[37][32]=1;
                flag_point[32][45]=1;
                flag_point[45][43]=1;
                flag_point[43][6]=1;
                flag_point[6][57]=1;
                flag_point[57][66]=1;
                flag_point[66][65]=1;
                flag_point[65][64]=1;
                flag_point[64][7]=1;
            }
            if(( walkRoute[i]== 5) && (walkRoute[i+1] == 9)){      //明湖到交大公交站731m
                flag_point[4][37]=1;
                flag_point[37][32]=1;
                flag_point[32][45]=1;
                flag_point[45][43]=1;
                flag_point[43][24]=1;
                flag_point[24][57]=1;
                flag_point[57][59]=1;
                flag_point[59][8]=1;
            }
            if((walkRoute[i]==5)&&(walkRoute[i+1]==10)){            //明湖到学生活动中心425m
                flag_point[4][37]=1;
                flag_point[37][38]=1;
                flag_point[38][39]=1;
                flag_point[39][40]=1;
                flag_point[40][9]=1;
            }
            if((walkRoute[i]==5)&&(walkRoute[i+1]==11)){            //明湖到图书馆50m
                flag_point[4][26]=1;
                flag_point[26][10]=1;
            }
            if((walkRoute[i]==5)&&(walkRoute[i+1]==12)){            //明湖到天佑会堂327m
                flag_point[4][37]=1;
                flag_point[37][31]=1;
                flag_point[31][44]=1;
                flag_point[44][11]=1;
            }
            if(( walkRoute[i]== 5) && (walkRoute[i+1] == 13)){      //明湖到嘉园432m
                flag_point[4][26]=1;
                flag_point[26][47]=1;
                flag_point[47][22]=1;
                flag_point[22][12]=1;
            }
            if((walkRoute[i]==5)&&(walkRoute[i+1]==14)){            //明湖到校医院419m
                flag_point[4][34]=1;
                flag_point[34][25]=1;
                flag_point[25][42]=1;
                flag_point[42][13]=1;
            }
            if(( walkRoute[i]== 5) && (walkRoute[i+1] == 15)){      //明湖到麦当劳568m
                flag_point[4][37]=1;
                flag_point[37][32]=1;
                flag_point[32][45]=1;
                flag_point[45][43]=1;
                flag_point[43][57]=1;
                flag_point[57][14]=1;
            }

            if((walkRoute[i]==6)&&(walkRoute[i+1]==1)){            //逸夫到西操 583m
                flag_point[5][15] = 1;
                flag_point[15][58] = 1;
                flag_point[58][30] = 1;
                flag_point[30][27] = 1;
                flag_point[27][24] = 1;
                flag_point[24][0] = 1;
            }
            if(( walkRoute[i]== 6) && (walkRoute[i+1] == 2)){      //逸夫到家属区 466m
                flag_point[5][15]=1;
                flag_point[15][69]=1;
                flag_point[69][58]=1;
                flag_point[58][60]=1;
                flag_point[60][17]=1;
                flag_point[17][1]=1;
            }
            if(( walkRoute[i]== 6) && (walkRoute[i+1] == 3)){      //逸夫到东门 617m
                flag_point[5][15] = 1;
                flag_point[15][69] = 1;
                flag_point[69][58] = 1;
                flag_point[58][60] = 1;
                flag_point[60][41] = 1;
                flag_point[41][2] = 1;
            }
            if(( walkRoute[i]== 6) && (walkRoute[i+1] == 4)){      //逸夫到思源楼 318m
                flag_point[5][15] = 1;
                flag_point[15][29] = 1;
                flag_point[29][3] = 1;
            }
            if(( walkRoute[i]== 6) && (walkRoute[i+1] == 5)){      //逸夫到明湖 415m
                flag_point[5][15] = 1;
                flag_point[15][26] = 1;
                flag_point[26][4] = 1;
            }
            if(( walkRoute[i]== 6) && (walkRoute[i+1] == 7)){      //逸夫到南门465m
                flag_point[5][15] = 1;
                flag_point[15][18] = 1;
                flag_point[18][20] = 1;
                flag_point[20][21]=1;
                flag_point[21][23]=1;
                flag_point[23][6]=1;
            }
            if(( walkRoute[i]== 6) && (walkRoute[i+1] == 8)){      //逸夫到东区1教1.3km
                flag_point[5][15] = 1;
                flag_point[15][18] = 1;
                flag_point[18][20] = 1;
                flag_point[20][21]=1;
                flag_point[21][23]=1;
                flag_point[23][6]=1;
                flag_point[6][57]=1;
                flag_point[57][59]=1;
                flag_point[59][8]=1;
                flag_point[8][61]=1;
                flag_point[61][62]=1;
                flag_point[62][7]=1;
            }
            if(( walkRoute[i]== 6) && (walkRoute[i+1] == 9)){      //逸夫到交大公交站811m
                flag_point[5][15] = 1;
                flag_point[15][18] = 1;
                flag_point[18][20] = 1;
                flag_point[20][21]=1;
                flag_point[21][23]=1;
                flag_point[23][24]=1;
                flag_point[24][57]=1;
                flag_point[57][59]=1;
                flag_point[59][8]=1;
            }
            if(( walkRoute[i]== 6) && (walkRoute[i+1] == 10)){      //逸夫到学生活动中心574m
                flag_point[5][15]=1;
                flag_point[15][38]=1;
                flag_point[38][39]=1;
                flag_point[39][40]=1;
                flag_point[40][9]=1;
            }
            if(( walkRoute[i]== 6) && (walkRoute[i+1] == 11)){      //逸夫到图书馆148m
                flag_point[5][15]=1;
                flag_point[15][26]=1;
                flag_point[26][10]=1;
            }
            if(( walkRoute[i]== 6) && (walkRoute[i+1] == 12)) {//逸夫到天佑会堂476m
                flag_point[5][15]=1;
                flag_point[15][31]=1;
                flag_point[31][44]=1;
                flag_point[44][11]=1;
            }
            if(( walkRoute[i]== 6) && (walkRoute[i+1] == 13)){      //逸夫到嘉园420m
                flag_point[5][15] = 1;
                flag_point[15][18] = 1;
                flag_point[18][20] = 1;
                flag_point[20][21]=1;
                flag_point[21][22]=1;
                flag_point[22][12]=1;
            }
            if(( walkRoute[i]== 6) && (walkRoute[i+1] == 14)){      //逸夫到校医院463m
                flag_point[5][15] = 1;
                flag_point[15][18] = 1;
                flag_point[15][69]=1;
                flag_point[69][58]=1;
                flag_point[58][25]=1;
                flag_point[25][42]=1;
                flag_point[42][13]=1;
            }
            if(( walkRoute[i]== 6) && (walkRoute[i+1] == 15)){   //逸夫到麦当劳648m
                flag_point[5][15] = 1;
                flag_point[15][18] = 1;
                flag_point[18][20] = 1;
                flag_point[20][21]=1;
                flag_point[21][23]=1;
                flag_point[23][24]=1;
                flag_point[24][57]=1;
                flag_point[57][14]=1;
            }

            if((walkRoute[i]==7)&&(walkRoute[i+1]==1)){            //南门到西操
                flag_point[6][23] = 1;
                flag_point[23][49] = 1;
                flag_point[49][27] = 1;
                flag_point[27][24] = 1;
                flag_point[24][0] = 1;
            }
            if(( walkRoute[i]== 7) && (walkRoute[i+1] == 2)){      //南门到家属区
                flag_point[6][43]=1;
                flag_point[43][44]=1;
                flag_point[44][28]=1;
                flag_point[28][17]=1;
                flag_point[17][1]=1;
            }
            if(( walkRoute[i]== 7) && (walkRoute[i+1] == 3)){      //南门到东门
                flag_point[6][43] = 1;
                flag_point[43][45] = 1;
                flag_point[45][33] = 1;
                flag_point[33][58] = 1;
                flag_point[58][60] = 1;
                flag_point[60][41] = 1;
                flag_point[41][2] = 1;
            }
            if(( walkRoute[i]== 7) && (walkRoute[i+1] == 4)){      //南门到思源楼
                flag_point[6][43] = 1;
                flag_point[43][45] = 1;
                flag_point[45][32] = 1;
                flag_point[32][29] = 1;
                flag_point[29][3] = 1;
            }
            if(( walkRoute[i]== 7) && (walkRoute[i+1] == 5)){      //南门到明湖
                flag_point[6][43] = 1;
                flag_point[43][45] = 1;
                flag_point[45][32] = 1;
                flag_point[32][37] = 1;
                flag_point[37][4] = 1;
            }
            if(( walkRoute[i]== 7) && (walkRoute[i+1] == 6)){      //南门到逸夫465m
            flag_point[6][23] = 1;
            flag_point[23][21] = 1;
            flag_point[21][20] = 1;
            flag_point[20][18] = 1;
            flag_point[18][15] = 1;
            flag_point[15][5] = 1;
            }
            if(( walkRoute[i]== 7) && (walkRoute[i+1] == 8)){      //南门到东区1教852m
                flag_point[6][57]=1;
                flag_point[57][66]=1;
                flag_point[66][65]=1;
                flag_point[65][64]=1;
                flag_point[64][7]=1;
            }
            if(( walkRoute[i]== 7) && (walkRoute[i+1] == 9)){      //南门到交大公交站347m
                flag_point[6][57]=1;
                flag_point[57][59]=1;
                flag_point[59][8]=1;
            }
            if(( walkRoute[i]== 7) && (walkRoute[i+1] == 10)){      //南门到学生活动中心432m
                flag_point[6][23]=1;
                flag_point[23][48]=1;
                flag_point[48][49]=1;
                flag_point[49][39]=1;
                flag_point[39][40]=1;
                flag_point[40][9]=1;
            }
            if(( walkRoute[i]== 7) && (walkRoute[i+1] == 11)){      //南门到图书馆407m
                flag_point[6][43]=1;
                flag_point[43][45]=1;
                flag_point[45][32]=1;
                flag_point[32][26]=1;
                flag_point[26][10]=1;
            }
            if(( walkRoute[i]== 7) && (walkRoute[i+1] == 12)){      //南门到天佑会堂168m
                flag_point[6][43]=1;
                flag_point[43][11]=1;
            }
            if(( walkRoute[i]== 7) && (walkRoute[i+1] == 13)){      //南门到嘉园133m
                flag_point[6][23]=1;
                flag_point[23][22]=1;
                flag_point[22][12]=1;
            }
            if(( walkRoute[i]== 7) && (walkRoute[i+1] == 14)){      //南门到校医院868m
                flag_point[6][43]=1;
                flag_point[43][45]=1;
                flag_point[45][33]=1;
                flag_point[33][25]=1;
                flag_point[25][42]=1;
                flag_point[42][13]=1;
            }
            if(( walkRoute[i]== 7) && (walkRoute[i+1] == 15)){      //南门到麦当劳180m
                flag_point[6][57]=1;
                flag_point[57][14]=1;
            }

            if((walkRoute[i]==8)&&(walkRoute[i+1]==1)){            //东区一教到西操
                flag_point[7][64] = 1;
                flag_point[64][65] = 1;
                flag_point[65][66] = 1;
                flag_point[66][57] = 1;
                flag_point[57][23] = 1;
                flag_point[23][49] = 1;
                flag_point[49][27] = 1;
                flag_point[27][24] = 1;
                flag_point[24][0] = 1;
            }
            if(( walkRoute[i]== 8) && (walkRoute[i+1] == 2)){      //东区一教到家属区
                flag_point[7][64]=1;
                flag_point[64][65]=1;
                flag_point[65][66]=1;
                flag_point[66][57]=1;
                flag_point[57][43]=1;
                flag_point[43][44]=1;
                flag_point[44][28]=1;
                flag_point[28][17]=1;
                flag_point[17][1]=1;
            }
            if(( walkRoute[i]== 8) && (walkRoute[i+1] == 3)){      //东区一教到东门
                flag_point[7][64] = 1;
                flag_point[64][65] = 1;
                flag_point[65][66] = 1;
                flag_point[66][70] = 1;
                flag_point[70][2] = 1;
            }
            if(( walkRoute[i]== 8) && (walkRoute[i+1] == 4)){      //东区一教到思源楼
                flag_point[7][64] = 1;
                flag_point[64][65] = 1;
                flag_point[65][66] = 1;
                flag_point[66][57] = 1;
                flag_point[57][6] = 1;
                flag_point[6][43] = 1;
                flag_point[43][45] = 1;
                flag_point[45][32] = 1;
                flag_point[32][29] = 1;
                flag_point[29][3] = 1;
            }
            if(( walkRoute[i]== 8) && (walkRoute[i+1] == 5)){      //东区一教到明湖
                flag_point[7][64] = 1;
                flag_point[64][65] = 1;
                flag_point[65][66] = 1;
                flag_point[66][57] = 1;
                flag_point[57][24] = 1;
                flag_point[24][43] = 1;
                flag_point[43][45] = 1;
                flag_point[45][32] = 1;
                flag_point[32][37] = 1;
                flag_point[37][4] = 1;
            }
            if(( walkRoute[i]== 8) && (walkRoute[i+1] == 6)){       //东区1教到逸夫1.3km
            flag_point[7][62] = 1;
            flag_point[62][61] = 1;
            flag_point[61][60] = 1;
            flag_point[60][59] = 1;
            flag_point[59][57] = 1;
            flag_point[57][24] = 1;
            flag_point[24][23] = 1;
            flag_point[23][21] = 1;
            flag_point[21][20] = 1;
            flag_point[20][18] = 1;
            flag_point[18][15] = 1;
            flag_point[15][5] = 1;
            }
            if(( walkRoute[i]== 8) && (walkRoute[i+1] == 7)){      //东区1教到南门852m
            flag_point[7][64] = 1;
            flag_point[64][65] = 1;
            flag_point[65][66] = 1;
            flag_point[66][57] = 1;
            flag_point[57][6] = 1;
            }
            if(( walkRoute[i]== 8) && (walkRoute[i+1] == 9)){      //东区1教到交大公交站521m
                flag_point[7][62]=1;
                flag_point[62][61]=1;
                flag_point[61][8]=1;
            }
            if(( walkRoute[i]== 8) && (walkRoute[i+1] == 10)){      //东区1教到学生活动中心1.3km
                flag_point[7][62]=1;
                flag_point[62][61]=1;
                flag_point[61][8]=1;
                flag_point[8][59]=1;
                flag_point[59][57]=1;
                flag_point[57][23]=1;
                flag_point[23][48]=1;
                flag_point[48][49]=1;
                flag_point[49][39]=1;
                flag_point[39][40]=1;
                flag_point[40][9]=1;
            }
            if(( walkRoute[i]== 8) && (walkRoute[i+1] == 11)){      //东区1教到图书馆1.3km
                flag_point[7][62]=1;
                flag_point[62][61]=1;
                flag_point[61][60]=1;
                flag_point[60][59]=1;
                flag_point[59][57]=1;
                flag_point[57][43]=1;
                flag_point[43][45]=1;
                flag_point[45][32]=1;
                flag_point[32][26]=1;
                flag_point[26][10]=1;
            }
            if(( walkRoute[i]== 8) && (walkRoute[i+1] == 12)){      //东区1教到天佑会堂1.0km
                flag_point[7][62]=1;
                flag_point[62][61]=1;
                flag_point[61][60]=1;
                flag_point[60][59]=1;
                flag_point[59][57]=1;
                flag_point[57][43]=1;
                flag_point[43][11]=1;
            }
            if(( walkRoute[i]== 8) && (walkRoute[i+1] == 13)){      //东区1教到嘉园1.0km
                flag_point[7][64]=1;
                flag_point[64][65]=1;
                flag_point[65][66]=1;
                flag_point[66][57]=1;
                flag_point[57][23]=1;
                flag_point[23][22]=1;
                flag_point[22][12]=1;
            }
            if(( walkRoute[i]== 8) && (walkRoute[i+1] == 14)){      //东区1教到校医院1.2km
                flag_point[7][64]=1;
                flag_point[64][65]=1;
                flag_point[65][66]=1;
                flag_point[66][70]=1;
                flag_point[70][71]=1;
                flag_point[71][25]=1;
                flag_point[25][42]=1;
                flag_point[42][13]=1;
            }
            if(( walkRoute[i]== 8) && (walkRoute[i+1] == 15)){      //东区1教到麦当劳684m
                flag_point[7][62]=1;
                flag_point[62][61]=1;
                flag_point[60][59]=1;
                flag_point[59][14]=1;
            }

            if((walkRoute[i]==9)&&(walkRoute[i+1]==1)){            //公交站到西操
                flag_point[8][59] = 1;
                flag_point[59][57] = 1;
                flag_point[57][23] = 1;
                flag_point[23][49] = 1;
                flag_point[49][27] = 1;
                flag_point[27][24] = 1;
                flag_point[24][0] = 1;
            }
            if(( walkRoute[i]== 9) && (walkRoute[i+1] == 2)){      //公交站到家属区
                flag_point[8][59]=1;
                flag_point[59][57]=1;
                flag_point[57][43]=1;
                flag_point[43][44]=1;
                flag_point[44][28]=1;
                flag_point[28][17]=1;
                flag_point[17][1]=1;
            }
            if(( walkRoute[i]== 9) && (walkRoute[i+1] == 3)){      //公交站到东门
                flag_point[8][59] = 1;
                flag_point[59][57] = 1;
                flag_point[57][70] = 1;
                flag_point[70][2] = 1;
            }
            if(( walkRoute[i]== 9) && (walkRoute[i+1] == 4)){      //公交站到思源楼
                flag_point[8][59] = 1;
                flag_point[59][57] = 1;
                flag_point[57][43] = 1;
                flag_point[43][45] = 1;
                flag_point[45][32] = 1;
                flag_point[32][29] = 1;
                flag_point[29][3] = 1;
            }
            if(( walkRoute[i]== 9) && (walkRoute[i+1] == 5)){      //公交站到明湖
                flag_point[8][59] = 1;
                flag_point[59][57] = 1;
                flag_point[57][6] = 1;
                flag_point[6][43] = 1;
                flag_point[43][45] = 1;
                flag_point[45][32] = 1;
                flag_point[32][37] = 1;
                flag_point[37][4] = 1;
            }
            if(( walkRoute[i]== 9) && (walkRoute[i+1] == 6)){       //交大公交站到逸夫811m
            flag_point[8][59] = 1;
            flag_point[59][57] = 1;
            flag_point[57][6] = 1;
            flag_point[6][23] = 1;
            flag_point[23][21] = 1;
            flag_point[21][20] = 1;
            flag_point[20][18] = 1;
            flag_point[18][15] = 1;
            flag_point[15][5] = 1;
            }
            if(( walkRoute[i]== 9) && (walkRoute[i+1] == 7)){      //交大公交站到南门347m
            flag_point[8][59] = 1;
            flag_point[59][57] = 1;
            flag_point[57][6] = 1;
            }
            if(( walkRoute[i]== 9) && (walkRoute[i+1] == 8)){       //交大公交站到东区1教521m
            flag_point[8][61] = 1;
            flag_point[61][62] = 1;
            flag_point[62][7] = 1;
            }
            if(( walkRoute[i]== 9) && (walkRoute[i+1] == 10)){      //交大公交站到学生活动中心779m
                flag_point[8][59]=1;
                flag_point[59][57]=1;
                flag_point[57][43]=1;
                flag_point[43][44]=1;
                flag_point[44][67]=1;
                flag_point[67][39]=1;
                flag_point[39][40]=1;
                flag_point[40][9]=1;
            }
            if(( walkRoute[i]== 9) && (walkRoute[i+1] == 11)){      //交大公交站到图书馆754m
                flag_point[8][59]=1;
                flag_point[59][57]=1;
                flag_point[57][43]=1;
                flag_point[43][45]=1;
                flag_point[45][32]=1;
                flag_point[32][26]=1;
                flag_point[26][10]=1;
            }
            if(( walkRoute[i]== 9) && (walkRoute[i+1] == 12)){      //交大公交站到天佑会堂1.1km
                flag_point[8][59]=1;
                flag_point[59][57]=1;
                flag_point[57][43]=1;
                flag_point[43][11]=1;
            }
            if(( walkRoute[i]== 9) && (walkRoute[i+1] == 13)){      //交大公交站到嘉园490m
                flag_point[8][59]=1;
                flag_point[59][57]=1;
                flag_point[57][23]=1;
                flag_point[23][22]=1;
                flag_point[22][12]=1;
            }
            if(( walkRoute[i]== 9) && (walkRoute[i+1] == 14)){      //交大公交站到校医院1.2km
                flag_point[8][59]=1;
                flag_point[59][57]=1;
                flag_point[57][43]=1;
                flag_point[43][45]=1;
                flag_point[45][33]=1;
                flag_point[33][25]=1;
                flag_point[25][42]=1;
                flag_point[42][13]=1;
            }
            if(( walkRoute[i]== 9) && (walkRoute[i+1] == 15)){      //交大公交站到麦当劳162m
                flag_point[8][59]=1;
                flag_point[59][14]=1;
            }

            if((walkRoute[i]==10)&&(walkRoute[i+1]==1)){            //学活到西操
                flag_point[9][40] = 1;
                flag_point[40][53] = 1;
                flag_point[53][24] = 1;
                flag_point[24][0] = 1;
            }
            if(( walkRoute[i]== 10) && (walkRoute[i+1] == 2)){      //学活到家属区
                flag_point[9][40]=1;
                flag_point[40][53]=1;
                flag_point[53][27]=1;
                flag_point[27][30]=1;
                flag_point[30][28]=1;
                flag_point[28][17]=1;
                flag_point[17][1]=1;
            }
            if(( walkRoute[i]== 10) && (walkRoute[i+1] == 3)){      //学活到东门
                flag_point[9][40] = 1;
                flag_point[40][53] = 1;
                flag_point[53][27] = 1;
                flag_point[27][30] = 1;
                flag_point[30][28] = 1;
                flag_point[28][41] = 1;
                flag_point[41][2] = 1;
            }
            if(( walkRoute[i]== 10) && (walkRoute[i+1] == 4)){      //学活到思源楼
                flag_point[9][40] = 1;
                flag_point[40][39] = 1;
                flag_point[39][38] = 1;
                flag_point[38][29] = 1;
                flag_point[29][3] = 1;
            }
            if((walkRoute[i]==10)&&(walkRoute[i+1]==5)){            //学活到明湖
                flag_point[9][40] = 1;
                flag_point[40][39] = 1;
                flag_point[39][38] = 1;
                flag_point[38][37] = 1;
                flag_point[37][4] = 1;
            }
            if(( walkRoute[i]== 10) && (walkRoute[i+1] == 6)){      //学生活动中心到逸夫574m
            flag_point[9][40] = 1;
            flag_point[40][39] = 1;
            flag_point[39][38] = 1;
            flag_point[38][15] = 1;
            flag_point[15][5] = 1;
            }
            if(( walkRoute[i]== 10) && (walkRoute[i+1] == 7)){      //学生活动中心到南门432m
            flag_point[9][40] = 1;
            flag_point[40][39] = 1;
            flag_point[39][49] = 1;
            flag_point[49][48] = 1;
            flag_point[48][23] = 1;
            flag_point[23][6] = 1;
            }
            if(( walkRoute[i]== 10) && (walkRoute[i+1] == 8)){       //学生活动中心到东区1教1.3km
            flag_point[9][40] = 1;
            flag_point[40][39] = 1;
            flag_point[39][49] = 1;
            flag_point[49][48] = 1;
            flag_point[48][23] = 1;
            flag_point[23][57] = 1;
            flag_point[57][59] = 1;
            flag_point[59][8] = 1;
            flag_point[8][61] = 1;
            flag_point[61][62] = 1;
            flag_point[62][7] = 1;
            }
            if(( walkRoute[i]== 10) && (walkRoute[i+1] == 9)){      //学生活动中心到交大公交站779m
            flag_point[9][40] = 1;
            flag_point[40][39] = 1;
            flag_point[39][67] = 1;
            flag_point[67][44] = 1;
            flag_point[44][43] = 1;
            flag_point[43][57] = 1;
            flag_point[57][59] = 1;
            flag_point[59][8] = 1;
            }
            if(( walkRoute[i]== 10) && (walkRoute[i+1] == 11)){      //学生活动中心到图书馆448m
                flag_point[9][40] = 1;
                flag_point[40][39] = 1;
                flag_point[39][38] = 1;
                flag_point[38][26]=1;
                flag_point[26][10]=1;
            }
            if(( walkRoute[i]== 10) && (walkRoute[i+1] == 12)){      //学生活中心到天佑会堂262m
                flag_point[9][40] = 1;
                flag_point[40][39] = 1;
                flag_point[39][67] = 1;
                flag_point[67][68]=1;
                flag_point[68][44]=1;
                flag_point[44][11]=1;
            }
            if((walkRoute[i]==10)&&(walkRoute[i+1]==13)){            //学活到嘉园557m
                flag_point[9][40] = 1;
                flag_point[40][39] = 1;
                flag_point[39][67] = 1;
                flag_point[67][68]=1;
                flag_point[68][44]=1;
                flag_point[44][43]=1;
                flag_point[43][23]=1;
                flag_point[23][22]=1;
                flag_point[22][12]=1;
            }
            if(( walkRoute[i]== 10) && (walkRoute[i+1] == 14)){      //学生活中心到校医院863m
                flag_point[9][40] = 1;
                flag_point[40][53]=1;
                flag_point[53][27]=1;
                flag_point[27][30]=1;
                flag_point[30][25]=1;
                flag_point[25][42]=1;
                flag_point[42][13]=1;
            }
            if(( walkRoute[i]== 10) && (walkRoute[i+1] == 15)){      //学生活中心到麦当劳616m
                flag_point[9][40] = 1;
                flag_point[40][39] = 1;
                flag_point[39][49]=1;
                flag_point[49][23]=1;
                flag_point[23][57]=1;
                flag_point[57][14]=1;
            }

            if((walkRoute[i]==11)&&(walkRoute[i+1]==1)){            //图书馆到西操
                flag_point[10][26] = 1;
                flag_point[26][34] = 1;
                flag_point[34][30] = 1;
                flag_point[30][27] = 1;
                flag_point[27][24] = 1;
                flag_point[24][0] = 1;
            }
            if(( walkRoute[i]==11) && (walkRoute[i+1] == 2)){      //图书馆到家属区
                flag_point[10][26]=1;
                flag_point[26][34]=1;
                flag_point[34][58]=1;
                flag_point[58][60]=1;
                flag_point[60][17]=1;
                flag_point[17][1]=1;
            }
            if(( walkRoute[i]== 11) && (walkRoute[i+1] == 3)){      //图书馆到东门
                flag_point[10][26] = 1;
                flag_point[26][34] = 1;
                flag_point[34][58] = 1;
                flag_point[58][60] = 1;
                flag_point[60][41] = 1;
                flag_point[41][2] = 1;
            }
            if(( walkRoute[i]== 11) && (walkRoute[i+1] == 4)){      //图书馆到思源楼
                flag_point[10][26] = 1;
                flag_point[26][29] = 1;
                flag_point[29][3] = 1;
            }
            if((walkRoute[i]==11)&&(walkRoute[i+1]==5)){            //图书馆到明湖
                flag_point[10][26] = 1;
                flag_point[26][4] = 1;
            }
            if(( walkRoute[i]== 11) && (walkRoute[i+1] == 6)){      //图书馆到逸夫148m
            flag_point[10][26] = 1;
            flag_point[26][15] = 1;
            flag_point[15][5] = 1;
            }
            if(( walkRoute[i]==11) && (walkRoute[i+1] == 7)){     //图书馆到南门407m
            flag_point[10][26] = 1;
            flag_point[26][32] = 1;
            flag_point[32][45] = 1;
            flag_point[45][43] = 1;
            flag_point[43][6] = 1;
            }
            if(( walkRoute[i]== 11) && (walkRoute[i+1] == 8)){     //图书馆到东区1教1.3km
            flag_point[10][26] = 1;
            flag_point[26][32] = 1;
            flag_point[32][45] = 1;
            flag_point[45][43] = 1;
            flag_point[43][57] = 1;
            flag_point[57][59] = 1;
            flag_point[59][8] = 1;
            flag_point[8][61] = 1;
            flag_point[61][62] = 1;
            flag_point[62][7] = 1;
            }
            if(( walkRoute[i]==11) && (walkRoute[i+1] == 9)){      //图书馆到交大公交站754m
            flag_point[10][26] = 1;
            flag_point[26][32] = 1;
            flag_point[32][45] = 1;
            flag_point[45][43] = 1;
            flag_point[43][57] = 1;
            flag_point[57][59] = 1;
            flag_point[59][8] = 1;
            }
            if(( walkRoute[i]== 11) && (walkRoute[i+1] == 10)){      //图书馆到学生活动中心448m
            flag_point[10][26] = 1;
            flag_point[26][38] = 1;
            flag_point[38][39] = 1;
            flag_point[39][40] = 1;
            flag_point[40][9] = 1;
            }
            if(( walkRoute[i]== 11) && (walkRoute[i+1] == 12)){      //图书馆到天佑会堂350m
                flag_point[10][26] = 1;
                flag_point[26][31] = 1;
                flag_point[31][44]=1;
                flag_point[44][11]=1;
            }
            if((walkRoute[i]==11)&&(walkRoute[i+1]==13)){            //图书馆到嘉园375m
                flag_point[10][26]=1;
                flag_point[26][47]=1;
                flag_point[47][22]=1;
                flag_point[22][12]=1;
            }
            if(( walkRoute[i]== 11) && (walkRoute[i+1] == 14)){      //图书馆到校医447m
                flag_point[10][26]=1;
                flag_point[26][34]=1;
                flag_point[34][25]=1;
                flag_point[25][42]=1;
                flag_point[42][13]=1;
            }
            if(( walkRoute[i]== 11) && (walkRoute[i+1] == 15)){      //图书馆到麦当劳591m
                flag_point[10][26]=1;
                flag_point[26][47]=1;
                flag_point[47][23]=1;
                flag_point[23][57]=1;
                flag_point[57][14]=1;
            }

            if((walkRoute[i]==12)&&(walkRoute[i+1]==1)){            //天佑会堂到西操
                flag_point[11][44] = 1;
                flag_point[44][68] = 1;
                flag_point[68][67] = 1;
                flag_point[67][27] = 1;
                flag_point[27][24] = 1;
                flag_point[24][0] = 1;
            }
            if(( walkRoute[i]== 12) && (walkRoute[i+1] == 2)){      //天佑会堂到家属区
                flag_point[11][44]=1;
                flag_point[44][28]=1;
                flag_point[28][17]=1;
                flag_point[17][1]=1;
            }
            if(( walkRoute[i]== 12) && (walkRoute[i+1] == 3)){      //天佑会堂到东门
                flag_point[11][44] = 1;
                flag_point[44][28] = 1;
                flag_point[28][41] = 1;
                flag_point[41][2] = 1;
            }
            if(( walkRoute[i]== 12) && (walkRoute[i+1] == 4)){      //天佑会堂到思源楼
                flag_point[11][44] = 1;
                flag_point[44][31] = 1;
                flag_point[31][29] = 1;
                flag_point[29][3] = 1;
            }
            if((walkRoute[i]==12)&&(walkRoute[i+1]==5)){              //天佑会堂到明湖327m
                flag_point[11][44] = 1;
                flag_point[44][31] = 1;
                flag_point[31][37] = 1;
                flag_point[37][4] = 1;
            }
            if(( walkRoute[i]== 12) && (walkRoute[i+1] == 6)){      //天佑会堂到逸夫476m
            flag_point[11][44] = 1;
            flag_point[44][31] = 1;
            flag_point[31][15] = 1;
            flag_point[15][5] = 1;
            }
            if(( walkRoute[i]== 12) && (walkRoute[i+1] == 7)){      //天佑会堂到南门168m
            flag_point[11][43] = 1;
            flag_point[43][6] = 1;
        }
            if(( walkRoute[i]== 12) && (walkRoute[i+1] == 8)){       //天佑会堂到东区1教1.0km
            flag_point[11][43] = 1;
            flag_point[43][57] = 1;
            flag_point[57][59] = 1;
            flag_point[59][8] = 1;
            flag_point[8][61] = 1;
            flag_point[61][62] = 1;
            flag_point[62][7] = 1;
            }
            if(( walkRoute[i]== 12) && (walkRoute[i+1] == 9)){      //天佑会堂到交大公交站1.1km
            flag_point[11][43] = 1;
            flag_point[43][57] = 1;
            flag_point[57][59] = 1;
            flag_point[59][8] = 1;
            }
            if(( walkRoute[i]== 12) && (walkRoute[i+1] == 10)){      //天佑会堂到学生活中心262m
            flag_point[11][44] = 1;
            flag_point[44][68] = 1;
            flag_point[68][67] = 1;
            flag_point[67][39] = 1;
            flag_point[39][40] = 1;
            flag_point[40][9] = 1;
            }
            if(( walkRoute[i]== 12) && (walkRoute[i+1] == 11)){      //天佑会堂到图书馆350m
                flag_point[11][44] = 1;
                flag_point[44][31] = 1;
                flag_point[31][26] = 1;
                flag_point[26][10] = 1;
            }
            if((walkRoute[i]==12)&&(walkRoute[i+1]==13)){            //天佑会堂到嘉园293m
                flag_point[11][43]=1;
                flag_point[43][23]=1;
                flag_point[23][22]=1;
                flag_point[22][12]=1;
            }
            if(( walkRoute[i]== 12) && (walkRoute[i+1] == 14)){      //天佑会堂到校医院809m
                flag_point[11][44]=1;
                flag_point[44][30]=1;
                flag_point[30][25]=1;
                flag_point[25][42]=1;
                flag_point[42][13]=1;
            }
            if(( walkRoute[i]== 12) && (walkRoute[i+1] == 15)){      //天佑会堂到麦当劳352m
                flag_point[11][43]=1;
                flag_point[43][6]=1;
                flag_point[6][57]=1;
                flag_point[57][14]=1;
            }

            if((walkRoute[i]==13)&&(walkRoute[i+1]==1)){            //嘉园到西操
                flag_point[12][22]=1;
                flag_point[22][23]=1;
                flag_point[23][49]=1;
                flag_point[49][27]=1;
                flag_point[27][24]=1;
                flag_point[24][0]=1;
            }
            if(( walkRoute[i]== 13) && (walkRoute[i+1] == 2)){      //嘉园到家属区
                flag_point[12][22]=1;
                flag_point[22][23]=1;
                flag_point[23][43]=1;
                flag_point[43][44]=1;
                flag_point[44][28]=1;
                flag_point[28][17]=1;
                flag_point[17][1]=1;
            }
            if(( walkRoute[i]== 13) && (walkRoute[i+1] == 3)){      //嘉园到东门
                flag_point[12][22] = 1;
                flag_point[22][23] = 1;
                flag_point[23][43] = 1;
                flag_point[43][44] = 1;
                flag_point[44][28] = 1;
                flag_point[28][41] = 1;
                flag_point[41][2] = 1;
            }
            if(( walkRoute[i]== 13) && (walkRoute[i+1] == 4)){      //嘉园到思源楼
                flag_point[12][22] = 1;
                flag_point[22][23] = 1;
                flag_point[23][43] = 1;
                flag_point[43][45] = 1;
                flag_point[45][32] = 1;
                flag_point[32][29] = 1;
                flag_point[29][3] = 1;
            }
            if(( walkRoute[i]== 13) && (walkRoute[i+1] == 5)){      //嘉园到明湖
                flag_point[12][22] = 1;
                flag_point[22][47] = 1;
                flag_point[47][26] = 1;
                flag_point[26][4] = 1;
            }
            if(( walkRoute[i]== 13) && (walkRoute[i+1] == 6)){     //嘉园到逸夫420m
            flag_point[12][22] = 1;
            flag_point[22][21] = 1;
            flag_point[21][20] = 1;
            flag_point[20][18] = 1;
            flag_point[18][15] = 1;
            flag_point[15][5] = 1;
            }
            if(( walkRoute[i]== 13) && (walkRoute[i+1] == 7)){      //嘉园到南门133m
            flag_point[12][22] = 1;
            flag_point[22][23] = 1;
            flag_point[23][6] = 1;
            }
            if(( walkRoute[i]== 13) && (walkRoute[i+1] == 8)){       //嘉园到东区1教1.0km
            flag_point[12][22] = 1;
            flag_point[22][23] = 1;
            flag_point[23][57] = 1;
            flag_point[57][66] = 1;
            flag_point[66][65] = 1;
            flag_point[65][64] = 1;
            flag_point[64][7] = 1;
            }
            if(( walkRoute[i]== 13) && (walkRoute[i+1] == 9)){       //嘉园到交大公交站490m
            flag_point[12][22] = 1;
            flag_point[22][23] = 1;
            flag_point[23][57] = 1;
            flag_point[57][59] = 1;
            flag_point[59][8] = 1;
            }
            if((walkRoute[i]==13)&&(walkRoute[i+1]==10)){            //嘉园到学活557m
            flag_point[12][22] = 1;
            flag_point[22][23] = 1;
            flag_point[23][43] = 1;
            flag_point[43][44] = 1;
            flag_point[44][68] = 1;
            flag_point[68][67] = 1;
            flag_point[67][39] = 1;
            flag_point[39][40] = 1;
            flag_point[40][9] = 1;
            }
            if((walkRoute[i]==13)&&(walkRoute[i+1]==11)){//嘉园到图书馆375m
            flag_point[12][22] = 1;
            flag_point[22][47] = 1;
            flag_point[47][26] = 1;
            flag_point[26][10] = 1;
            }
            if((walkRoute[i]==13)&&(walkRoute[i+1]==12)){             //嘉园到天佑会堂293m
            flag_point[12][22] = 1;
            flag_point[22][23] = 1;
            flag_point[23][43] = 1;
            flag_point[43][11] = 1;
            }
            if((walkRoute[i]==13)&&(walkRoute[i+1]==14)){            //嘉园到校医院823m
                flag_point[12][22] = 1;
                flag_point[22][47] = 1;
                flag_point[47][34] = 1;
                flag_point[34][25]=1;
                flag_point[25][42]=1;
                flag_point[42][13]=1;
            }
            if(( walkRoute[i]== 13) && (walkRoute[i+1] == 15)){      //嘉园到麦当劳327m
                flag_point[12][22]=1;
                flag_point[22][23]=1;
                flag_point[23][57]=1;
                flag_point[57][14]=1;
            }

            if((walkRoute[i]==14)&&(walkRoute[i+1]==1)){            //校医院到西操
                flag_point[13][42]=1;
                flag_point[42][25]=1;
                flag_point[25][30]=1;
                flag_point[30][27]=1;
                flag_point[27][24]=1;
                flag_point[24][0]=1;
            }
            if(( walkRoute[i]== 14) && (walkRoute[i+1] == 2)){      //校医院到家属区
                flag_point[13][42]=1;
                flag_point[42][41]=1;
                flag_point[41][17]=1;
                flag_point[17][1]=1;
            }
            if(( walkRoute[i]== 14) && (walkRoute[i+1] == 3)){      //校医院到东门
                flag_point[13][42] = 1;
                flag_point[42][41] = 1;
                flag_point[41][2] = 1;
            }
            if(( walkRoute[i]== 14) && (walkRoute[i+1] == 4)){      //校医院到思源楼
                flag_point[13][42] = 1;
                flag_point[42][25] = 1;
                flag_point[25][34] = 1;
                flag_point[34][26] = 1;
                flag_point[26][29] = 1;
                flag_point[29][3] = 1;
            }
            if((walkRoute[i]==14)&&(walkRoute[i+1]==5)){            //校医院到明湖
                flag_point[13][42] = 1;
                flag_point[42][25] = 1;
                flag_point[25][34] = 1;
                flag_point[34][4] = 1;
            }
        if(( walkRoute[i]== 14) && (walkRoute[i+1] == 6)){       //校医院到逸夫463m
            flag_point[13][42] = 1;
            flag_point[42][25] = 1;
            flag_point[25][58] = 1;
            flag_point[58][69] = 1;
            flag_point[69][15] = 1;
            flag_point[15][18] = 1;
            flag_point[18][15] = 1;
            flag_point[15][5] = 1;
            }
        if(( walkRoute[i]== 14) && (walkRoute[i+1] == 7)){       //校医院到南门868m
            flag_point[13][42] = 1;
            flag_point[42][25] = 1;
            flag_point[25][33] = 1;
            flag_point[33][45] = 1;
            flag_point[45][43] = 1;
            flag_point[43][6] = 1;
            }
        if(( walkRoute[i]== 14) && (walkRoute[i+1] == 8)){       //校医院到东区1教1.2km
            flag_point[13][42] = 1;
            flag_point[42][25] = 1;
            flag_point[25][71] = 1;
            flag_point[71][70] = 1;
            flag_point[70][66] = 1;
            flag_point[66][65] = 1;
            flag_point[65][64] = 1;
            flag_point[64][7] = 1;
            }
        if(( walkRoute[i]== 14) && (walkRoute[i+1] == 9)){      //校医院到交大公交站1.2km
            flag_point[13][42] = 1;
            flag_point[42][25] = 1;
            flag_point[25][33] = 1;
            flag_point[33][45] = 1;
            flag_point[45][43] = 1;
            flag_point[43][57] = 1;
            flag_point[57][59] = 1;
            flag_point[59][8] = 1;
            }
        if(( walkRoute[i]== 14) && (walkRoute[i+1] == 10)){      //校医院到学生活中心863m
            flag_point[13][42] = 1;
            flag_point[42][25] = 1;
            flag_point[25][30] = 1;
            flag_point[30][27] = 1;
            flag_point[27][53] = 1;
            flag_point[53][40] = 1;
            flag_point[40][9] = 1;
            }
            if(( walkRoute[i]== 14) && (walkRoute[i+1] == 11)){      //校医院到图书馆447m
                flag_point[13][42] = 1;
                flag_point[42][25] = 1;
                flag_point[25][34] = 1;
                flag_point[34][26] = 1;
                flag_point[26][10] = 1;
            }
        if(( walkRoute[i]== 14) && (walkRoute[i+1] == 12)){      //校医院到天佑会堂809m
            flag_point[13][42] = 1;
            flag_point[42][25] = 1;
            flag_point[25][30] = 1;
            flag_point[30][44] = 1;
            flag_point[44][11] = 1;
            }
        if((walkRoute[i]==14)&&(walkRoute[i+1]==13)){            //校医院到嘉园823m
            flag_point[13][42] = 1;
            flag_point[42][25] = 1;
            flag_point[25][34] = 1;
            flag_point[34][47] = 1;
            flag_point[47][22] = 1;
            flag_point[22][12] = 1;
            }
            if(( walkRoute[i]== 14) && (walkRoute[i+1] == 15)){      //校医院到麦当劳1km
                flag_point[13][42] = 1;
                flag_point[42][25] = 1;
                flag_point[25][71]=1;
                flag_point[71][70]=1;
                flag_point[70][57]=1;
                flag_point[57][14]=1;
            }

            if((walkRoute[i]==15)&&(walkRoute[i+1]==1)){            //麦当劳到西操
                flag_point[14][57]=1;
                flag_point[57][23]=1;
                flag_point[23][49]=1;
                flag_point[49][27]=1;
                flag_point[27][24]=1;
                flag_point[24][0]=1;
            }
            if(( walkRoute[i]== 15) && (walkRoute[i+1] == 2)){      //麦当劳到家属区
                flag_point[14][57]=1;
                flag_point[57][43]=1;
                flag_point[43][44]=1;
                flag_point[44][28]=1;
                flag_point[28][17]=1;
                flag_point[17][1]=1;
            }
            if(( walkRoute[i]== 15) && (walkRoute[i+1] == 3)){      //麦当劳到东门
                flag_point[14][57] = 1;
                flag_point[57][70] = 1;
                flag_point[70][2] = 1;
            }
            if(( walkRoute[i]== 15) && (walkRoute[i+1] == 4)){      //麦当劳到思源楼
                flag_point[14][57] = 1;
                flag_point[57][43] = 1;
                flag_point[43][45] = 1;
                flag_point[45][32] = 1;
                flag_point[32][29] = 1;
                flag_point[29][3] = 1;
            }
            if(( walkRoute[i]== 15) && (walkRoute[i+1] == 5)){//麦当劳到明湖
                flag_point[14][57] = 1;
                flag_point[57][43] = 1;
                flag_point[43][45] = 1;
                flag_point[45][32] = 1;
                flag_point[32][37] = 1;
                flag_point[37][4] = 1;
            }
        if(( walkRoute[i]== 15) && (walkRoute[i+1] == 6)){ //麦当劳到逸夫648m
            flag_point[14][57] = 1;
            flag_point[57][6] = 1;
            flag_point[6][23] = 1;
            flag_point[23][21] = 1;
            flag_point[21][20] = 1;
            flag_point[20][18] = 1;
            flag_point[18][15] = 1;
            flag_point[15][5] = 1;
            }
        if(( walkRoute[i]== 15) && (walkRoute[i+1] == 7)){//麦当劳到南门180m
            flag_point[14][57] = 1;
            flag_point[57][6] = 1;
            }
        if(( walkRoute[i]== 15) && (walkRoute[i+1] == 8)){//麦当劳到东区1教684m
            flag_point[14][59] = 1;
            flag_point[59][8] = 1;
            flag_point[8][62] = 1;
            flag_point[62][7] = 1;
            }
        if(( walkRoute[i]== 15) && (walkRoute[i+1] == 9)){ //麦当劳到交大公交站162m
            flag_point[14][59] = 1;
            flag_point[59][8] = 1;
            }
        if(( walkRoute[i]== 15) && (walkRoute[i+1] == 10)){ //麦当劳到学生活中心616m
            flag_point[14][57] = 1;
            flag_point[57][23] = 1;
            flag_point[23][49] = 1;
            flag_point[49][39] = 1;
            flag_point[39][40] = 1;
            flag_point[40][9] = 1;
            }
            if(( walkRoute[i]== 15) && (walkRoute[i+1] == 11)){//麦当劳到图书馆591m
                flag_point[14][57] = 1;
                flag_point[57][23] = 1;
                flag_point[23][47] = 1;
                flag_point[47][26] = 1;
                flag_point[26][10] = 1;
            }
        if(( walkRoute[i]== 15) && (walkRoute[i+1] == 12)){//麦当劳到天佑会堂352m
            flag_point[14][57] = 1;
            flag_point[57][6] = 1;
            flag_point[6][43] = 1;
            flag_point[43][11] = 1;
            }
        if(( walkRoute[i]== 15) && (walkRoute[i+1] == 13)){ //麦当劳到嘉园327m
            flag_point[14][57] = 1;
            flag_point[57][23] = 1;
            flag_point[23][22] = 1;
            flag_point[22][12] = 1;
            }
        if(( walkRoute[i]== 15) && (walkRoute[i+1] == 14)){  //麦当劳到校医院1km
            flag_point[14][57] = 1;
            flag_point[57][70] = 1;
            flag_point[70][71] = 1;
            flag_point[71][25] = 1;
            flag_point[25][42] = 1;
            flag_point[42][13] = 1;
            }
        }
}

void bjtuMap::paintEvent(QPaintEvent*event){
    QPainter painter(this);
    painter.drawPixmap(-60,0,761,571,QPixmap("D:\\CLion\\CampusGuide\\Resource\\bjtu01.jpg"));
    QPen pen1;
    pen1.setStyle(Qt::DotLine);
    pen1.setColor(Qt::red);
    pen1.setWidth(5);
    painter.setPen(pen1);
    //painter.drawLine(QPoint(0,0),QPoint(this->width(),this->height()));
    //painter.drawPoint(435,673);
    InitPoint();
    setRouteLine();
    outputInformation();
    printPlaceOrder();
    for(int i = 0; i < allPoint; i++)
        for(int j = 0; j < allPoint; j++){
            /*if((i<=j)&&(flag_point[i][j] == 1)){
                painter.drawLine(point[i],point[j]);
            }*/
           /* painter.drawLine(point[9],point[40]);
            painter.drawLine(point[40],point[53]);
            painter.drawLine(point[53],point[27]);
            painter.drawLine(point[27],point[30]);
            painter.drawLine(point[30],point[28]);
            painter.drawLine(point[28],point[41]);
            painter.drawLine(point[41],point[2]);*/
           if(( flag_point[i][j] == 1) && (flag_point[j][i] != 1)){
                painter.setPen(pen1);
                painter.drawLine(point[i],point[j]);
               // qDebug()<<"11111";
            }
            if(( flag_point[i][j] == 1) && (flag_point[j][i] == 1)){
                QPen pen2;
                pen2.setColor(Qt::red);
                pen2.setWidth(5);
                painter.setPen(pen2);
                painter.drawLine(point[i],point[j]);
                //qDebug()<<flag_point[j][i];
            }
            //painter.setPen(pen);
        }

}

void bjtuMap::printPlaceOrder(){

    int nowplace;     //记录的是标号，不是下标
   // qDebug()<<endl;
   // qDebug()<<"placeNum: "<<selectedPlaceNum<<endl;
    for(int i = 0; i < selectedPlaceNum; i++){
        nowplace = walkRoute[i];
        label[nowplace-1]->setPixmap(pic[i]);
    }

}

void bjtuMap::doProcessDataToMap(int num){
    selectedPlaceNum = num;
}

void bjtuMap::doProcessSaveWalkRouteToMap(int a,int b,int c,int d,int e,int f,int g,int h,int i,int j,int k,int l,int m,int n,int o,int p,int q,int r,int s,int t){
    walkRoute[0] = a;
    walkRoute[1] = b;
    walkRoute[2] = c;
    walkRoute[3] = d;
    walkRoute[4] = e;
    walkRoute[5] = f;
    walkRoute[6] = g;
    walkRoute[7] = h;
    walkRoute[8] = i;
    walkRoute[9] = j;
    walkRoute[10] = k;
    walkRoute[11] = l;
    walkRoute[12] = m;
    walkRoute[13] = n;
    walkRoute[14] = o;
    walkRoute[15] = p;
    walkRoute[16] = q;
    walkRoute[17] = r;
    walkRoute[18] = s;
    walkRoute[19] = t;
}

void bjtuMap::doProcessReturnToInquiry(bool){
    emit ReturnToInquiry();
}

