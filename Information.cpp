#include "Information.h"
#include "ui_Information.h"
#include <QDebug>
#include <QDesktopServices>
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
    spotPoints={ui->point0,ui->point_1,ui->point_2,ui->point_3,ui->point_4,ui->point_5,ui->point_6,ui->point_7,ui->point_8,ui->point_9,ui->point_10,
        ui->point_11,ui->point_12,ui->point_13,ui->point_14,ui->point_15,ui->point_16,ui->point_17,ui->point_18,ui->point_19,ui->point_20,
    ui->point_21,ui->point_22,ui->point_23,ui->point_24,ui->point_25,ui->point_26,ui->point_27,ui->point_28,ui->point_29,ui->point_30,
        ui->point_31,ui->point_32,ui->point_33,ui->point_34,ui->point_35,ui->point_36,ui->point_37,ui->point_38,ui->point_39,ui->point_40,
    ui->point_41,ui->point_42,ui->point_43,ui->point_44,ui->point_45,ui->point_46,ui->point_47,ui->point_48,ui->point_49,ui->point_50,
        ui->point_51,ui->point_52,ui->point_53,ui->point_54,ui->point_55,ui->point_56,ui->point_57,ui->point_58,ui->point_59,ui->point_60,
    ui->point_61,ui->point_62,ui->point_63,ui->point_64,ui->point_65,ui->point_66,ui->point_67,ui->point_68,ui->point_69,ui->point_70,
        ui->point_71};
  for(int i=0;i<spotPoints.size();i++) {
      spotPoints[i]->hide();
  }
    ui->addMapButton->hide();
    QPalette palette;
    palette.setColor(QPalette::Window, Qt::white);
    this->setPalette(palette);

    choose = new Choose(this);
    choose->hide();
    map = new bjtuMap(this);
    map->hide();

    //选择景点
    connect(ui->tb1,SIGNAL(clicked(bool)),this,SLOT(ToChoose(bool)));
    //查询景点
    connect(ui->tb2,SIGNAL(clicked(bool)),this,SLOT(doProcessOpenSchoolWeb(bool)));
    //查看地图
   connect(ui->addMapButton,SIGNAL(clicked(bool)),this,SLOT(ToPath(bool)));

    //将数据从choose传到Information,再从Information传到bjtuMap
    connect(choose,SIGNAL(signalDataToInform(int)),this,SLOT(doProcessDataToInform(int)));
    connect(this,SIGNAL(SignalDataToMap(int)),map,SLOT(doProcessDataToMap(int)));

    connect(choose,SIGNAL(SignalWalkRouteToInform(int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int)),
            this,SLOT(doProcessSaveWalkRouteToInform(int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int)));
    connect(this,SIGNAL(SignalWalkRouteToMap(int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int)),
            map,SLOT(doProcessSaveWalkRouteToMap(int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int)));

    connect(map,SIGNAL(ReturnToInquiry()),this,SLOT(BjtuMapReturnToThis()));

    InitIntroduction();
    spotButtons = { ui->spot1, ui->spot2, ui->spot3, ui->spot4, ui->spot5, ui->spot6, ui->spot7 ,ui->spot8,ui->spot9,ui->spot10,ui->spot11,ui->spot12,ui->spot13,ui->spot14,ui->spot15};
    // 连接每个景点按钮的信号到同一个槽函数
    for (int i = 0; i < spotButtons.size(); ++i) {
        connect(spotButtons[i],SIGNAL(clicked(bool)),this,SLOT(doProcessAddPlace(bool)));
    }
}

void Information::ToChoose(bool){
    flag_choose = 1;
   /* for(int i=0; i<spotButtons.size();i++){
        spotButtons[i]->hide();
    }
*/
    choose->show();
    choose->move(760,0);
    ui->addMapButton->show();
    ui->label->hide();
    ui->tb1->hide();
    ui->tb2->hide();
    ui->label_picture->hide();
    ui->textEdit->hide();
    ui->label_3->hide();
}


void Information::ToPath(bool){
  //  this->hide();
    map->show();
}

void Information::doProcessDataToInform(int selectedPlaceNum){
    emit SignalDataToMap(selectedPlaceNum);
}

