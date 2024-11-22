#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QDesktopServices>
#include<stdlib.h>
#include <QMessageBox>
#include <QListWidgetItem>
#include "matrices.h"

mainwindow::mainwindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::mainwindow)
{
    ui->setupUi(this);
    Init();
}

mainwindow::~mainwindow()
{
    delete ui;
}

void mainwindow::Init(){
    QPalette palette;
    palette.setColor(QPalette::Window, Qt::white);
    this->setPalette(palette);

    InitPoint();
    InitIntroduction();

    setAutoFillBackground(true);

    spotPoints={ui->point0,ui->point_1,ui->point_2,ui->point_3,ui->point_4,ui->point_5,ui->point_6,ui->point_7,ui->point_8,ui->point_9,ui->point_10,ui->point_11,ui->point_12,ui->point_13,ui->point_14,ui->point_15,ui->point_16,ui->point_17,ui->point_18,ui->point_19,ui->point_20,ui->point_21,ui->point_22,ui->point_23,ui->point_24,ui->point_25,ui->point_26,ui->point_27,ui->point_28,ui->point_29,ui->point_30,ui->point_31,ui->point_32,ui->point_33,ui->point_34,ui->point_35,ui->point_36,ui->point_37,ui->point_38,ui->point_39,ui->point_40,ui->point_41,ui->point_42,ui->point_43,ui->point_44,ui->point_45,ui->point_46,ui->point_47,ui->point_48,ui->point_49,ui->point_50,ui->point_51,ui->point_52,ui->point_53,ui->point_54,ui->point_55,ui->point_56,ui->point_57,ui->point_58,ui->point_59,ui->point_60,ui->point_61,ui->point_62,ui->point_63,ui->point_64,ui->point_65,ui->point_66,ui->point_67,ui->point_68,ui->point_69,ui->point_70,ui->point_71};

    for(int i=0;i<spotPoints.size();i++) {
      spotPoints[i]->hide();
    }

    places = {"1 西操", "2 家属区", "3 东门", "4 思源楼", "5 明湖", "6 逸夫楼", "7 南门","8 东区一教", "9 交大公交站", "10 学活", "11 图书馆", "12 天佑会堂"};

    for (const QString &place : places) {
        ui->endComboBox->addItem(place);
    }

    spotButtons = { ui->spot1, ui->spot2, ui->spot3, ui->spot4, ui->spot5, ui->spot6, ui->spot7 ,ui->spot8,ui->spot9,ui->spot10,ui->spot11,ui->spot12};

    // 在绘制之前，把按钮显示在最上层
    for (auto button : spotButtons) {
        button->raise();
    }

    // 连接信号到槽函数
    for (int i = 0; i < spotButtons.size(); ++i) {
        connect(spotButtons[i],SIGNAL(clicked(bool)),this,SLOT(doProcessAddPlace(bool)));
    }
    connect(ui->startLineEdit, &QLineEdit::textChanged, this, &mainwindow::onStartPointChanged);
    connect(ui->dfsButton, &QPushButton::clicked, this, &mainwindow::onDFSButtonClicked);
    connect(ui->shortestPathButton, &QPushButton::clicked, this, &mainwindow::onShortestPathButtonClicked);
    connect(ui->mstButton, &QPushButton::clicked, this, &mainwindow::onMSTButtonClicked);
    connect(ui->dfsRoute, &QListWidget::itemClicked, this, &mainwindow::onPathItemClicked);
}

