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
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QCheckBox *checkBox_9;
    QCheckBox *checkBox_12;
    QCheckBox *checkBox_15;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_14;
    QCheckBox *checkBox_8;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_10;
    QCheckBox *checkBox_7;
    QCheckBox *checkBox_13;
    QCheckBox *checkBox_11;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_6;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_1;
    QTextEdit *textEdit;
    QLabel *label;
    QPushButton *ptb;

    void setupUi(QWidget *Choose)
    {
        if (Choose->objectName().isEmpty())
            Choose->setObjectName("Choose");
        Choose->resize(420, 779);
        pbt2 = new QPushButton(Choose);
        pbt2->setObjectName("pbt2");
        pbt2->setGeometry(QRect(30, 130, 101, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("\351\273\221\344\275\223")});
        font.setPointSize(11);
        pbt2->setFont(font);
        groupBox_output = new QGroupBox(Choose);
        groupBox_output->setObjectName("groupBox_output");
        groupBox_output->setGeometry(QRect(20, 550, 351, 211));
        label_6 = new QLabel(groupBox_output);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 10, 81, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\351\273\221\344\275\223")});
        font1.setPointSize(12);
        label_6->setFont(font1);
        label_route = new QLabel(groupBox_output);
        label_route->setObjectName("label_route");
        label_route->setGeometry(QRect(10, 40, 271, 151));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("\351\273\221\344\275\223")});
        font2.setPointSize(11);
        font2.setUnderline(true);
        label_route->setFont(font2);
        label_route->setWordWrap(true);
        ptb_clear = new QPushButton(Choose);
        ptb_clear->setObjectName("ptb_clear");
        ptb_clear->setGeometry(QRect(30, 270, 101, 41));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("\351\273\221\344\275\223")});
        font3.setPointSize(11);
        font3.setBold(false);
        ptb_clear->setFont(font3);
        gridLayoutWidget = new QWidget(Choose);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(200, 40, 171, 501));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        checkBox_9 = new QCheckBox(gridLayoutWidget);
        checkBox_9->setObjectName("checkBox_9");
        QFont font4;
        font4.setFamilies({QString::fromUtf8("\347\255\211\347\272\277")});
        font4.setPointSize(11);
        checkBox_9->setFont(font4);

        gridLayout->addWidget(checkBox_9, 8, 0, 1, 1);

        checkBox_12 = new QCheckBox(gridLayoutWidget);
        checkBox_12->setObjectName("checkBox_12");
        checkBox_12->setFont(font4);

        gridLayout->addWidget(checkBox_12, 11, 0, 1, 1);

        checkBox_15 = new QCheckBox(gridLayoutWidget);
        checkBox_15->setObjectName("checkBox_15");
        checkBox_15->setFont(font4);

        gridLayout->addWidget(checkBox_15, 17, 0, 1, 1);

        checkBox_5 = new QCheckBox(gridLayoutWidget);
        checkBox_5->setObjectName("checkBox_5");
        checkBox_5->setFont(font4);

        gridLayout->addWidget(checkBox_5, 4, 0, 1, 1);

        checkBox_14 = new QCheckBox(gridLayoutWidget);
        checkBox_14->setObjectName("checkBox_14");
        checkBox_14->setFont(font4);

        gridLayout->addWidget(checkBox_14, 13, 0, 1, 1);

        checkBox_8 = new QCheckBox(gridLayoutWidget);
        checkBox_8->setObjectName("checkBox_8");
        checkBox_8->setFont(font4);

        gridLayout->addWidget(checkBox_8, 7, 0, 1, 1);

        checkBox_3 = new QCheckBox(gridLayoutWidget);
        checkBox_3->setObjectName("checkBox_3");
        checkBox_3->setFont(font4);

        gridLayout->addWidget(checkBox_3, 2, 0, 1, 1);

        checkBox_10 = new QCheckBox(gridLayoutWidget);
        checkBox_10->setObjectName("checkBox_10");
        checkBox_10->setFont(font4);

        gridLayout->addWidget(checkBox_10, 9, 0, 1, 1);

        checkBox_7 = new QCheckBox(gridLayoutWidget);
        checkBox_7->setObjectName("checkBox_7");
        checkBox_7->setFont(font4);

        gridLayout->addWidget(checkBox_7, 6, 0, 1, 1);

        checkBox_13 = new QCheckBox(gridLayoutWidget);
        checkBox_13->setObjectName("checkBox_13");
        checkBox_13->setFont(font4);

        gridLayout->addWidget(checkBox_13, 12, 0, 1, 1);

        checkBox_11 = new QCheckBox(gridLayoutWidget);
        checkBox_11->setObjectName("checkBox_11");
        checkBox_11->setFont(font4);

        gridLayout->addWidget(checkBox_11, 10, 0, 1, 1);

        checkBox_2 = new QCheckBox(gridLayoutWidget);
        checkBox_2->setObjectName("checkBox_2");
        checkBox_2->setFont(font4);

        gridLayout->addWidget(checkBox_2, 1, 0, 1, 1);

        checkBox_6 = new QCheckBox(gridLayoutWidget);
        checkBox_6->setObjectName("checkBox_6");
        checkBox_6->setFont(font4);

        gridLayout->addWidget(checkBox_6, 5, 0, 1, 1);

        checkBox_4 = new QCheckBox(gridLayoutWidget);
        checkBox_4->setObjectName("checkBox_4");
        checkBox_4->setFont(font4);

        gridLayout->addWidget(checkBox_4, 3, 0, 1, 1);

        checkBox_1 = new QCheckBox(gridLayoutWidget);
        checkBox_1->setObjectName("checkBox_1");
        checkBox_1->setFont(font4);

        gridLayout->addWidget(checkBox_1, 0, 0, 1, 1);

        textEdit = new QTextEdit(Choose);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(40, 10, 91, 31));
        label = new QLabel(Choose);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 20, 31, 21));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("\351\273\221\344\275\223")});
        font5.setPointSize(10);
        label->setFont(font5);
        ptb = new QPushButton(Choose);
        ptb->setObjectName("ptb");
        ptb->setGeometry(QRect(140, 20, 41, 21));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("\351\273\221\344\275\223")});
        font6.setPointSize(9);
        ptb->setFont(font6);

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
        checkBox_9->setText(QCoreApplication::translate("Choose", "9 \344\272\244\345\244\247\345\205\254\344\272\244\347\253\231", nullptr));
        checkBox_12->setText(QCoreApplication::translate("Choose", "12 \345\244\251\344\275\221\344\274\232\345\240\202", nullptr));
        checkBox_15->setText(QCoreApplication::translate("Choose", "15 \351\272\246\345\275\223\345\212\263", nullptr));
        checkBox_5->setText(QCoreApplication::translate("Choose", "5 \346\230\216\346\271\226", nullptr));
        checkBox_14->setText(QCoreApplication::translate("Choose", "14 \346\240\241\345\214\273\351\231\242", nullptr));
        checkBox_8->setText(QCoreApplication::translate("Choose", "8 \344\270\234\345\214\272\344\270\200\346\225\231", nullptr));
        checkBox_3->setText(QCoreApplication::translate("Choose", "3 \344\270\234\351\227\250", nullptr));
        checkBox_10->setText(QCoreApplication::translate("Choose", "10 \345\255\246\347\224\237\346\264\273\345\212\250\344\270\255\345\277\203", nullptr));
        checkBox_7->setText(QCoreApplication::translate("Choose", "7 \345\215\227\351\227\250", nullptr));
        checkBox_13->setText(QCoreApplication::translate("Choose", "13 \345\230\211\345\233\255", nullptr));
        checkBox_11->setText(QCoreApplication::translate("Choose", "11 \345\233\276\344\271\246\351\246\206", nullptr));
        checkBox_2->setText(QCoreApplication::translate("Choose", "2 \345\256\266\345\261\236\345\214\272", nullptr));
        checkBox_6->setText(QCoreApplication::translate("Choose", "6 \351\200\270\345\244\253\346\245\274", nullptr));
        checkBox_4->setText(QCoreApplication::translate("Choose", "4 \346\200\235\346\272\220\346\245\274", nullptr));
        checkBox_1->setText(QCoreApplication::translate("Choose", "1 \350\245\277\346\223\215", nullptr));
        label->setText(QCoreApplication::translate("Choose", "\350\265\267\347\202\271\357\274\232", nullptr));
        ptb->setText(QCoreApplication::translate("Choose", "\346\267\273\345\212\240", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Choose: public Ui_Choose {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSE_H
