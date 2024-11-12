/********************************************************************************
** Form generated from reading UI file 'Inquiry.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INQUIRY_H
#define UI_INQUIRY_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
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
    QPushButton *spot10;
    QPushButton *spot5;
    QPushButton *spot6;
    QPushButton *spot8;
    QPushButton *spot7;
    QPushButton *spot3;
    QPushButton *spot9;
    QPushButton *spot2;
    QPushButton *spot4;
    QPushButton *spot1;
    QLabel *label_8;

    void setupUi(QWidget *Inquiry)
    {
        if (Inquiry->objectName().isEmpty())
            Inquiry->setObjectName("Inquiry");
        Inquiry->resize(1188, 779);
        label_2 = new QLabel(Inquiry);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 580, 91, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("\351\273\221\344\275\223")});
        font.setPointSize(10);
        label_2->setFont(font);
        lineEdit_num = new QLineEdit(Inquiry);
        lineEdit_num->setObjectName("lineEdit_num");
        lineEdit_num->setGeometry(QRect(130, 580, 71, 31));
        textEdit = new QTextEdit(Inquiry);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(30, 620, 291, 161));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\351\273\221\344\275\223")});
        font1.setPointSize(11);
        font1.setBold(false);
        textEdit->setFont(font1);
        label_picture = new QLabel(Inquiry);
        label_picture->setObjectName("label_picture");
        label_picture->setGeometry(QRect(460, 580, 241, 191));
        pushButton_inquiry = new QPushButton(Inquiry);
        pushButton_inquiry->setObjectName("pushButton_inquiry");
        pushButton_inquiry->setGeometry(QRect(220, 580, 81, 31));
        pushButton_inquiry->setFont(font);
        spot10 = new QPushButton(Inquiry);
        spot10->setObjectName("spot10");
        spot10->setGeometry(QRect(90, 160, 41, 61));
        spot10->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0, 0);"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("C:/Users/lenovo/Desktop/\347\272\242.png"), QSize(), QIcon::Normal, QIcon::Off);
        spot10->setIcon(icon);
        spot10->setIconSize(QSize(45, 45));
        spot5 = new QPushButton(Inquiry);
        spot5->setObjectName("spot5");
        spot5->setGeometry(QRect(340, 140, 41, 41));
        spot5->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0, 0);"));
        spot5->setIcon(icon);
        spot5->setIconSize(QSize(45, 45));
        spot6 = new QPushButton(Inquiry);
        spot6->setObjectName("spot6");
        spot6->setGeometry(QRect(460, 170, 51, 51));
        spot6->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0, 0);"));
        spot6->setIcon(icon);
        spot6->setIconSize(QSize(45, 45));
        spot8 = new QPushButton(Inquiry);
        spot8->setObjectName("spot8");
        spot8->setGeometry(QRect(470, 400, 51, 61));
        spot8->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0, 0);"));
        spot8->setIcon(icon);
        spot8->setIconSize(QSize(45, 45));
        spot7 = new QPushButton(Inquiry);
        spot7->setObjectName("spot7");
        spot7->setGeometry(QRect(250, 250, 41, 51));
        spot7->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0, 0);"));
        spot7->setIcon(icon);
        spot7->setIconSize(QSize(45, 45));
        spot3 = new QPushButton(Inquiry);
        spot3->setObjectName("spot3");
        spot3->setGeometry(QRect(540, 40, 41, 51));
        spot3->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0, 0);"));
        spot3->setIcon(icon);
        spot3->setIconSize(QSize(45, 45));
        spot9 = new QPushButton(Inquiry);
        spot9->setObjectName("spot9");
        spot9->setGeometry(QRect(300, 380, 51, 61));
        spot9->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0, 0);"));
        spot9->setIcon(icon);
        spot9->setIconSize(QSize(45, 45));
        spot2 = new QPushButton(Inquiry);
        spot2->setObjectName("spot2");
        spot2->setGeometry(QRect(340, 20, 51, 51));
        spot2->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0, 0);"));
        spot2->setIcon(icon);
        spot2->setIconSize(QSize(45, 45));
        spot4 = new QPushButton(Inquiry);
        spot4->setObjectName("spot4");
        spot4->setGeometry(QRect(230, 130, 41, 51));
        spot4->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0, 0);"));
        spot4->setIcon(icon);
        spot4->setIconSize(QSize(50, 50));
        spot1 = new QPushButton(Inquiry);
        spot1->setObjectName("spot1");
        spot1->setGeometry(QRect(120, 80, 51, 51));
        spot1->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0, 0);"));
        spot1->setIcon(icon);
        spot1->setIconSize(QSize(45, 45));
        label_8 = new QLabel(Inquiry);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(-60, 0, 761, 571));
        label_8->setPixmap(QPixmap(QString::fromUtf8("C:/Users/lenovo/Desktop/bjtu01.jpg")));
        label_8->setScaledContents(true);
        label_8->raise();
        label_2->raise();
        lineEdit_num->raise();
        textEdit->raise();
        label_picture->raise();
        pushButton_inquiry->raise();
        spot10->raise();
        spot5->raise();
        spot6->raise();
        spot8->raise();
        spot7->raise();
        spot3->raise();
        spot9->raise();
        spot2->raise();
        spot4->raise();
        spot1->raise();

        retranslateUi(Inquiry);

        QMetaObject::connectSlotsByName(Inquiry);
    } // setupUi

    void retranslateUi(QWidget *Inquiry)
    {
        Inquiry->setWindowTitle(QCoreApplication::translate("Inquiry", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("Inquiry", "\346\237\245\350\257\242\346\231\257\347\202\271\347\274\226\345\217\267\357\274\232", nullptr));
        label_picture->setText(QString());
        pushButton_inquiry->setText(QCoreApplication::translate("Inquiry", "\346\237\245\350\257\242", nullptr));
        spot10->setText(QString());
        spot5->setText(QString());
        spot6->setText(QString());
        spot8->setText(QString());
        spot7->setText(QString());
        spot3->setText(QString());
        spot9->setText(QString());
        spot2->setText(QString());
        spot4->setText(QString());
        spot1->setText(QString());
        label_8->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Inquiry: public Ui_Inquiry {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INQUIRY_H
