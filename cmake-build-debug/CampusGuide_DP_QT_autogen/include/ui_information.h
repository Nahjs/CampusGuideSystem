/********************************************************************************
** Form generated from reading UI file 'Information.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFORMATION_H
#define UI_INFORMATION_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Information
{
public:
    QLabel *title;
    QLabel *placeInformation;
    QToolButton *tb1;
    QToolButton *tb2;
    QLabel *label;
    QPushButton *pushButton_addMap;
    QToolButton *tb3;
    QToolButton *tb4;

    void setupUi(QWidget *Information)
    {
        if (Information->objectName().isEmpty())
            Information->setObjectName("Information");
        Information->setWindowModality(Qt::NonModal);
        Information->resize(1500, 900);
        QFont font;
        font.setBold(true);
        Information->setFont(font);
        title = new QLabel(Information);
        title->setObjectName("title");
        title->setGeometry(QRect(490, 0, 351, 81));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\345\271\274\345\234\206")});
        font1.setPointSize(22);
        font1.setBold(true);
        title->setFont(font1);
        title->setMouseTracking(false);
        placeInformation = new QLabel(Information);
        placeInformation->setObjectName("placeInformation");
        placeInformation->setGeometry(QRect(1250, 20, 250, 900));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221 Light")});
        font2.setBold(false);
        placeInformation->setFont(font2);
        tb1 = new QToolButton(Information);
        tb1->setObjectName("tb1");
        tb1->setGeometry(QRect(20, 90, 171, 61));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("\351\273\221\344\275\223")});
        font3.setPointSize(12);
        font3.setBold(true);
        tb1->setFont(font3);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resource/icon10_1.png"), QSize(), QIcon::Normal, QIcon::Off);
        tb1->setIcon(icon);
        tb1->setIconSize(QSize(50, 50));
        tb1->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        tb2 = new QToolButton(Information);
        tb2->setObjectName("tb2");
        tb2->setGeometry(QRect(20, 180, 171, 61));
        tb2->setFont(font3);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Resource/icon11_1.png"), QSize(), QIcon::Normal, QIcon::Off);
        tb2->setIcon(icon1);
        tb2->setIconSize(QSize(50, 50));
        tb2->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        label = new QLabel(Information);
        label->setObjectName("label");
        label->setGeometry(QRect(260, 260, 951, 331));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("\351\273\221\344\275\223")});
        font4.setPointSize(16);
        font4.setBold(false);
        label->setFont(font4);
        pushButton_addMap = new QPushButton(Information);
        pushButton_addMap->setObjectName("pushButton_addMap");
        pushButton_addMap->setGeometry(QRect(1030, 850, 91, 31));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("\351\273\221\344\275\223")});
        font5.setPointSize(11);
        font5.setBold(false);
        pushButton_addMap->setFont(font5);
        tb3 = new QToolButton(Information);
        tb3->setObjectName("tb3");
        tb3->setGeometry(QRect(20, 270, 171, 61));
        tb3->setFont(font3);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Resource/icon4_1.png"), QSize(), QIcon::Normal, QIcon::Off);
        tb3->setIcon(icon2);
        tb3->setIconSize(QSize(50, 50));
        tb3->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        tb4 = new QToolButton(Information);
        tb4->setObjectName("tb4");
        tb4->setGeometry(QRect(20, 360, 171, 61));
        tb4->setFont(font3);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Resource/icon12_1.png"), QSize(), QIcon::Normal, QIcon::Off);
        tb4->setIcon(icon3);
        tb4->setIconSize(QSize(50, 50));
        tb4->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        retranslateUi(Information);

        QMetaObject::connectSlotsByName(Information);
    } // setupUi

    void retranslateUi(QWidget *Information)
    {
        Information->setWindowTitle(QCoreApplication::translate("Information", "Information", nullptr));
        title->setText(QCoreApplication::translate("Information", "\345\214\227\345\267\245\345\244\247\346\240\241\345\233\255\345\257\274\350\210\252\347\263\273\347\273\237", nullptr));
        placeInformation->setText(QCoreApplication::translate("Information", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\276\256\350\275\257\351\233\205\351\273\221 Light'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:600; color:#ffffff;\">      1  \344\272\214\345\217\267\345\256\277\350\210\215\346\245\274</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:600; color:#ffffff;\">      2  \344\277\241\346\201\257\346\245\274</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\""
                        "><span style=\" font-size:11pt; font-weight:600; color:#ffffff;\">      3  \350\275\257\344\273\266\346\245\274</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:600; color:#ffffff;\">      4  \345\256\236\350\256\255\346\245\274</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:600; color:#ffffff;\">      5  \347\273\217\347\256\241\346\245\274</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:600; color:#ffffff;\">      6  \344\272\272\346\226\207\346\245\274</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11p"
                        "t; font-weight:600; color:#ffffff;\">      7  \345\245\245\346\236\227\345\214\271\345\205\213\344\275\223\350\202\262\351\246\206</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:600; color:#ffffff;\">      8  \345\245\245\350\277\220\351\244\220\345\216\205</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:600; color:#ffffff;\">      9  \351\200\270\345\244\253\345\233\276\344\271\246\351\246\206</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:600; color:#ffffff;\">      10 \346\270\270\346\263\263\351\246\206</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-in"
                        "dent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:600; color:#ffffff;\">      11 \346\240\241\345\214\273\351\231\242</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:600; color:#ffffff;\">      12 \345\214\227\347\224\260\345\276\204\345\234\272</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:600; color:#ffffff;\">      13 \345\273\272\345\233\275\351\245\255\345\272\227</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:600; color:#ffffff;\">      14 \351\207\221\345\267\245\346\245\274</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:"
                        "0; text-indent:0px;\"><span style=\" font-size:11pt; font-weight:600; color:#ffffff;\">      15 \347\275\221\347\220\203\345\234\272</span></p></body></html>", nullptr));
        tb1->setText(QCoreApplication::translate("Information", "\350\267\257\345\276\204\346\237\245\350\257\242", nullptr));
        tb2->setText(QCoreApplication::translate("Information", "\344\277\241\346\201\257\346\237\245\350\257\242", nullptr));
        label->setText(QCoreApplication::translate("Information", "<html><head/><body><p>\346\254\242\350\277\216\346\235\245\345\210\260\345\214\227\344\272\254\345\267\245\344\270\232\345\244\247\345\255\246\346\231\272\350\203\275\345\257\274\350\210\252\347\263\273\347\273\237</p><p><br/></p><p>* \345\246\202\346\236\234\344\275\240\346\203\263\350\246\201\350\277\233\350\241\214\350\267\257\345\276\204\346\237\245\350\257\242\357\274\214\350\257\267\347\202\271\345\207\273\342\200\234\350\267\257\345\276\204\346\237\245\350\257\242\342\200\235\346\214\211\351\222\256</p><p>* \345\246\202\346\236\234\344\275\240\346\203\263\350\246\201\344\272\206\350\247\243\346\240\241\345\233\255\344\270\255\345\220\204\345\234\260\347\202\271\347\232\204\344\277\241\346\201\257\344\273\245\345\217\212\347\275\221\347\253\231\351\223\276\346\216\245\343\200\201\350\256\242\347\245\250\347\275\221\345\235\200\347\255\211\357\274\214</p><p>\350\257\267\347\202\271\345\207\273\342\200\234\344\277\241\346\201\257\346\237\245\350\257\242\342\200\235\346\214\211\351\222\256</p><p>* \345\246\202"
                        "\346\236\234\344\275\240\346\203\263\350\246\201\344\272\206\350\247\243\345\267\245\345\244\247\347\211\271\350\211\262\344\270\223\344\270\232\357\274\214\350\257\267\347\202\271\345\207\273\342\200\234\344\270\223\344\270\232\344\273\213\347\273\215\342\200\235\346\214\211\351\222\256</p><p>* \345\246\202\346\236\234\344\275\240\346\203\263\344\272\206\350\247\243\350\257\204\345\210\206\346\234\200\351\253\230\343\200\201\346\234\200\345\217\227\346\254\242\350\277\216\347\232\204\351\200\211\344\277\256\350\257\276\357\274\214\350\257\267\347\202\271\345\207\273\342\200\234\351\200\211\344\277\256\350\257\276\346\216\250\350\215\220\342\200\235\346\214\211\351\222\256</p></body></html>", nullptr));
        pushButton_addMap->setText(QCoreApplication::translate("Information", "\346\230\276\347\244\272\345\234\260\345\233\276", nullptr));
        tb3->setText(QCoreApplication::translate("Information", "\344\270\223\344\270\232\344\273\213\347\273\215", nullptr));
        tb4->setText(QCoreApplication::translate("Information", "\351\200\211\344\277\256\350\257\276\346\216\250\350\215\220", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Information: public Ui_Information {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFORMATION_H
