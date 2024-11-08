/********************************************************************************
** Form generated from reading UI file 'map.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAP_H
#define UI_MAP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_map
{
public:
    QFrame *frame;

    void setupUi(QWidget *map)
    {
        if (map->objectName().isEmpty())
            map->setObjectName("map");
        map->resize(1290, 764);
        frame = new QFrame(map);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 0, 1171, 771));
        frame->setStyleSheet(QString::fromUtf8("border-image: url(:/Resource/BJUT_MAP.jpg);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);

        retranslateUi(map);

        QMetaObject::connectSlotsByName(map);
    } // setupUi

    void retranslateUi(QWidget *map)
    {
        map->setWindowTitle(QCoreApplication::translate("map", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class map: public Ui_map {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAP_H
