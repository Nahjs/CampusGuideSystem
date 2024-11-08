/********************************************************************************
** Form generated from reading UI file 'recommend.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECOMMEND_H
#define UI_RECOMMEND_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Recommend
{
public:
    QGroupBox *groupBox1;
    QLabel *label_5;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QTextEdit *textEdit;
    QLabel *label_4;
    QGroupBox *groupBox2;
    QLabel *label_6;
    QGroupBox *groupBox3;
    QLabel *label_7;
    QLineEdit *lineEdit;
    QLabel *label_8;
    QPushButton *pushButton_certain;

    void setupUi(QWidget *Recommend)
    {
        if (Recommend->objectName().isEmpty())
            Recommend->setObjectName("Recommend");
        Recommend->resize(1000, 779);
        groupBox1 = new QGroupBox(Recommend);
        groupBox1->setObjectName("groupBox1");
        groupBox1->setGeometry(QRect(80, 80, 231, 301));
        label_5 = new QLabel(groupBox1);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 20, 211, 271));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font.setPointSize(12);
        label_5->setFont(font);
        label = new QLabel(Recommend);
        label->setObjectName("label");
        label->setGeometry(QRect(110, 30, 181, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\351\273\221\344\275\223")});
        font1.setPointSize(14);
        label->setFont(font1);
        label_2 = new QLabel(Recommend);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(410, 30, 131, 31));
        label_2->setFont(font1);
        label_3 = new QLabel(Recommend);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(670, 30, 181, 31));
        label_3->setFont(font1);
        textEdit = new QTextEdit(Recommend);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(80, 480, 551, 241));
        label_4 = new QLabel(Recommend);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(80, 430, 111, 31));
        label_4->setFont(font1);
        groupBox2 = new QGroupBox(Recommend);
        groupBox2->setObjectName("groupBox2");
        groupBox2->setGeometry(QRect(360, 80, 231, 301));
        label_6 = new QLabel(groupBox2);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 20, 211, 271));
        label_6->setFont(font);
        groupBox3 = new QGroupBox(Recommend);
        groupBox3->setObjectName("groupBox3");
        groupBox3->setGeometry(QRect(640, 80, 231, 301));
        label_7 = new QLabel(groupBox3);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(10, 10, 211, 271));
        label_7->setFont(font);
        lineEdit = new QLineEdit(Recommend);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(720, 670, 113, 21));
        label_8 = new QLabel(Recommend);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(720, 610, 201, 41));
        label_8->setFont(font1);
        pushButton_certain = new QPushButton(Recommend);
        pushButton_certain->setObjectName("pushButton_certain");
        pushButton_certain->setGeometry(QRect(870, 670, 93, 28));

        retranslateUi(Recommend);

        QMetaObject::connectSlotsByName(Recommend);
    } // setupUi

    void retranslateUi(QWidget *Recommend)
    {
        Recommend->setWindowTitle(QCoreApplication::translate("Recommend", "Form", nullptr));
        groupBox1->setTitle(QString());
        label_5->setText(QCoreApplication::translate("Recommend", "<html><head/><body><p>1 \344\275\223\350\202\262\350\210\236\350\271\210 </p><p>2 \347\224\237\346\264\273\345\214\226\345\255\246\345\256\236\351\252\214 </p><p>3 \346\226\207\347\214\256\346\243\200\347\264\242 </p><p>4 \344\270\255\345\233\275\344\274\240\347\273\237\346\226\207\345\214\226 </p><p>5 \345\237\272\347\241\200\344\271\220\347\220\206\344\270\216\344\275\234\345\223\201\350\265\217\346\236\220 </p><p>6 \347\257\206\345\210\273\350\211\272\346\234\257\344\275\234\345\223\201\350\265\217\346\236\220</p><p>   \344\270\216\345\256\236\350\267\265<br/></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("Recommend", "\347\273\217\347\256\241\346\226\207\346\263\225\350\211\272\346\234\257\347\261\273", nullptr));
        label_2->setText(QCoreApplication::translate("Recommend", "\347\273\217\346\265\216\347\256\241\347\220\206\347\261\273", nullptr));
        label_3->setText(QCoreApplication::translate("Recommend", "\346\225\260\345\255\246\344\270\216\350\207\252\347\204\266\347\247\221\345\255\246", nullptr));
        label_4->setText(QCoreApplication::translate("Recommend", "\350\257\276\347\250\213\344\273\213\347\273\215", nullptr));
        groupBox2->setTitle(QString());
        label_6->setText(QCoreApplication::translate("Recommend", "<html><head/><body><p>7 \345\205\265\346\263\225\344\270\216\345\225\206\346\210\230 </p><p>8 \347\273\217\346\265\216\345\255\246\345\216\237\347\220\206</p><p>9 \346\212\225\350\265\204\344\270\216\350\257\201\345\210\270<br/></p></body></html>", nullptr));
        groupBox3->setTitle(QString());
        label_7->setText(QCoreApplication::translate("Recommend", "<html><head/><body><p>10 \346\225\260\345\255\246\345\273\272\346\250\241</p><p>11 \345\275\242\345\274\217\350\257\255\350\250\200\344\270\216\350\207\252\345\212\250\346\234\272<br/></p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("Recommend", "<html><head/><body><p><span style=\" font-size:12pt;\">\344\275\240\346\203\263\344\272\206\350\247\243\347\232\204\350\257\276\347\250\213\347\274\226\345\217\267</span></p></body></html>", nullptr));
        pushButton_certain->setText(QCoreApplication::translate("Recommend", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Recommend: public Ui_Recommend {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECOMMEND_H
