/********************************************************************************
** Form generated from reading UI file 'bjtuMap.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BJTUMAP_H
#define UI_BJTUMAP_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_bjtuMap
{
public:
    QGroupBox *groupBox;
    QLabel *label_route_1;
    QLabel *label_route_2;
    QLabel *label_route_3;
    QLabel *label_route_4;
    QLabel *label_2;
    QPushButton *pushButton_return;
    QLabel *label_4;

    void setupUi(QWidget *bjtuMap)
    {
        if (bjtuMap->objectName().isEmpty())
            bjtuMap->setObjectName("bjtuMap");
        bjtuMap->resize(1138, 742);
        groupBox = new QGroupBox(bjtuMap);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(130, 600, 521, 131));
        label_route_1 = new QLabel(groupBox);
        label_route_1->setObjectName("label_route_1");
        label_route_1->setGeometry(QRect(10, 10, 501, 20));
        QFont font;
        font.setFamilies({QString::fromUtf8("\351\273\221\344\275\223")});
        font.setPointSize(12);
        font.setUnderline(true);
        label_route_1->setFont(font);
        label_route_2 = new QLabel(groupBox);
        label_route_2->setObjectName("label_route_2");
        label_route_2->setGeometry(QRect(10, 40, 501, 20));
        label_route_2->setFont(font);
        label_route_3 = new QLabel(groupBox);
        label_route_3->setObjectName("label_route_3");
        label_route_3->setGeometry(QRect(10, 70, 501, 20));
        label_route_3->setFont(font);
        label_route_4 = new QLabel(groupBox);
        label_route_4->setObjectName("label_route_4");
        label_route_4->setGeometry(QRect(10, 100, 501, 20));
        label_route_4->setFont(font);
        label_2 = new QLabel(bjtuMap);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 570, 141, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\351\273\221\344\275\223")});
        font1.setPointSize(14);
        label_2->setFont(font1);
        pushButton_return = new QPushButton(bjtuMap);
        pushButton_return->setObjectName("pushButton_return");
        pushButton_return->setGeometry(QRect(650, 10, 101, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("\351\273\221\344\275\223")});
        font2.setPointSize(12);
        pushButton_return->setFont(font2);
        QIcon icon;
        icon.addFile(QString::fromUtf8("C:/Users/lenovo/Desktop/res/\350\277\224\345\233\236.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_return->setIcon(icon);
        pushButton_return->setIconSize(QSize(45, 45));
        label_4 = new QLabel(bjtuMap);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 440, 211, 61));
        label_4->setPixmap(QPixmap(QString::fromUtf8("C:/Users/lenovo/Desktop/res/\346\240\241\345\220\215.jpg")));
        label_4->setScaledContents(true);

        retranslateUi(bjtuMap);

        QMetaObject::connectSlotsByName(bjtuMap);
    } // setupUi

    void retranslateUi(QWidget *bjtuMap)
    {
        bjtuMap->setWindowTitle(QCoreApplication::translate("bjtuMap", "Form", nullptr));
        groupBox->setTitle(QString());
        label_route_1->setText(QCoreApplication::translate("bjtuMap", "<html><head/><body><p><span style=\" color:#000000;\">TextLabel</span></p></body></html>", nullptr));
        label_route_2->setText(QCoreApplication::translate("bjtuMap", "<html><head/><body><p><span style=\" color:#000000;\">TextLabel</span></p></body></html>", nullptr));
        label_route_3->setText(QCoreApplication::translate("bjtuMap", "<html><head/><body><p><span style=\" color:#000000;\">TextLabel</span></p></body></html>", nullptr));
        label_route_4->setText(QCoreApplication::translate("bjtuMap", "<html><head/><body><p><span style=\" color:#000000;\">TextLabel</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("bjtuMap", "<html><head/><body><p><span style=\" font-size:12pt; color:#000000;\">\344\270\272\346\202\250\346\216\250\350\215\220\347\232\204\350\267\257\347\272\277\344\270\272\357\274\232</span></p></body></html>", nullptr));
        pushButton_return->setText(QCoreApplication::translate("bjtuMap", "\350\277\224\345\233\236", nullptr));
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class bjtuMap: public Ui_bjtuMap {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BJTUMAP_H
