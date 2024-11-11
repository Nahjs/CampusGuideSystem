#include "Information.h"
#include "ui_Information.h"
#include <QDebug>
#include<stdlib.h>

Information::Information(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Information)
{
    ui->setupUi(this);
    Init();
}

Information::~Information()
{
    delete ui;
}

void Information::Init(){
    setAutoFillBackground(true);
   // ui->addMapButton->hide();
    QPalette palette;
    palette.setColor(QPalette::Window, Qt::white);
    this->setPalette(palette);

    spotButtons = { ui->spot1, ui->spot2, ui->spot3, ui->spot4, ui->spot5, ui->spot6, ui->spot7 ,ui->spot8,ui->spot9,ui->spot10};
    for(int i=0; i<10;i++){
        spotButtons[i]->hide();
    }


    choose = new Choose(this);
    choose->hide();
    inquiry = new Inquiry(this);
    inquiry->hide();
    map = new Map();
    map->hide();

    //选择景点
    connect(ui->tb1,SIGNAL(clicked(bool)),this,SLOT(ToChoose(bool)));
    //查询景点
    connect(ui->tb2,SIGNAL(clicked(bool)),this,SLOT(ToIntroduction(bool)));
    //查看地图
   connect(ui->addMapButton,SIGNAL(clicked(bool)),this,SLOT(ToPath(bool)));

    //将数据从choose传到Information,再从Information传到bjtuMap
    connect(choose,SIGNAL(signalDataToInform(int)),this,SLOT(doProcessDataToInform(int)));
    connect(this,SIGNAL(SignalDataToMap(int)),map,SLOT(doProcessDataToMap(int)));

    connect(choose,SIGNAL(SignalWalkRouteToInform(int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int)),
            this,SLOT(doProcessSaveWalkRouteToInform(int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int)));
    connect(this,SIGNAL(SignalWalkRouteToMap(int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int)),
            map,SLOT(doProcessSaveWalkRouteToMap(int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int)));

  //  connect(choose,SIGNAL(SignalArriveTimeToInform(QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString)),
    //        this,SLOT(doProcessSaveArriveTimeToInform(QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString)));
   /* connect(this,SIGNAL(SignalArriveTimeToMap(QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString)),
            path,SLOT(doProcessSaveArriveTimeToMap(QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString,QString)));
*/
//    connect(choose,SIGNAL(SignalStayTimeRouteToInform(int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int)),
  //          this,SLOT(doProcessSaveStayTimeRouteToInform(int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int)));
  /*  connect(this,SIGNAL(SignalStayTimeRouteToMap(int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int)),
            path,SLOT(doProcessSaveStayTimeRouteToMap(int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int)));
            */
    connect(map,SIGNAL(ReturnToInquiry()),this,SLOT(BjutMapReturnToThis()));

}

void Information::ToChoose(bool){
    flag_choose = 1;
    choose->show();
    for(int i=0; i<10;i++){
        spotButtons[i]->show();
    }
    choose->move(760,0);
    ui->label->hide();
    ui->tb1->hide();
    ui->tb2->hide();
    ui->label_3->hide();
    ui->addMapButton->show();

    if(flag_inquiry == 1){
        inquiry->hide();
        flag_inquiry=0;
    }
    if(flag_path == 1){
        ui->label->hide();
        flag_path = 0;
    }

}

void Information::ToIntroduction(bool){
    flag_inquiry=1;
    //inquiry=new Inquiry(this);
    if(flag_choose == 1){
        choose->hide();
        flag_choose = 0;
     }
    ui->addMapButton->hide();
    ui->label->hide();
    ui->label_3->hide();
    ui->tb1->hide();
    ui->tb2->hide();
    inquiry->show();
}

void Information::ToPath(bool){
    this->hide();
    map->show();
    if(flag_choose == 1){
        choose->hide();
        flag_choose = 0;
    }
    if(flag_inquiry == 1){
        inquiry->hide();
        flag_inquiry=0;
    }
}

void Information::doProcessDataToInform(int selectedPlaceNum){
    //ui->label_3->setText(QString::number(selectedPlaceNum));
    emit SignalDataToMap(selectedPlaceNum);
}

void Information::doProcessSaveWalkRouteToInform(int a,int b,int c,int d,int e,int f,int g,int h,int i,int j,int k,int l,int m,int n,int o,int p,int q,int r,int s,int t){
    emit SignalWalkRouteToMap(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t);
}
/*
void Information::doProcessSaveArriveTimeToInform(QString a,QString b,QString c,QString d,QString e,QString f,QString g,QString h,QString i,QString j,QString k,QString l,QString m,QString n,QString o,QString p,QString q,QString r,QString s,QString t){
    emit SignalArriveTimeToMap(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t);
}

void Information::doProcessSaveStayTimeRouteToInform(int a,int b,int c,int d,int e,int f,int g,int h,int i,int j,int k,int l,int m,int n,int o,int p,int q,int r,int s,int t){
    emit SignalStayTimeRouteToMap(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t);
}
*/

void Information::BjtuMapReturnToThis(){

    map->hide();
    inquiry->hide();
    ui->label->hide();
    ui->tb1->hide();
    ui->tb2->hide();
    ui->label_3->hide();
    ui->addMapButton->show();
    choose->show();
    choose->move(760,0);
}