void mainwindow::InitPoint(){
    //初始化各点的坐标
    point[0] = QPoint(140,120);//西操
    point[1] = QPoint(355,70);//家属区
    point[2] = QPoint(590,85);//东门
    point[3] = QPoint(250,180);//思源楼
    point[4] = QPoint(355,174);//明湖
    point[5] = QPoint(481,210);//逸夫楼
    point[6] = QPoint(255,300);//南门
    point[7] = QPoint(480,444);//东区一教
    point[8] = QPoint(320,432);//交大公交站
    point[9] = QPoint(75,200);//学活
    point[10] = QPoint(430,174);//图书馆
    point[11] = QPoint(200,250);//天佑会堂
}
void mainwindow::InitIntroduction(){
Intro[0].num = 1;
Intro[0].str = "1. 西操\n\n"
               "  西操是北京交通大学的标志性体育场地之一，位于校区西北角。\n\n"
               "  作为一个多功能的运动场，西操不仅用于各类体育比赛，还承办校内大型活动。开放时间通常为全天\n\n"

               "  学生在这里跑步、参加晨跑，或是与同学们踢足球、打篮球，成为了校园文化的一部分。\n";

Intro[1].num = 2;
Intro[1].str = "2. 家属区\n\n"
               "  家属区是北京交通大学为教职工及家属提供的居住区，环境安静宜人。\n\n"
               "  这里的建筑风格典雅，绿树成荫，设施完善，是一个安静的生活区域。\n\n"
               "  学生偶尔会来这里拜访老师，与老师的家属互动，促进了校园内的温馨氛围。\n";

Intro[2].num = 3;
Intro[2].str = "3. 东门\n\n"
               "  家属区东门是北京交通大学的出入入口之一，也是进入校园的重要通道。\n\n"
               "  作为校门之一，东门是学生日常出入的主要途径，且往来交通方便。\n\n"
               "  东门外的交通枢纽使得学校的联系更为紧密，是许多学生和教职工的必经之地。\n";

Intro[3].num = 4;
Intro[3].str = "4. 思源楼\n\n"
               "  “饮水思源，爱国荣校”这是北交大的悠远历史，也是百年老校的翩翩风度。\n\n"
               "  穿过银杏大道，正前方就是这栋宏伟的高楼。\n\n"
               "  思源楼的楼层较高，低层部分是教学区，而上面则是供行政使用。\n\n"
               "  读过《岳阳楼记》、《黄鹤楼记》，但你一定没读过《思源楼记》\n\n"
               "  作为交大的标志性建筑，这是众多学子的热门“打卡地”。";

Intro[4].num = 5;
Intro[4].str = "5.明湖——北交大最美的地方!\n\n"
               "  明湖，取“明诚之意”\n\n"
               "  湖西北有亭，名为“爱知亭”，亭名也是由茅以升先生题字。\n\n"
               "  春有春草，夏有荷，秋有野鸭，冬赏雪。\n\n"
               "  湖水又清又绿，一阵风吹过，杨柳依依，碧波粼粼。\n";

Intro[5].num = 6;
Intro[5].str = "6. 逸夫楼\n\n"
               "  逸夫楼得名于香港知名慈善家邵逸夫先生，其捐助了教育基金以支持中国高校的建设。\n\n"
               "  该楼建筑风格现代，内部设有先进的实验室和教室，在这里，学生们可以接受到最先进的教育与技能培训，尤其是工程类课程。\n\n"
               "  逸夫楼不仅是课堂教学的场所，也是学术讲座和技术交流的中心。\n";

Intro[6].num = 7;
Intro[6].str = "7. 南门——亚洲最高的校门\n\n"
               "  如今我们看到的交大南门于1995年重新修建而成，高16米，重48吨。这里常常也是游客和新生的第一站\n\n"
               "  周身为紫褐色，借“紫气东来”的典故，蕴含着“紫门启航”的意味。\n\n"
               "  最高点是双面的蓝色交通大学校徽，校徽两侧分别印着“交通大学”的金色铜制大字\n\n"
               "  校门外两侧的石狮，是北京交通大学百年校庆时重庆校友会所赠。东侧的雄狮脚踩花球,西侧的雌狮，环抱小狮子。\n\n"
               ;

Intro[7].num = 8;
Intro[7].str = "8. 东教一楼\n\n"
               "  大一在东校区,这也是英语课程主要的上课地点。\n\n"
               "  东教一楼具有现代化的设施，楼内布置整洁，注重舒适与学习效率。\n\n"
               "  学生们常常在东教一楼交流，探讨学术问题，增强了校园的学术氛围。\n\n";

Intro[8].num = 9;
Intro[8].str = "9. 交大公交站\n\n"
               "  交大公交站位于北京交通大学的南门附近\n\n"
               "  这里与周边的公交线路相连接，方便学生往返校园与城市各个角落。\n\n"
               "  在高峰时段，交大公交站常常人来人往，成为学生和教职工的重要出行站点。\n\n"
               "  此外，公交站周围有多个商店和餐馆，许多学生习惯在等车时与同学们聚会。\n\n";

Intro[9].num = 10;
Intro[9].str = "10. 学生活动中心\n\n"
               "  吃喝、学习、娱乐一应俱全。\n\n  前三层是食堂，也有活动场地，三楼打造的很文艺，\n\n"
               "  五层及以上则是琴房和供话剧排练等的各种小教室...就连取火车票、一卡通业务也都是在这里一并办理的。\n\n"
               "  不仅如此，学活旁边还有一个下沉广场，同学们亲切的称之为“大坑”，\n\n"
               "  煎饼果子老冷面，手抓饼，涮串不出校门就能买到，还有打印室咖啡馆，和一个大超市。 \n";

Intro[10].num = 11;
Intro[10].str = "11. 图书馆\n\n"
               "  八卦形的图书馆前又捕获一座雕像!\n\n  捧书的茅以升老先生\n\n"
               "  有没有发现北交大的伟人雕像特别多呢?\n\n"
               "  不仅是我们北交大的荣誉校友，更是曾在1950年担任过北交大校长的茅以升先生。\n\n"
               "  他主持设计并组织修建的钱塘江公路铁路两用大桥，也是中国铁路桥梁史上的一个里程碑。\n";


    Intro[11].num = 12;
    Intro[11].str = "12. 天佑会堂\n\n"
                   "  北交大的天佑会堂是仅次于清华的全北京第二大的学校会堂。\n\n  前有詹天佑的铜像，象征着学校对中国铁路事业先驱的崇敬与追忆。\n\n"
                   "  许多大型演出和晚会活动都会这里举行。会堂共两层，灯光照明等设备全是重金打造的，十分专业。\n\n"
                   "  甚至不少流行歌手一汪苏泷、严爵等，都来此演出过，\n\n"
                   "  那英和黄晓明也来这儿宣传过电影《何以笙箫默》。\n\n";

    Intro[12].num = 13;
    Intro[12].str = "13. 嘉园\n\n"
                   "  嘉园是北京交通大学的一处生活区，集住宿与生活便利设施于一体。\n\n"
                   "  该区域内的建筑简约现代，适合学生们生活与学习。\n\n"
                   "  嘉园附近有食堂、超市、咖啡厅等多种生活设施，是学生日常生活的核心区域。\n\n"
                   "  学生在这里生活、用餐、交朋友，展现着校园的多彩与生动。\n\n";

    Intro[13].num = 14;
    Intro[13].str = "14. 校医院\n\n"
                   "  校医院有拔火罐和针灸的项目,\n"
                   "  设有门诊部、药房等，是校园内重要的医疗保障基地。\n\n"
                   "  这里的医护人员专业而友好，提供着基础医疗、急救及健康管理服务。\n\n"
                   "  校医院的出现让学生们能够在学习生活中得到健康保障，增加了校园的安全感。";

    Intro[14].num = 15;
    Intro[14].str = "15. 麦当劳\n\n"
                   "  要问北京特色美食是什么？\n  那必须是麦当劳！\n\n"
                   "  店铺设计现代、简洁，提供各种汉堡、薯条等美式快餐。\n\n"
                   "  麦当劳的开放时间长，学生们常常在这里聚会、聊天或是享受快餐。\n\n"
                   "  它也成为了许多学生社交的热门地点，提供了一个轻松愉快的交流空间。\n\n";
}


