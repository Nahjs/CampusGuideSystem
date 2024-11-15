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

    void setupUi(QWidget *bjtuMap)
    {
        if (bjtuMap->objectName().isEmpty())
            bjtuMap->setObjectName("bjtuMap");
        bjtuMap->resize(1098, 682);
        groupBox = new QGroupBox(bjtuMap);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(750, 80, 251, 181));
        label_route_1 = new QLabel(groupBox);
        label_route_1->setObjectName("label_route_1");
        label_route_1->setGeometry(QRect(10, 20, 221, 20));
        QFont font;
        font.setFamilies({QString::fromUtf8("\351\273\221\344\275\223")});
        font.setPointSize(12);
        font.setUnderline(true);
        label_route_1->setFont(font);
        label_route_2 = new QLabel(groupBox);
        label_route_2->setObjectName("label_route_2");
        label_route_2->setGeometry(QRect(10, 60, 221, 20));
        label_route_2->setFont(font);
        label_route_3 = new QLabel(groupBox);
        label_route_3->setObjectName("label_route_3");
        label_route_3->setGeometry(QRect(10, 100, 221, 20));
        label_route_3->setFont(font);
        label_route_4 = new QLabel(groupBox);
        label_route_4->setObjectName("label_route_4");
        label_route_4->setGeometry(QRect(10, 140, 221, 20));
        label_route_4->setFont(font);
        label_2 = new QLabel(bjtuMap);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(710, 50, 71, 21));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\351\273\221\344\275\223")});
        font1.setPointSize(14);
        label_2->setFont(font1);
        pushButton_return = new QPushButton(bjtuMap);
        pushButton_return->setObjectName("pushButton_return");
        pushButton_return->setGeometry(QRect(710, 290, 81, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("\351\273\221\344\275\223")});
        font2.setPointSize(12);
        pushButton_return->setFont(font2);

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
        label_2->setText(QCoreApplication::translate("bjtuMap", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; color:#000000;\">\350\267\257\347\272\277\344\270\272\357\274\232</span></p></body></html>", nullptr));
        pushButton_return->setText(QCoreApplication::translate("bjtuMap", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class bjtuMap: public Ui_bjtuMap {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BJTUMAP_H