void Information::doProcessSaveWalkRouteToInform(int a,int b,int c,int d,int e,int f,int g,int h,int i,int j,int k,int l,int m,int n,int o,int p,int q,int r,int s,int t){
    emit SignalWalkRouteToMap(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t);
}

void Information::BjtuMapReturnToThis(){
    map->hide();
    this->show();
    choose->show();
    choose->move(760,0);
   // ui->ptb_clear
}

void Information::InitIntroduction(){

Intro[0].num = 1;
Intro[0].str = "\t1. 西操\n\n"
               "  西操是北京交通大学的标志性体育场地之一，位于校区西北角。\n\n"
               "  作为一个多功能的运动场，西操不仅用于各类体育比赛，还承办校内大型活动。开放时间通常为全天\n\n"

               "  学生在这里跑步、参加晨跑，或是与同学们踢足球、打篮球，成为了校园文化的一部分。\n";

Intro[1].num = 2;
Intro[1].str = "\t2. 家属区\n\n"
               "  家属区是北京交通大学为教职工及家属提供的居住区，环境安静宜人。\n\n"
               "  这里的建筑风格典雅，绿树成荫，设施完善，是一个安静的生活区域。\n\n"
               "  学生偶尔会来这里拜访老师，与老师的家属互动，促进了校园内的温馨氛围。\n";

Intro[2].num = 3;
Intro[2].str = "\t3. 东门\n\n"
               "  家属区东门是北京交通大学的出入入口之一，也是进入校园的重要通道。\n\n"
               "  作为校门之一，东门是学生日常出入的主要途径，且往来交通方便。\n\n"
               "  东门外的交通枢纽使得学校的联系更为紧密，是许多学生和教职工的必经之地。\n";

Intro[3].num = 4;
Intro[3].str = "\t4. 思源楼\n\n"
               "  “饮水思源，爱国荣校”这是北交大的悠远历史，也是百年老校的翩翩风度。\n\n"
               "  穿过银杏大道，正前方就是这栋宏伟的高楼。\n\n"
               "  思源楼的楼层较高，低层部分是教学区，而上面则是供行政使用。\n\n"
               "  读过《岳阳楼记》、《黄鹤楼记》，但你一定没读过《思源楼记》\n\n"
               "  作为交大的标志性建筑，这是众多学子的热门“打卡地”。";

Intro[4].num = 5;
Intro[4].str = "\t5.明湖——北交大最美的地方!\n\n"
               "  明湖，取“明诚之意”\n\n"
               "  湖西北有亭，名为“爱知亭”，亭名也是由茅以升先生题字。\n\n"
               "  春有春草，夏有荷，秋有野鸭，冬赏雪。\n\n"
               "  湖水又清又绿，一阵风吹过，杨柳依依，碧波粼粼。\n";

Intro[5].num = 6;
Intro[5].str = "\t6. 逸夫楼\n\n"
               "  逸夫楼得名于香港知名慈善家邵逸夫先生，其捐助了教育基金以支持中国高校的建设。\n\n"
               "  该楼建筑风格现代，内部设有先进的实验室和教室，在这里，学生们可以接受到最先进的教育与技能培训，尤其是工程类课程。\n\n"
               "  逸夫楼不仅是课堂教学的场所，也是学术讲座和技术交流的中心。\n";

Intro[6].num = 7;
Intro[6].str = "\t7. 南门——亚洲最高的校门\n\n"
               "  如今我们看到的交大南门于1995年重新修建而成，高16米，重48吨。这里常常也是游客和新生的第一站\n\n"
               "  周身为紫褐色，借“紫气东来”的典故，蕴含着“紫门启航”的意味。\n\n"
               "  最高点是双面的蓝色交通大学校徽，校徽两侧分别印着“交通大学”的金色铜制大字\n\n"
               "  校门外两侧的石狮，是北京交通大学百年校庆时重庆校友会所赠。东侧的雄狮脚踩花球,西侧的雌狮，环抱小狮子。\n\n"
               ;

Intro[7].num = 8;
Intro[7].str = "\t8. 东教一楼\n\n"
               "  大一在东校区,这也是英语课程主要的上课地点。\n\n"
               "  东教一楼具有现代化的设施，楼内布置整洁，注重舒适与学习效率。\n\n"
               "  学生们常常在东教一楼交流，探讨学术问题，增强了校园的学术氛围。\n\n";

Intro[8].num = 9;
Intro[8].str = "\t9. 交大公交站\n\n"
               "  交大公交站位于北京交通大学的南门附近\n\n"
               "  这里与周边的公交线路相连接，方便学生往返校园与城市各个角落。\n\n"
               "  在高峰时段，交大公交站常常人来人往，成为学生和教职工的重要出行站点。\n\n"
               "  此外，公交站周围有多个商店和餐馆，许多学生习惯在等车时与同学们聚会。\n\n";

Intro[9].num = 10;
Intro[9].str = "\t10. 学生活动中心\n\n"
               "  吃喝、学习、娱乐一应俱全。\n\n  前三层是食堂，也有活动场地，三楼打造的很文艺，\n\n"
               "  五层及以上则是琴房和供话剧排练等的各种小教室...就连取火车票、一卡通业务也都是在这里一并办理的。\n\n"
               "  不仅如此，学活旁边还有一个下沉广场，同学们亲切的称之为“大坑”，\n\n"
               "  煎饼果子老冷面，手抓饼，涮串不出校门就能买到，还有打印室咖啡馆，和一个大超市。 \n";

Intro[10].num = 11;
Intro[10].str = "\t11. 图书馆\n\n"
               "  八卦形的图书馆前又捕获一座雕像!\n\n  捧书的茅以升老先生\n\n"
               "  有没有发现北交大的伟人雕像特别多呢?\n\n"
               "  不仅是我们北交大的荣誉校友，更是曾在1950年担任过北交大校长的茅以升先生。\n\n"
               "  他主持设计并组织修建的钱塘江公路铁路两用大桥，也是中国铁路桥梁史上的一个里程碑。\n";


    Intro[11].num = 12;
    Intro[11].str = "\t12. 天佑会堂\n\n"
                   "  北交大的天佑会堂是仅次于清华的全北京第二大的学校会堂。\n\n  前有詹天佑的铜像，象征着学校对中国铁路事业先驱的崇敬与追忆。\n\n"
                   "  许多大型演出和晚会活动都会这里举行。会堂共两层，灯光照明等设备全是重金打造的，十分专业。\n\n"
                   "  甚至不少流行歌手一汪苏泷、严爵等，都来此演出过，\n\n"
                   "  那英和黄晓明也来这儿宣传过电影《何以笙箫默》。\n\n";

    Intro[12].num = 13;
    Intro[12].str = "\t13. 嘉园\n\n"
                   "  嘉园是北京交通大学的一处生活区，集住宿与生活便利设施于一体。\n\n"
                   "  该区域内的建筑简约现代，适合学生们生活与学习。\n\n"
                   "  嘉园附近有食堂、超市、咖啡厅等多种生活设施，是学生日常生活的核心区域。\n\n"
                   "  学生在这里生活、用餐、交朋友，展现着校园的多彩与生动。\n\n";

    Intro[13].num = 14;
    Intro[13].str = "\t14. 校医院\n\n"
                   "  校医院有拔火罐和针灸的项目,\n"
                   "  设有门诊部、药房等，是校园内重要的医疗保障基地。\n\n"
                   "  这里的医护人员专业而友好，提供着基础医疗、急救及健康管理服务。\n\n"
                   "  校医院的出现让学生们能够在学习生活中得到健康保障，增加了校园的安全感。";

    Intro[14].num = 15;
    Intro[14].str = "\t15. 麦当劳\n\n"
                   "  要问北京特色美食是什么？\n  那必须是麦当劳！\n\n"
                   "  店铺设计现代、简洁，提供各种汉堡、薯条等美式快餐。\n\n"
                   "  麦当劳的开放时间长，学生们常常在这里聚会、聊天或是享受快餐。\n\n"
                   "  它也成为了许多学生社交的热门地点，提供了一个轻松愉快的交流空间。\n\n";
}