void mainwindow::onStartPointChanged(const QString &text) {
    // 获取用户输入的起点编号
    bool ok;
    int startIndex = text.toInt(&ok);

    // 如果输入非法，显示所有选项
    if (!ok || startIndex < 0 || startIndex >= 15) {
        updateEndComboBox(-1); // -1 表示显示所有点
        return;
    }

    // 输入合法，更新终点复选框内容
    updateEndComboBox(startIndex-1);
}
void mainwindow::updateEndComboBox(int excludeIndex) {
    // 清空终点复选框
    ui->endComboBox->clear();

    for (int i = 0; i < places.size(); i++) {
        if (i != excludeIndex) {
            ui->endComboBox->addItem(places[i]);
        }
    }
}

void mainwindow::onDFSButtonClicked() {
    // 获取起点编号
    bool ok;
    int startIndex = ui->startLineEdit->text().toInt(&ok);
    if (!ok || startIndex <= 0 || startIndex > 12) {
        QMessageBox::warning(this, "错误", "请输入有效的起点编号！");
        return;
    }
    // 清除之前的路径显示
    ui->dfsRoute->clear();

    // 初始化路径相关变量
    QVector<int> visited(12, 0);  // 记录访问状态
    QVector<int> dfsPath;         // 临时保存路径
    QVector<QVector<int>> allPaths; // 保存所有路径

    // 执行DFS
    DFS(startIndex - 1, visited, dfsPath, allPaths);

    // 检查是否有路径
    if (allPaths.isEmpty()) {
        QMessageBox::information(this, "提示", "没有找到路径！");
        return;
    }

    // 计算每条路径的长度
    QVector<QPair<int, QVector<int>>> pathsWithLength;
    for (const auto& path : allPaths) {
        int pathLength = calculatePathLength(path); // 计算路径长度
        pathsWithLength.append(qMakePair(pathLength, path)); // 存储路径和它的长度
    }

    // 按路径长度排序，最短路径排在前面
    std::sort(pathsWithLength.begin(), pathsWithLength.end(), [](const QPair<int, QVector<int>>& p1, const QPair<int, QVector<int>>& p2) {
        return p1.first < p2.first; // 按路径长度从小到大排序
    });

    // 获取最短路径
    QVector<int> shortestPath = pathsWithLength.first().second;

    // 显示所有路径及其总长度
    displayPathsAndLength(allPaths);

    // 设置最短路径
    this->path = shortestPath;

  // 更新路径信息显示
    int shortestPathLength = calculatePathLength(shortestPath);
    QString pathInfo = QString("路径长度：%1m  详细路线：").arg(shortestPathLength);
    for (int i = 0; i < shortestPath.size(); ++i) {
        pathInfo += QString::number(shortestPath[i] + 1);  // 使用 1-based 索引显示
        if (i < shortestPath.size() - 1) {
            pathInfo += " -> ";  // 地点之间用 "->" 连接
        }
    }
    // 触发重绘，更新图形
    update();  // 调用 `paintEvent` 重新绘制图形
}
void mainwindow::onShortestPathButtonClicked() {
        // 获取起点编号
        bool ok;
        int startIndex = ui->startLineEdit->text().toInt(&ok);

        // 检查起点输入是否合法
        if (!ok || startIndex <= 0 || startIndex > 12) {
            QMessageBox::warning(this, "错误", "请输入有效的起点编号 (1-12)！");
            return;
        }

        // 获取终点名称
        QString selectedPlace = ui->endComboBox->currentText();
        int endIndex = -1;

        // 遍历 places 数组，找到对应编号
        for (int i = 0; i < 12; ++i) {
            if (places[i] == selectedPlace) {
                endIndex = i;
                break;
            }
        }

        // 调用 Dijkstra 算法
        QPair<int, QVector<int>> result = dijkstra(startIndex - 1, endIndex);

        // 获取最短路径和总距离
        int shortestDistance = result.first;
        QVector<int> shortestPath = result.second;

        // 将路径保存，触发绘图
        this->path = shortestPath; // 保存最短路径
        update(); // 触发重绘

        // 显示最短路径和路径长度
        QString pathInfo = QString("最短距离：%1m\n详细路线：").arg(shortestDistance);
        for (int i = 0; i < shortestPath.size(); ++i) {
            pathInfo += QString::number(shortestPath[i] + 1);  // 使用 1-based 索引
            if (i < shortestPath.size() - 1) {
                pathInfo += " -> ";  // 地点之间用 "->" 连接
            }
        }
        // 显示路径信息
        ui->pathInfoLabel->setText(pathInfo);
}
void mainwindow::onMSTButtonClicked() {
    // 调用 Prim 算法
    QVector<QPair<int, int>> mstEdges = primMST();

    // 保存生成树边集并触发绘图
    this->mstEdges = mstEdges;
    update(); // 触发重绘
}

