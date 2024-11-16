/********************************************************************************
** Form generated from reading UI file 'Choose.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSE_H
#define UI_CHOOSE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Choose
{
public:
    QPushButton *pbt2;
    QGroupBox *groupBox_output;
    QLabel *label_6;
    QLabel *label_route;
    QPushButton *ptb_clear;
    QTextEdit *textEdit;
    QLabel *label;
    QPushButton *ptb;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_1;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_5;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QCheckBox *checkBox_8;
    QCheckBox *checkBox_6;
    QCheckBox *checkBox_9;
    QCheckBox *checkBox_7;
    QCheckBox *checkBox_10;
    QWidget *gridLayoutWidget_4;
    QGridLayout *gridLayout_4;
    QCheckBox *checkBox_13;
    QCheckBox *checkBox_14;
    QCheckBox *checkBox_12;
    QCheckBox *checkBox_11;
    QCheckBox *checkBox_15;
    QLabel *label_2;

    void setupUi(QWidget *Choose)
    {
        if (Choose->objectName().isEmpty())
            Choose->setObjectName("Choose");
        Choose->resize(396, 779);
        pbt2 = new QPushButton(Choose);
        pbt2->setObjectName("pbt2");
        pbt2->setGeometry(QRect(60, 400, 101, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("\351\273\221\344\275\223")});
        font.setPointSize(11);
        pbt2->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8("C:/Users/lenovo/Desktop/res/\351\200\211\345\245\275.png"), QSize(), QIcon::Normal, QIcon::Off);
        pbt2->setIcon(icon);
        pbt2->setIconSize(QSize(45, 45));
        groupBox_output = new QGroupBox(Choose);
        groupBox_output->setObjectName("groupBox_output");
        groupBox_output->setGeometry(QRect(20, 490, 351, 231));
        label_6 = new QLabel(groupBox_output);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 10, 81, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\351\273\221\344\275\223")});
        font1.setPointSize(12);
        label_6->setFont(font1);
        label_route = new QLabel(groupBox_output);
        label_route->setObjectName("label_route");
        label_route->setGeometry(QRect(20, 50, 311, 171));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("\351\273\221\344\275\223")});
        font2.setPointSize(11);
        font2.setUnderline(true);
        label_route->setFont(font2);
        label_route->setWordWrap(true);
        ptb_clear = new QPushButton(Choose);
        ptb_clear->setObjectName("ptb_clear");
        ptb_clear->setGeometry(QRect(200, 400, 101, 41));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("\351\273\221\344\275\223")});
        font3.setPointSize(11);
        font3.setBold(false);
        ptb_clear->setFont(font3);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("C:/Users/lenovo/Desktop/res/\351\207\215\351\200\211.png"), QSize(), QIcon::Normal, QIcon::Off);
        ptb_clear->setIcon(icon1);
        ptb_clear->setIconSize(QSize(45, 45));
        textEdit = new QTextEdit(Choose);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(110, 30, 131, 31));
        label = new QLabel(Choose);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 30, 31, 31));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("\351\273\221\344\275\223")});
        font4.setPointSize(10);
        label->setFont(font4);
        ptb = new QPushButton(Choose);
        ptb->setObjectName("ptb");
        ptb->setGeometry(QRect(260, 30, 51, 31));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("\351\273\221\344\275\223")});
        font5.setPointSize(9);
        ptb->setFont(font5);
        gridLayoutWidget_2 = new QWidget(Choose);
        gridLayoutWidget_2->setObjectName("gridLayoutWidget_2");
        gridLayoutWidget_2->setGeometry(QRect(10, 120, 111, 251));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        checkBox_3 = new QCheckBox(gridLayoutWidget_2);
        checkBox_3->setObjectName("checkBox_3");
        QFont font6;
        font6.setFamilies({QString::fromUtf8("\347\255\211\347\272\277")});
        font6.setPointSize(11);
        checkBox_3->setFont(font6);

        gridLayout_2->addWidget(checkBox_3, 2, 0, 1, 1);

        checkBox_1 = new QCheckBox(gridLayoutWidget_2);
        checkBox_1->setObjectName("checkBox_1");
        checkBox_1->setFont(font6);

        gridLayout_2->addWidget(checkBox_1, 0, 0, 1, 1);

        checkBox_2 = new QCheckBox(gridLayoutWidget_2);
        checkBox_2->setObjectName("checkBox_2");
        checkBox_2->setFont(font6);

        gridLayout_2->addWidget(checkBox_2, 1, 0, 1, 1);

        checkBox_4 = new QCheckBox(gridLayoutWidget_2);
        checkBox_4->setObjectName("checkBox_4");
        checkBox_4->setFont(font6);

        gridLayout_2->addWidget(checkBox_4, 3, 0, 1, 1);

        checkBox_5 = new QCheckBox(gridLayoutWidget_2);
        checkBox_5->setObjectName("checkBox_5");
        checkBox_5->setFont(font6);

        gridLayout_2->addWidget(checkBox_5, 4, 0, 1, 1);

        gridLayoutWidget_3 = new QWidget(Choose);
        gridLayoutWidget_3->setObjectName("gridLayoutWidget_3");
        gridLayoutWidget_3->setGeometry(QRect(120, 120, 141, 251));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        checkBox_8 = new QCheckBox(gridLayoutWidget_3);
        checkBox_8->setObjectName("checkBox_8");
        checkBox_8->setFont(font6);

        gridLayout_3->addWidget(checkBox_8, 2, 0, 1, 1);

        checkBox_6 = new QCheckBox(gridLayoutWidget_3);
        checkBox_6->setObjectName("checkBox_6");
        checkBox_6->setFont(font6);

        gridLayout_3->addWidget(checkBox_6, 0, 0, 1, 1);

        checkBox_9 = new QCheckBox(gridLayoutWidget_3);
        checkBox_9->setObjectName("checkBox_9");
        checkBox_9->setFont(font6);

        gridLayout_3->addWidget(checkBox_9, 3, 0, 1, 1);

        checkBox_7 = new QCheckBox(gridLayoutWidget_3);
        checkBox_7->setObjectName("checkBox_7");
        checkBox_7->setFont(font6);

        gridLayout_3->addWidget(checkBox_7, 1, 0, 1, 1);

        checkBox_10 = new QCheckBox(gridLayoutWidget_3);
        checkBox_10->setObjectName("checkBox_10");
        checkBox_10->setFont(font6);

        gridLayout_3->addWidget(checkBox_10, 4, 0, 1, 1);

        gridLayoutWidget_4 = new QWidget(Choose);
        gridLayoutWidget_4->setObjectName("gridLayoutWidget_4");
        gridLayoutWidget_4->setGeometry(QRect(260, 120, 121, 251));
        gridLayout_4 = new QGridLayout(gridLayoutWidget_4);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        checkBox_13 = new QCheckBox(gridLayoutWidget_4);
        checkBox_13->setObjectName("checkBox_13");
        checkBox_13->setFont(font6);

        gridLayout_4->addWidget(checkBox_13, 2, 0, 1, 1);

        checkBox_14 = new QCheckBox(gridLayoutWidget_4);
        checkBox_14->setObjectName("checkBox_14");
        checkBox_14->setFont(font6);

        gridLayout_4->addWidget(checkBox_14, 3, 0, 1, 1);

        checkBox_12 = new QCheckBox(gridLayoutWidget_4);
        checkBox_12->setObjectName("checkBox_12");
        checkBox_12->setFont(font6);

        gridLayout_4->addWidget(checkBox_12, 1, 0, 1, 1);

        checkBox_11 = new QCheckBox(gridLayoutWidget_4);
        checkBox_11->setObjectName("checkBox_11");
        checkBox_11->setFont(font6);

        gridLayout_4->addWidget(checkBox_11, 0, 0, 1, 1);

        checkBox_15 = new QCheckBox(gridLayoutWidget_4);
        checkBox_15->setObjectName("checkBox_15");
        checkBox_15->setFont(font6);

        gridLayout_4->addWidget(checkBox_15, 4, 0, 1, 1);

        label_2 = new QLabel(Choose);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(60, 70, 251, 31));
        QFont font7;
        font7.setFamilies({QString::fromUtf8("\351\273\221\344\275\223")});
        label_2->setFont(font7);

        retranslateUi(Choose);

        QMetaObject::connectSlotsByName(Choose);
    } // setupUi

    void retranslateUi(QWidget *Choose)
    {
        Choose->setWindowTitle(QCoreApplication::translate("Choose", "Form", nullptr));
        pbt2->setText(QCoreApplication::translate("Choose", "\351\200\211\345\245\275\344\272\206", nullptr));
        groupBox_output->setTitle(QString());
        label_6->setText(QCoreApplication::translate("Choose", "\346\216\250\350\215\220\350\267\257\347\272\277\357\274\232", nullptr));
        label_route->setText(QString());
        ptb_clear->setText(QCoreApplication::translate("Choose", "\351\207\215\346\226\260\351\200\211", nullptr));
        label->setText(QCoreApplication::translate("Choose", "\350\265\267\347\202\271\357\274\232", nullptr));
        ptb->setText(QCoreApplication::translate("Choose", "\346\267\273\345\212\240", nullptr));
        checkBox_3->setText(QCoreApplication::translate("Choose", "3 \344\270\234\351\227\250", nullptr));
        checkBox_1->setText(QCoreApplication::translate("Choose", "1 \350\245\277\346\223\215", nullptr));
        checkBox_2->setText(QCoreApplication::translate("Choose", "2 \345\256\266\345\261\236\345\214\272", nullptr));
        checkBox_4->setText(QCoreApplication::translate("Choose", "4 \346\200\235\346\272\220\346\245\274", nullptr));
        checkBox_5->setText(QCoreApplication::translate("Choose", "5 \346\230\216\346\271\226", nullptr));
        checkBox_8->setText(QCoreApplication::translate("Choose", "8 \344\270\234\345\214\272\344\270\200\346\225\231", nullptr));
        checkBox_6->setText(QCoreApplication::translate("Choose", "6 \351\200\270\345\244\253\346\245\274", nullptr));
        checkBox_9->setText(QCoreApplication::translate("Choose", "9 \344\272\244\345\244\247\345\205\254\344\272\244\347\253\231", nullptr));
        checkBox_7->setText(QCoreApplication::translate("Choose", "7 \345\215\227\351\227\250", nullptr));
        checkBox_10->setText(QCoreApplication::translate("Choose", "10 \345\255\246\347\224\237\346\264\273\345\212\250\344\270\255\345\277\203", nullptr));
        checkBox_13->setText(QCoreApplication::translate("Choose", "13 \345\230\211\345\233\255", nullptr));
        checkBox_14->setText(QCoreApplication::translate("Choose", "14 \346\240\241\345\214\273\351\231\242", nullptr));
        checkBox_12->setText(QCoreApplication::translate("Choose", "12 \345\244\251\344\275\221\344\274\232\345\240\202", nullptr));
        checkBox_11->setText(QCoreApplication::translate("Choose", "11 \345\233\276\344\271\246\351\246\206", nullptr));
        checkBox_15->setText(QCoreApplication::translate("Choose", "15 \351\272\246\345\275\223\345\212\263", nullptr));
        label_2->setText(QCoreApplication::translate("Choose", "\357\274\210\344\270\215\346\267\273\345\212\240\345\210\231\351\273\230\350\256\244\346\211\200\351\200\211\346\231\257\347\202\271\344\270\255\345\272\217\345\217\267\346\234\200\345\260\217\347\232\204\344\270\272\350\265\267\347\202\271\357\274\211", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Choose: public Ui_Choose {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSE_H
