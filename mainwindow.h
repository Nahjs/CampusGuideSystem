#ifndef INFORMATION_H
#define INFORMATION_H
#include <QWidget>
#include <QGuiApplication>
#include <QPaintEvent>
#include <QPainter>
#include <QLabel>*
#include <qlistwidget.h>
#include <QPushButton>

namespace Ui {
class mainwindow;
}

class mainwindow : public QWidget
{
    Q_OBJECT
    class PlaceIntro{
    public:
        int num;
        QString str;
    };


public:
    explicit mainwindow(QWidget *parent = nullptr);
    ~mainwindow();
    void ShowIntroduction();

private slots:

    void doProcessAddPlace(bool);
    void onDFSButtonClicked();
    void onShortestPathButtonClicked();
    void onMSTButtonClicked();

protected:
    void paintEvent(QPaintEvent*event);

private:
    Ui::mainwindow *ui;
    int selectedStart = -1;   // 用户选择的起点索引
    int selectedEnd = -1;     // 用户选择的终点索引
    int place{};   //地点编号 从1开始 对应右边提示
    QVector<int> path;  // 保存路径
    QVector<QVector<int>> allPaths;  // 存储所有路径
    QVector<QPair<int, int>> mstEdges;  // 保存最小生成树的边
    QList<QPushButton*> spotButtons;  // 用于存储景点按钮的列表
    QList<QLabel*> spotPoints;  // 用于存储路线规划点的列表
    QStringList places ;  // 存储地点名称
    QString introduction;
    PlaceIntro Intro[15];
    QPoint point[12];

    void Init();
    void InitIntroduction();
    void InitPoint();
    void onStartPointChanged(const QString &text);

    void updateEndComboBox(int excludeIndex);

    void DFS(int start, QVector<int> &visited, QVector<int> &path, QVector<QVector<int>> &allPaths);

    int calculatePathLength(const QVector<int> &path);

    void displayPathsAndLength(const QVector<QVector<int>> &allPaths);

    void onPathItemClicked(QListWidgetItem *item);

    QVector<int> parsePathString(const QString &pathStr);

    QPair<int, QVector<int>> dijkstra(int start, int end);

    QVector<QPair<int, int>> primMST();

};

#endif // INFORMATION_H