//深度优先搜索（DFS）
void mainwindow::DFS(int start, QVector<int> &visited, QVector<int> &path, QVector<QVector<int>> &allPaths) {
    visited[start] = 1;  // 标记当前点为已访问
    path.append(start);   // 将当前点加入路径

    // 如果当前路径的节点数量已达到所有节点数，保存路径
    if (path.size() == 12) {
        allPaths.append(path);  // 保存当前路径
    } else {
        // 继续遍历所有未访问的邻居
        for (int i = 0; i < 12; i++) {
            // 仅在图中有有效边（权重大于0），且目标点未被访问过时才继续搜索
            if (BJTUMap[start][i] > 0 && !visited[i]) {
                DFS(i, visited, path, allPaths);
            }
        }
    }

    // 回溯
    visited[start] = 0;  // 标记当前点为未访问
    path.removeLast();   // 移除当前点，回溯到上一个点
}

//Dijkstra 算法求从起点到其他景点的最短路径
QPair<int, QVector<int>> mainwindow::dijkstra(int start, int end) {
    QVector<int> dist(12, INT_MAX); // 距离数组
    QVector<int> prev(12, -1); // 前驱数组
    QVector<bool> visited(12, false); // 已访问标记
    dist[start] = 0;

    for (int i = 0; i < 12; i++) {
        // 找到未访问中距离最小的节点
        int minDist = INT_MAX, u = -1;
        for (int j = 0; j < 12; j++) {
            if (!visited[j] && dist[j] < minDist) {
                minDist = dist[j];
                u = j;
            }
        }

        if (u == -1) break; // 无法继续访问
        visited[u] = true;

        // 更新邻接节点的距离
        for (int v = 0; v < 12; v++) {
            // 如果 v 是 u 的邻接点，并且 u 到 v 的距离更短，更新 dist 和 prev
            if (BJTUMap[u][v] > 0 && dist[u] != INT_MAX && dist[u] + BJTUMap[u][v] < dist[v]) {
                dist[v] = dist[u] + BJTUMap[u][v];
                prev[v] = u;
            }
        }
    }

    // 回溯路径
    QVector<int> path;
    int totalDistance = dist[end]; // 获取最短路径的距离
    for (int v = end; v != -1; v = prev[v]) {
        path.prepend(v);
    }

    return qMakePair(totalDistance, path); // 返回路径和总距离
}

