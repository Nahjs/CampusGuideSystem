#include "Information.h"
#include <QApplication>
#include <QGuiApplication>
#include <QScreen>
#include "tsp.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Information w;

    w.show();
    //设置UTF-8编码
    QStringConverter::Encoding encoding = QStringConverter::Utf8;
    QStringConverter::Encoding converter(encoding);
    //设置全局样式
    qApp->setStyle("Plastique");
    return a.exec();
}
