#include "mainwindow.h"
#include <QApplication>
#include <QGuiApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    mainwindow w;
    w.show();
    return a.exec();
}