//使用 Prim 算法构造最小生成树
QVector<QPair<int, int>> mainwindow::primMST() {
    QVector<bool> inMST(12, false);
    QVector<int> key(12, INT_MAX);
    QVector<int> parent(12, -1);
    key[0] = 0;

    for (int count = 0; count < 12; count++) {
        int u = -1, minKey = INT_MAX;

        // 找到未包含在 MST 中的权值最小的节点
        for (int i = 0; i < 12; i++) {
            if (!inMST[i] && key[i] < minKey) {
                minKey = key[i];
                u = i;
            }
        }

        inMST[u] = true;

        // 更新邻接节点的权值
        for (int v = 0; v < 12; v++) {
            if (BJTUMap[u][v] > 0 && !inMST[v] && BJTUMap[u][v] < key[v]) {
                key[v] = BJTUMap[u][v];
                parent[v] = u;
            }
        }
    }

    // 构造 MST 边集
    QVector<QPair<int, int>> mstEdges;
    for (int i = 1; i < 12; i++) {
        mstEdges.append(qMakePair(parent[i], i));
    }
    return mstEdges;
}

// 计算路径的总长度
int mainwindow::calculatePathLength(const QVector<int>& path) {
    int totalLength = 0;
    for (int i = 0; i < path.size() - 1; i++) {
        int currentNode = path[i];
        int nextNode = path[i + 1];
        // 累加当前节点到下一个节点的边的权重
        totalLength += BJTUMap[currentNode][nextNode];
    }
    return totalLength;
}

