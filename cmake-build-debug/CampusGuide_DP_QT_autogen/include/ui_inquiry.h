/********************************************************************************
** Form generated from reading UI file 'inquiry.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INQUIRY_H
#define UI_INQUIRY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Inquiry
{
public:
    QLabel *label_2;
    QLineEdit *lineEdit_num;
    QTextEdit *textEdit;
    QLabel *label_picture;
    QPushButton *pushButton_inquiry;
    QGroupBox *groupBox_help;
    QLabel *label;
    QLabel *label_3;
    QPushButton *pushButton_hotel;
    QLabel *label_4;
    QPushButton *pushButton_badminton;
    QLabel *label_5;
    QPushButton *pushButton_swim;
    QLabel *label_6;
    QPushButton *pushButton_schoolweb;

    void setupUi(QWidget *Inquiry)
    {
        if (Inquiry->objectName().isEmpty())
            Inquiry->setObjectName("Inquiry");
        Inquiry->resize(1000, 779);
        label_2 = new QLabel(Inquiry);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(50, 30, 171, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("\351\273\221\344\275\223")});
        font.setPointSize(14);
        label_2->setFont(font);
        lineEdit_num = new QLineEdit(Inquiry);
        lineEdit_num->setObjectName("lineEdit_num");
        lineEdit_num->setGeometry(QRect(230, 40, 113, 21));
        textEdit = new QTextEdit(Inquiry);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(50, 80, 551, 331));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\351\273\221\344\275\223")});
        font1.setPointSize(11);
        font1.setBold(false);
        textEdit->setFont(font1);
        label_picture = new QLabel(Inquiry);
        label_picture->setObjectName("label_picture");
        label_picture->setGeometry(QRect(630, 10, 361, 441));
        pushButton_inquiry = new QPushButton(Inquiry);
        pushButton_inquiry->setObjectName("pushButton_inquiry");
        pushButton_inquiry->setGeometry(QRect(390, 30, 93, 31));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("\351\273\221\344\275\223")});
        font2.setPointSize(10);
        pushButton_inquiry->setFont(font2);
        groupBox_help = new QGroupBox(Inquiry);
        groupBox_help->setObjectName("groupBox_help");
        groupBox_help->setGeometry(QRect(50, 470, 811, 261));
        label = new QLabel(groupBox_help);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 10, 121, 31));
        label->setFont(font);
        label_3 = new QLabel(groupBox_help);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 50, 341, 31));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("\351\273\221\344\275\223")});
        font3.setPointSize(12);
        label_3->setFont(font3);
        pushButton_hotel = new QPushButton(groupBox_help);
        pushButton_hotel->setObjectName("pushButton_hotel");
        pushButton_hotel->setGeometry(QRect(380, 40, 111, 41));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Segoe UI Black")});
        font4.setPointSize(11);
        font4.setBold(true);
        pushButton_hotel->setFont(font4);
        label_4 = new QLabel(groupBox_help);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 100, 601, 31));
        label_4->setFont(font3);
        pushButton_badminton = new QPushButton(groupBox_help);
        pushButton_badminton->setObjectName("pushButton_badminton");
        pushButton_badminton->setGeometry(QRect(630, 100, 111, 41));
        pushButton_badminton->setFont(font4);
        label_5 = new QLabel(groupBox_help);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(20, 150, 401, 31));
        label_5->setFont(font3);
        pushButton_swim = new QPushButton(groupBox_help);
        pushButton_swim->setObjectName("pushButton_swim");
        pushButton_swim->setGeometry(QRect(430, 140, 111, 41));
        pushButton_swim->setFont(font4);
        label_6 = new QLabel(groupBox_help);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(20, 200, 401, 31));
        label_6->setFont(font3);
        pushButton_schoolweb = new QPushButton(groupBox_help);
        pushButton_schoolweb->setObjectName("pushButton_schoolweb");
        pushButton_schoolweb->setGeometry(QRect(430, 200, 111, 41));
        pushButton_schoolweb->setFont(font4);

        retranslateUi(Inquiry);

        QMetaObject::connectSlotsByName(Inquiry);
    } // setupUi

    void retranslateUi(QWidget *Inquiry)
    {
        Inquiry->setWindowTitle(QCoreApplication::translate("Inquiry", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("Inquiry", "\346\237\245\350\257\242\346\231\257\347\202\271\347\274\226\345\217\267\357\274\232", nullptr));
        label_picture->setText(QString());
        pushButton_inquiry->setText(QCoreApplication::translate("Inquiry", "\346\237\245\350\257\242", nullptr));
        groupBox_help->setTitle(QString());
        label->setText(QCoreApplication::translate("Inquiry", "\346\233\264\345\244\232\345\270\256\345\212\251", nullptr));
        label_3->setText(QCoreApplication::translate("Inquiry", "tip1 \345\246\202\346\236\234\346\202\250\346\203\263\351\242\204\345\256\232\345\273\272\345\233\275\351\245\255\345\272\227\346\210\277\351\227\264 ->", nullptr));
        pushButton_hotel->setText(QCoreApplication::translate("Inquiry", "Push me!", nullptr));
        label_4->setText(QCoreApplication::translate("Inquiry", "tip2 \345\246\202\346\236\234\346\202\250\346\203\263\344\272\206\350\247\243\346\233\264\345\244\232\345\245\245\346\236\227\345\214\271\345\205\213\344\275\223\350\202\262\351\246\206\357\274\210\347\276\275\346\257\233\347\220\203\351\246\206\357\274\211\346\210\226\351\242\204\345\256\232 ->", nullptr));
        pushButton_badminton->setText(QCoreApplication::translate("Inquiry", "Push me!", nullptr));
        label_5->setText(QCoreApplication::translate("Inquiry", "tip3 \345\246\202\346\236\234\346\202\250\346\203\263\344\272\206\350\247\243\346\233\264\345\244\232\346\270\270\346\263\263\351\246\206\346\210\226\351\242\204\345\256\232 ->", nullptr));
        pushButton_swim->setText(QCoreApplication::translate("Inquiry", "Push me!", nullptr));
        label_6->setText(QCoreApplication::translate("Inquiry", "tip4 \345\246\202\346\236\234\346\202\250\346\203\263\347\231\273\345\275\225\345\214\227\344\272\254\345\267\245\344\270\232\345\244\247\345\255\246\345\256\230\347\275\221 ->", nullptr));
        pushButton_schoolweb->setText(QCoreApplication::translate("Inquiry", "Push me!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Inquiry: public Ui_Inquiry {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INQUIRY_H