void Information::ShowIntroduction(){
    if(place == 1){
        ui->textEdit->setText(Intro[0].str);
        QPixmap pic=QPixmap("C:\\Users\\lenovo\\Desktop\\Resource\\1西操.jpg");
        ui->label_picture->setPixmap(pic);
    }
    if(place == 2){
        ui->textEdit->setText(Intro[1].str);
        //ui->textEdit->append(Intro[1].str);
        QPixmap pic=QPixmap("C:\\Users\\lenovo\\Desktop\\Resource\\2家属区.jpg");
        ui->label_picture->setPixmap(pic);
    }
    if(place == 3){
        ui->textEdit->setText(Intro[2].str);
        QPixmap pic=QPixmap("C:\\Users\\lenovo\\Desktop\\Resource\\3东门.jpg");
        ui->label_picture->setPixmap(pic);
    }
    if(place == 4){
        ui->textEdit->setText(Intro[3].str);
        QPixmap pic=QPixmap("C:\\Users\\lenovo\\Desktop\\Resource\\4思源楼.jpg");
        ui->label_picture->setPixmap(pic);
    }
    if(place == 5){
        ui->textEdit->setText(Intro[4].str);
        QPixmap pic=QPixmap("C:\\Users\\lenovo\\Desktop\\Resource\\5明湖.jpg");
        ui->label_picture->setPixmap(pic);
    }
    if(place == 6){
        ui->textEdit->setText(Intro[5].str);
        QPixmap pic=QPixmap("C:\\Users\\lenovo\\Desktop\\Resource\\6逸夫楼.jpg");
        ui->label_picture->setPixmap(pic);
    }
    if(place == 7){
        ui->textEdit->setText(Intro[6].str);
        QPixmap pic=QPixmap("C:\\Users\\lenovo\\Desktop\\Resource\\7南门.jpg");
        ui->label_picture->setPixmap(pic);
    }
    if(place == 8){
        ui->textEdit->setText(Intro[7].str);
        QPixmap pic=QPixmap("C:\\Users\\lenovo\\Desktop\\Resource\\8东区一教.jpg");
        ui->label_picture->setPixmap(pic);
    }
    if(place == 9){
        ui->textEdit->setText(Intro[8].str);
        QPixmap pic=QPixmap("C:\\Users\\lenovo\\Desktop\\Resource\\9交大公交站.jpg");
        ui->label_picture->setPixmap(pic);
    }
    if(place == 10){
        ui->textEdit->setText(Intro[9].str);
        QPixmap pic=QPixmap("C:\\Users\\lenovo\\Desktop\\Resource\\10学生活动中心.jpg");
        ui->label_picture->setPixmap(pic);
    }
    if(place == 11){
        ui->textEdit->setText(Intro[10].str);
        QPixmap pic=QPixmap("C:\\Users\\lenovo\\Desktop\\Resource\\11图书馆.jpg");
        ui->label_picture->setPixmap(pic);
    }
    if(place == 12){
        ui->textEdit->setText(Intro[11].str);
        QPixmap pic=QPixmap("C:\\Users\\lenovo\\Desktop\\Resource\\12天佑会堂.jpg");
        ui->label_picture->setPixmap(pic);
    }
    if(place == 13){
    ui->textEdit->setText(Intro[12].str);
    QPixmap pic=QPixmap("C:\\Users\\lenovo\\Desktop\\Resource\\13嘉园.jpg");
    ui->label_picture->setPixmap(pic);
    }
    if(place == 14){
        ui->textEdit->setText(Intro[13].str);
        QPixmap pic=QPixmap("C:\\Users\\lenovo\\Desktop\\Resource\\14校医院.jpg");
        ui->label_picture->setPixmap(pic);
    }
    if(place == 15){
        ui->textEdit->setText(Intro[14].str);
        QPixmap pic=QPixmap("C:\\Users\\lenovo\\Desktop\\Resource\\15麦当劳.jpg");
        ui->label_picture->setPixmap(pic);
    }
}

void Information::doProcessAddPlace(bool){
    QPushButton *clickedButton = qobject_cast<QPushButton*>(sender());
    if (clickedButton) {
        QString buttonText =clickedButton->objectName();
        QString s = buttonText.mid(4);
        place = s.toInt();
        ui->label_3->hide();
        ui->label_4->hide();
        ShowIntroduction();
    }
}

void Information::doProcessOpenSchoolWeb(bool){
    const QUrl regUrl(QLatin1String("http://www.bjtu.edu.cn/"));
    QDesktopServices::openUrl(regUrl);
}