// 显示路径及其总长度到界面
void mainwindow::displayPathsAndLength(const QVector<QVector<int>>& allPaths) {
    // 清除之前的显示内容
    ui->dfsRoute->clear();

    // 1. 对所有路径按长度进行排序（如果你希望按路径长度排序）
    QVector<QVector<int>> sortedPaths = allPaths;
    std::sort(sortedPaths.begin(), sortedPaths.end(), [this](const QVector<int>& path1, const QVector<int>& path2) {
        return calculatePathLength(path1) < calculatePathLength(path2); // 按路径长度排序
    });

    // 2. 将每条路径格式化为 "地点1 -> 地点2 -> 地点3 ..." 并添加到 QListWidget
    for (const auto& path : sortedPaths) {
        QString pathStr;
        pathStr += "距离：" + QString::number(calculatePathLength(path))+"m | ";  // 添加路径长度
        for (int i = 0; i < path.size(); ++i) {
            pathStr += QString::number(path[i] + 1);  // 1-based index
            if (i < path.size() - 1) {
                pathStr += " -> ";  // 地点之间用 "->" 连接
            }
        }
        // 将路径作为可点击项添加到 QListWidget
        QListWidgetItem *item = new QListWidgetItem(pathStr);
        ui->dfsRoute->addItem(item);
    }
}

// 当用户点击路径列表中的某一项时，更新当前路径
void mainwindow::onPathItemClicked(QListWidgetItem *item) {
    // 获取用户点击的路径文本
    QString selectedPath = item->text();

    // 提取路径长度和节点路径
    QStringList parts = selectedPath.split("|");  // 分割 "距离：" 和 "详细路线：" 部分
    if (parts.size() < 2) {
        qDebug() << "路径格式错误";
        return;
    }

    // 提取路径部分 "详细路线："
    QString pathDetail = parts[1].trimmed();  // 去掉多余的空格

    // 解析节点路径，格式为 "1 -> 2 -> 3 -> ... "
    QStringList nodesStrList = pathDetail.split(" -> ");

    QVector<int> newPath;
    for (const QString &nodeStr : nodesStrList) {
        newPath.append(nodeStr.toInt() - 1);  // 转换为 0-based index
    }

    // 更新当前路径
    this->path = newPath;

    // 计算选中路径的长度
    int pathLength = calculatePathLength(newPath);

    // 更新显示路径的标签
    QString pathInfo = QString("路径长度：%1m  详细路线：").arg(pathLength);
    for (int i = 0; i < newPath.size(); ++i) {
        pathInfo += QString::number(newPath[i] + 1);  // 1-based index
        if (i < newPath.size() - 1) {
            pathInfo += " -> ";  // 地点之间用 "->" 连接
        }
    }

    // 更新UI上的路径信息（可以是 QLabel 或其他显示组件）
  //  ui->pathInfoLabel->setText(pathInfo);

    // 触发重绘，更新图形
    update();  // 调用 `paintEvent` 重新绘制图形
}

// 自定义解析路径字符串的函数
QVector<int> mainwindow::parsePathString(const QString& pathStr) {
    QVector<int> path;

    // 去掉路径字符串中的 "Length: xxx" 部分，只保留地点节点部分
    QStringList pathNodes = pathStr.split(" |")[0].split(" -> ");

    // 将路径字符串转换为节点 ID（0-based）
    for (const QString& node : pathNodes) {
        bool ok;
        int nodeId = node.trimmed().toInt(&ok) - 1;  // 将字符串转为数字并减去1转换为0-based索引
        if (ok) {
            path.append(nodeId);
        }
    }

    return path;
}

