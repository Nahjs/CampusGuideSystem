/********************************************************************************
** Form generated from reading UI file 'bjutmap.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BJUTMAP_H
#define UI_BJUTMAP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_bjutmap
{
public:
    QGroupBox *groupBox;
    QLabel *label_route_1;
    QLabel *label_route_2;
    QLabel *label_route_3;
    QLabel *label_route_4;
    QLabel *label_2;
    QLabel *placeInformation;
    QLabel *label_3;
    QGroupBox *groupBox_2;
    QLabel *label_arrivetime_1;
    QLabel *label_arrivetime_2;
    QLabel *label_arrivetime_3;
    QLabel *label_arrivetime_4;
    QLabel *label_5;
    QGroupBox *groupBox_3;
    QLabel *label_staytime_1;
    QLabel *label_staytime_2;
    QLabel *label_staytime_3;
    QLabel *label_staytime_4;
    QPushButton *pushButton_email;
    QPushButton *pushButton_screen;
    QPushButton *pushButton_return;

    void setupUi(QWidget *bjutmap)
    {
        if (bjutmap->objectName().isEmpty())
            bjutmap->setObjectName("bjutmap");
        bjutmap->resize(1600, 950);
        groupBox = new QGroupBox(bjutmap);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(1060, 60, 271, 181));
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
        label_2 = new QLabel(bjutmap);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(1060, 30, 101, 21));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\351\273\221\344\275\223")});
        font1.setPointSize(14);
        label_2->setFont(font1);
        placeInformation = new QLabel(bjutmap);
        placeInformation->setObjectName("placeInformation");
        placeInformation->setGeometry(QRect(1350, 0, 250, 951));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221 Light")});
        font2.setBold(false);
        placeInformation->setFont(font2);
        label_3 = new QLabel(bjutmap);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(1060, 270, 231, 61));
        label_3->setFont(font1);
        groupBox_2 = new QGroupBox(bjutmap);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(1060, 340, 271, 181));
        label_arrivetime_1 = new QLabel(groupBox_2);
        label_arrivetime_1->setObjectName("label_arrivetime_1");
        label_arrivetime_1->setGeometry(QRect(10, 20, 261, 20));
        label_arrivetime_1->setFont(font);
        label_arrivetime_2 = new QLabel(groupBox_2);
        label_arrivetime_2->setObjectName("label_arrivetime_2");
        label_arrivetime_2->setGeometry(QRect(10, 60, 261, 20));
        label_arrivetime_2->setFont(font);
        label_arrivetime_3 = new QLabel(groupBox_2);
        label_arrivetime_3->setObjectName("label_arrivetime_3");
        label_arrivetime_3->setGeometry(QRect(10, 100, 261, 20));
        label_arrivetime_3->setFont(font);
        label_arrivetime_4 = new QLabel(groupBox_2);
        label_arrivetime_4->setObjectName("label_arrivetime_4");
        label_arrivetime_4->setGeometry(QRect(10, 140, 261, 20));
        label_arrivetime_4->setFont(font);
        label_5 = new QLabel(bjutmap);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(1070, 560, 231, 61));
        label_5->setFont(font1);
        groupBox_3 = new QGroupBox(bjutmap);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(1070, 630, 271, 181));
        label_staytime_1 = new QLabel(groupBox_3);
        label_staytime_1->setObjectName("label_staytime_1");
        label_staytime_1->setGeometry(QRect(10, 20, 261, 20));
        label_staytime_1->setFont(font);
        label_staytime_2 = new QLabel(groupBox_3);
        label_staytime_2->setObjectName("label_staytime_2");
        label_staytime_2->setGeometry(QRect(10, 60, 261, 20));
        label_staytime_2->setFont(font);
        label_staytime_3 = new QLabel(groupBox_3);
        label_staytime_3->setObjectName("label_staytime_3");
        label_staytime_3->setGeometry(QRect(10, 100, 261, 20));
        label_staytime_3->setFont(font);
        label_staytime_4 = new QLabel(groupBox_3);
        label_staytime_4->setObjectName("label_staytime_4");
        label_staytime_4->setGeometry(QRect(10, 140, 261, 20));
        label_staytime_4->setFont(font);
        pushButton_email = new QPushButton(bjutmap);
        pushButton_email->setObjectName("pushButton_email");
        pushButton_email->setGeometry(QRect(1090, 890, 141, 41));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("\351\273\221\344\275\223")});
        font3.setPointSize(12);
        pushButton_email->setFont(font3);
        pushButton_screen = new QPushButton(bjutmap);
        pushButton_screen->setObjectName("pushButton_screen");
        pushButton_screen->setGeometry(QRect(1090, 840, 141, 41));
        pushButton_screen->setFont(font3);
        pushButton_screen->setStyleSheet(QString::fromUtf8(""));
        pushButton_return = new QPushButton(bjutmap);
        pushButton_return->setObjectName("pushButton_return");
        pushButton_return->setGeometry(QRect(1270, 880, 61, 51));
        pushButton_return->setFont(font3);

        retranslateUi(bjutmap);

        QMetaObject::connectSlotsByName(bjutmap);
    } // setupUi

    void retranslateUi(QWidget *bjutmap)
    {
        bjutmap->setWindowTitle(QCoreApplication::translate("bjutmap", "Form", nullptr));
        groupBox->setTitle(QString());
        label_route_1->setText(QCoreApplication::translate("bjutmap", "<html><head/><body><p><span style=\" color:#ffffc5;\">TextLabel</span></p></body></html>", nullptr));
        label_route_2->setText(QCoreApplication::translate("bjutmap", "<html><head/><body><p><span style=\" color:#ffffc5;\">TextLabel</span></p></body></html>", nullptr));
        label_route_3->setText(QCoreApplication::translate("bjutmap", "<html><head/><body><p><span style=\" color:#ffffc5;\">TextLabel</span></p></body></html>", nullptr));
        label_route_4->setText(QCoreApplication::translate("bjutmap", "<html><head/><body><p><span style=\" color:#ffffc5;\">TextLabel</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("bjutmap", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; color:#ffffc5;\">\350\267\257\347\272\277\344\270\272\357\274\232</span></p></body></html>", nullptr));
        placeInformation->setText(QCoreApplication::translate("bjutmap", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\276\256\350\275\257\351\233\205\351\273\221 Light'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600; color:#ffffff;\">      1  \344\272\214\345\217\267\345\256\277\350\210\215\346\245\274</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600; color:#ffffff;\">      2  \344\277\241\346\201\257\346\245\274</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\""
                        "><span style=\" font-size:12pt; font-weight:600; color:#ffffff;\">      3  \350\275\257\344\273\266\346\245\274</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600; color:#ffffff;\">      4  \345\256\236\350\256\255\346\245\274</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600; color:#ffffff;\">      5  \347\273\217\347\256\241\346\245\274</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600; color:#ffffff;\">      6  \344\272\272\346\226\207\346\245\274</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12p"
                        "t; font-weight:600; color:#ffffff;\">      7  \345\245\245\346\236\227\345\214\271\345\205\213\344\275\223\350\202\262\351\246\206</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600; color:#ffffff;\">      8  \345\245\245\350\277\220\351\244\220\345\216\205</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600; color:#ffffff;\">      9  \351\200\270\345\244\253\345\233\276\344\271\246\351\246\206</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600; color:#ffffff;\">      10 \346\270\270\346\263\263\351\246\206</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-in"
                        "dent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600; color:#ffffff;\">      11 \346\240\241\345\214\273\351\231\242</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600; color:#ffffff;\">      12 \345\214\227\347\224\260\345\276\204\345\234\272</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600; color:#ffffff;\">      13 \345\273\272\345\233\275\351\245\255\345\272\227</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600; color:#ffffff;\">      14 \351\207\221\345\267\245\346\245\274</span></p>\n"
"<p style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:"
                        "0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600; color:#ffffff;\">      15 \347\275\221\347\220\203\345\234\272</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("bjutmap", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; color:#ffffc5;\">\344\276\235\346\254\241\345\210\260\350\276\276\346\227\266\351\227\264\357\274\232</span></p><p><span style=\" font-size:12pt; font-weight:600; color:#ffffc5;\">\357\274\210\347\254\254\344\270\200\344\270\252\344\270\272\345\207\272\345\217\221\346\227\266\351\227\264\357\274\211</span></p></body></html>", nullptr));
        groupBox_2->setTitle(QString());
        label_arrivetime_1->setText(QCoreApplication::translate("bjutmap", "<html><head/><body><p><span style=\" color:#ffffc5;\">TextLabel</span></p></body></html>", nullptr));
        label_arrivetime_2->setText(QCoreApplication::translate("bjutmap", "<html><head/><body><p><span style=\" color:#ffffc5;\">TextLabel</span></p></body></html>", nullptr));
        label_arrivetime_3->setText(QCoreApplication::translate("bjutmap", "<html><head/><body><p><span style=\" color:#ffffc5;\">TextLabel</span></p></body></html>", nullptr));
        label_arrivetime_4->setText(QCoreApplication::translate("bjutmap", "<html><head/><body><p><span style=\" color:#ffffc5;\">TextLabel</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("bjutmap", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; color:#ffffc5;\">\344\276\235\346\254\241\345\201\234\347\225\231\346\227\266\351\227\264\357\274\232</span></p><p><span style=\" font-size:12pt; font-weight:600; color:#ffffc5;\">\357\274\210\344\270\215\345\214\205\345\220\253\350\265\267\347\202\271\357\274\211</span></p></body></html>", nullptr));
        groupBox_3->setTitle(QString());
        label_staytime_1->setText(QCoreApplication::translate("bjutmap", "<html><head/><body><p><span style=\" color:#ffffc5;\">TextLabel</span></p></body></html>", nullptr));
        label_staytime_2->setText(QCoreApplication::translate("bjutmap", "<html><head/><body><p><span style=\" color:#ffffc5;\">TextLabel</span></p></body></html>", nullptr));
        label_staytime_3->setText(QCoreApplication::translate("bjutmap", "<html><head/><body><p><span style=\" color:#ffffc5;\">TextLabel</span></p></body></html>", nullptr));
        label_staytime_4->setText(QCoreApplication::translate("bjutmap", "<html><head/><body><p><span style=\" color:#ffffc5;\">TextLabel</span></p></body></html>", nullptr));
        pushButton_email->setText(QCoreApplication::translate("bjutmap", "\345\217\221\351\200\201\351\202\256\344\273\266", nullptr));
        pushButton_screen->setText(QCoreApplication::translate("bjutmap", "\345\275\223\345\211\215\347\225\214\351\235\242\346\210\252\345\233\276", nullptr));
        pushButton_return->setText(QCoreApplication::translate("bjutmap", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class bjutmap: public Ui_bjutmap {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BJUTMAP_H