//绘制路径
void mainwindow::paintEvent(QPaintEvent *event) {
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);  // 启用抗锯齿绘制

    // 清空绘制区域，可以选择性清除特定部分
    painter.eraseRect(0, 0, width(), height());  // 清除整个区域

    // 绘制背景图
    painter.drawPixmap(-60, 0, 761, 571, QPixmap("D:\\CLion\\CampusGuide\\Resource\\bjtu01.jpg"));

    // 绘制默认路径：例如手动指定的一些路径
    QPen pen1, pen2;
    pen1.setStyle(Qt::DotLine);
    pen1.setColor(Qt::lightGray);
    pen1.setWidth(3);

    pen2.setStyle(Qt::DotLine);
    pen2.setColor(Qt::red);
    pen2.setWidth(2);


    // 手动绘制所有路径（这些路径是你手动指定的）
    QVector<QPair<int, int>> manualPaths = {
        {0, 1},  // 西操到家属区
        {0, 9},  // 西操到学生活动中心
        {0, 3},  // 西操到思源楼
        {3, 4},  // 思源楼到明湖
        {3, 11}, // 思源楼到天佑会堂
        {0, 4},  // 西操到明湖
        {4, 10}, // 明湖到逸夫楼
        {10, 5}, // 逸夫楼到图书馆
        {10, 1}, // 逸夫楼到家属区
        {10, 2}, // 逸夫楼到东门
        {5, 2},  // 图书馆到东门
        {9, 3},  // 学生活动中心到思源楼
        {9, 11}, // 学生活动中心到天佑会堂
        {1, 2},  // 家属区到东门
        {2, 7},  // 东门到东区1教
        {7, 8},  // 东区1教到交大公交站
        {8, 9},  // 交大公交站到学生活动中心
        {8, 6},  // 交大公交站到南门
        {6, 5},  // 南门到逸夫楼
        {6, 11}, // 南门到天佑会堂
        {6, 10}, // 南门到图书馆
        {6, 4},  // 南门到明湖
        {6, 3},  // 南门到思源楼
        {6, 7}   // 南门到东区1教
    };

    // 绘制手动路径并显示路径长度
    for (const auto& path : manualPaths) {
        int start = path.first;
        int end = path.second;

        // 从 BJTUMap 中查询路径长度
        int pathLength = BJTUMap[start][end];
        QString pathLengthStr = QString::number(pathLength) + "m";  // 格式化路径长度字符串

        // 绘制路径线
        painter.setPen(pen1);
        painter.drawLine(point[start], point[end]);

        // 计算路径中点
        QPointF middlePoint = (point[start] + point[end]) / 2;

        // 在路径中点处绘制路径长度
        painter.setPen(pen2);
        painter.drawText(middlePoint, pathLengthStr);  // 显示路径长度
    }


    // 绘制最短路径(DFS)
    if (!path.isEmpty()) {
        QPen penRed(Qt::SolidLine);
        penRed.setColor(Qt::red);
        penRed.setWidth(4);
        painter.setPen(penRed);
        for (int i = 0; i < path.size() - 1; i++) {
            painter.drawLine(point[path[i]], point[path[i + 1]]);
        }
    }

    // 绘制最小生成树 (MST)
    if (!mstEdges.isEmpty()) {
        QPen penBlue(Qt::SolidLine);
        penBlue.setColor( Qt::yellow);
        penBlue.setWidth(3);
        painter.setPen(penBlue);
        for (const auto &edge : mstEdges) {
            painter.drawLine(point[edge.first], point[edge.second]);
        }
    }
}

//景点介绍
void mainwindow::doProcessAddPlace(bool){
    QPushButton *clickedButton = qobject_cast<QPushButton*>(sender());
    if (clickedButton) {
        QString buttonText =clickedButton->objectName();
        QString s = buttonText.mid(4);
        place = s.toInt();
        ShowIntroduction();
    }
}

void mainwindow::ShowIntroduction(){
    if(place == 1){
        ui->textEdit->setText(Intro[0].str);
        QPixmap pic=QPixmap("C:\\Users\\lenovo\\Desktop\\res\\1西操.jpg");
        ui->label_picture->setPixmap(pic);
    }
    if(place == 2){
        ui->textEdit->setText(Intro[1].str);
        //ui->textEdit->append(Intro[1].str);
        QPixmap pic=QPixmap("C:\\Users\\lenovo\\Desktop\\res\\2家属区.jpg");
        ui->label_picture->setPixmap(pic);
    }
    if(place == 3){
        ui->textEdit->setText(Intro[2].str);
        QPixmap pic=QPixmap("C:\\Users\\lenovo\\Desktop\\res\\3东门.jpg");
        ui->label_picture->setPixmap(pic);
    }
    if(place == 4){
        ui->textEdit->setText(Intro[3].str);
        QPixmap pic=QPixmap("C:\\Users\\lenovo\\Desktop\\res\\4思源楼.jpg");
        ui->label_picture->setPixmap(pic);
    }
    if(place == 5){
        ui->textEdit->setText(Intro[4].str);
        QPixmap pic=QPixmap("C:\\Users\\lenovo\\Desktop\\res\\5明湖.jpg");
        ui->label_picture->setPixmap(pic);
    }
    if(place == 6){
        ui->textEdit->setText(Intro[5].str);
        QPixmap pic=QPixmap("C:\\Users\\lenovo\\Desktop\\res\\6逸夫楼.jpg");
        ui->label_picture->setPixmap(pic);
    }
    if(place == 7){
        ui->textEdit->setText(Intro[6].str);
        QPixmap pic=QPixmap("C:\\Users\\lenovo\\Desktop\\res\\7南门.jpg");
        ui->label_picture->setPixmap(pic);
    }
    if(place == 8){
        ui->textEdit->setText(Intro[7].str);
        QPixmap pic=QPixmap("C:\\Users\\lenovo\\Desktop\\res\\8东区一教.jpg");
        ui->label_picture->setPixmap(pic);
    }
    if(place == 9){
        ui->textEdit->setText(Intro[8].str);
        QPixmap pic=QPixmap("C:\\Users\\lenovo\\Desktop\\res\\9交大公交站.jpg");
        ui->label_picture->setPixmap(pic);
    }
    if(place == 10){
        ui->textEdit->setText(Intro[9].str);
        QPixmap pic=QPixmap("C:\\Users\\lenovo\\Desktop\\res\\10学生活动中心.jpg");
        ui->label_picture->setPixmap(pic);
    }
    if(place == 11){
        ui->textEdit->setText(Intro[10].str);
        QPixmap pic=QPixmap("C:\\Users\\lenovo\\Desktop\\res\\11图书馆.jpg");
        ui->label_picture->setPixmap(pic);
    }
    if(place == 12){
        ui->textEdit->setText(Intro[11].str);
        QPixmap pic=QPixmap("C:\\Users\\lenovo\\Desktop\\res\\12天佑会堂.jpg");
        ui->label_picture->setPixmap(pic);
    }
    if(place == 13){
    ui->textEdit->setText(Intro[12].str);
    QPixmap pic=QPixmap("C:\\Users\\lenovo\\Desktop\\res\\13嘉园.jpg");
    ui->label_picture->setPixmap(pic);
    }
    if(place == 14){
        ui->textEdit->setText(Intro[13].str);
        QPixmap pic=QPixmap("C:\\Users\\lenovo\\Desktop\\res\\14校医院.jpg");
        ui->label_picture->setPixmap(pic);
    }
    if(place == 15){
        ui->textEdit->setText(Intro[14].str);
        QPixmap pic=QPixmap("C:\\Users\\lenovo\\Desktop\\res\\15麦当劳.jpg");
        ui->label_picture->setPixmap(pic);
    }
}



