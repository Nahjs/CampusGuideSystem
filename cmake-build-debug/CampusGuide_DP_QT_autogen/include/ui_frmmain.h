/********************************************************************************
** Form generated from reading UI file 'frmmain.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMMAIN_H
#define UI_FRMMAIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_frmMain
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labSender;
    QLineEdit *txtSender;
    QLabel *labSenderPwd;
    QLineEdit *txtSenderPwd;
    QLabel *labServer;
    QComboBox *cboxServer;
    QLabel *labPort;
    QComboBox *cboxPort;
    QCheckBox *ckSSL;
    QPushButton *btnSend;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labSenderAddr;
    QLineEdit *txtSenderAddr;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labReceiverAddr;
    QLineEdit *txtReceiverAddr;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labTitle;
    QLineEdit *txtTitle;
    QHBoxLayout *horizontalLayout_5;
    QLabel *labAtta;
    QLineEdit *txtAtta;
    QPushButton *btnSelect;
    QHBoxLayout *horizontalLayout_6;
    QLabel *labContent;
    QTextBrowser *txtContent;

    void setupUi(QWidget *frmMain)
    {
        if (frmMain->objectName().isEmpty())
            frmMain->setObjectName("frmMain");
        frmMain->resize(757, 518);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/main.png"), QSize(), QIcon::Normal, QIcon::Off);
        frmMain->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(frmMain);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName("horizontalLayout");
        labSender = new QLabel(frmMain);
        labSender->setObjectName("labSender");

        horizontalLayout->addWidget(labSender);

        txtSender = new QLineEdit(frmMain);
        txtSender->setObjectName("txtSender");

        horizontalLayout->addWidget(txtSender);

        labSenderPwd = new QLabel(frmMain);
        labSenderPwd->setObjectName("labSenderPwd");

        horizontalLayout->addWidget(labSenderPwd);

        txtSenderPwd = new QLineEdit(frmMain);
        txtSenderPwd->setObjectName("txtSenderPwd");
        txtSenderPwd->setEchoMode(QLineEdit::Password);

        horizontalLayout->addWidget(txtSenderPwd);

        labServer = new QLabel(frmMain);
        labServer->setObjectName("labServer");

        horizontalLayout->addWidget(labServer);

        cboxServer = new QComboBox(frmMain);
        cboxServer->addItem(QString());
        cboxServer->addItem(QString());
        cboxServer->addItem(QString());
        cboxServer->addItem(QString());
        cboxServer->addItem(QString());
        cboxServer->addItem(QString());
        cboxServer->addItem(QString());
        cboxServer->setObjectName("cboxServer");

        horizontalLayout->addWidget(cboxServer);

        labPort = new QLabel(frmMain);
        labPort->setObjectName("labPort");

        horizontalLayout->addWidget(labPort);

        cboxPort = new QComboBox(frmMain);
        cboxPort->addItem(QString());
        cboxPort->addItem(QString());
        cboxPort->addItem(QString());
        cboxPort->setObjectName("cboxPort");

        horizontalLayout->addWidget(cboxPort);

        ckSSL = new QCheckBox(frmMain);
        ckSSL->setObjectName("ckSSL");

        horizontalLayout->addWidget(ckSSL);

        btnSend = new QPushButton(frmMain);
        btnSend->setObjectName("btnSend");
        btnSend->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(btnSend);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        labSenderAddr = new QLabel(frmMain);
        labSenderAddr->setObjectName("labSenderAddr");

        horizontalLayout_2->addWidget(labSenderAddr);

        txtSenderAddr = new QLineEdit(frmMain);
        txtSenderAddr->setObjectName("txtSenderAddr");

        horizontalLayout_2->addWidget(txtSenderAddr);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        labReceiverAddr = new QLabel(frmMain);
        labReceiverAddr->setObjectName("labReceiverAddr");

        horizontalLayout_3->addWidget(labReceiverAddr);

        txtReceiverAddr = new QLineEdit(frmMain);
        txtReceiverAddr->setObjectName("txtReceiverAddr");

        horizontalLayout_3->addWidget(txtReceiverAddr);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        labTitle = new QLabel(frmMain);
        labTitle->setObjectName("labTitle");

        horizontalLayout_4->addWidget(labTitle);

        txtTitle = new QLineEdit(frmMain);
        txtTitle->setObjectName("txtTitle");

        horizontalLayout_4->addWidget(txtTitle);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        labAtta = new QLabel(frmMain);
        labAtta->setObjectName("labAtta");

        horizontalLayout_5->addWidget(labAtta);

        txtAtta = new QLineEdit(frmMain);
        txtAtta->setObjectName("txtAtta");

        horizontalLayout_5->addWidget(txtAtta);

        btnSelect = new QPushButton(frmMain);
        btnSelect->setObjectName("btnSelect");
        btnSelect->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_5->addWidget(btnSelect);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        labContent = new QLabel(frmMain);
        labContent->setObjectName("labContent");

        horizontalLayout_6->addWidget(labContent);

        txtContent = new QTextBrowser(frmMain);
        txtContent->setObjectName("txtContent");

        horizontalLayout_6->addWidget(txtContent);


        verticalLayout->addLayout(horizontalLayout_6);


        retranslateUi(frmMain);

        QMetaObject::connectSlotsByName(frmMain);
    } // setupUi

    void retranslateUi(QWidget *frmMain)
    {
        frmMain->setWindowTitle(QCoreApplication::translate("frmMain", "\351\202\256\344\273\266\345\217\221\351\200\201", nullptr));
        labSender->setText(QCoreApplication::translate("frmMain", "\347\224\250\346\210\267\345\220\215:", nullptr));
        txtSender->setText(QCoreApplication::translate("frmMain", "sunkaili1999@163.com", nullptr));
        labSenderPwd->setText(QCoreApplication::translate("frmMain", "\345\257\206\347\240\201:", nullptr));
        txtSenderPwd->setText(QCoreApplication::translate("frmMain", "19990104xy", nullptr));
        labServer->setText(QCoreApplication::translate("frmMain", "\346\234\215\345\212\241\345\231\250:", nullptr));
        cboxServer->setItemText(0, QCoreApplication::translate("frmMain", "smtp.163.com", nullptr));
        cboxServer->setItemText(1, QCoreApplication::translate("frmMain", "smtp.126.com", nullptr));
        cboxServer->setItemText(2, QCoreApplication::translate("frmMain", "smtp.qq.com", nullptr));
        cboxServer->setItemText(3, QCoreApplication::translate("frmMain", "smt.sina.com", nullptr));
        cboxServer->setItemText(4, QCoreApplication::translate("frmMain", "smtp.sohu.com", nullptr));
        cboxServer->setItemText(5, QCoreApplication::translate("frmMain", "smtp.139.com", nullptr));
        cboxServer->setItemText(6, QCoreApplication::translate("frmMain", "smtp.189.com", nullptr));

        labPort->setText(QCoreApplication::translate("frmMain", "\347\253\257\345\217\243:", nullptr));
        cboxPort->setItemText(0, QCoreApplication::translate("frmMain", "25", nullptr));
        cboxPort->setItemText(1, QCoreApplication::translate("frmMain", "465", nullptr));
        cboxPort->setItemText(2, QCoreApplication::translate("frmMain", "587", nullptr));

        ckSSL->setText(QCoreApplication::translate("frmMain", "SSL", nullptr));
        btnSend->setText(QCoreApplication::translate("frmMain", "\345\217\221\351\200\201", nullptr));
        labSenderAddr->setText(QCoreApplication::translate("frmMain", "\345\217\221\344\273\266\344\272\272:", nullptr));
        txtSenderAddr->setText(QCoreApplication::translate("frmMain", "sunkaili1999@163.com", nullptr));
        labReceiverAddr->setText(QCoreApplication::translate("frmMain", "\346\224\266\344\273\266\344\272\272:", nullptr));
        txtReceiverAddr->setText(QString());
        labTitle->setText(QCoreApplication::translate("frmMain", "\346\240\207  \351\242\230:", nullptr));
        txtTitle->setText(QCoreApplication::translate("frmMain", "\345\214\227\345\267\245\345\244\247\346\240\241\345\233\255\345\257\274\346\270\270\342\200\224\342\200\224\346\237\245\350\257\242\347\273\223\346\236\234", nullptr));
        labAtta->setText(QCoreApplication::translate("frmMain", "\351\231\204  \344\273\266:", nullptr));
        txtAtta->setText(QCoreApplication::translate("frmMain", "D:\\Junior1\\DS_Qt\\CampusGuide_DP_QT\\Email\\result.jpg;D:\\Junior1\\DS_Qt\\CampusGuide_DP_QT\\Email\\route.txt", nullptr));
        btnSelect->setText(QCoreApplication::translate("frmMain", "\346\265\217\350\247\210", nullptr));
        labContent->setText(QCoreApplication::translate("frmMain", "\346\255\243  \346\226\207:", nullptr));
        txtContent->setHtml(QCoreApplication::translate("frmMain", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\346\202\250\346\211\200\346\237\245\350\257\242\347\232\204\350\267\257\347\272\277\343\200\201\346\227\266\351\227\264\344\277\241\346\201\257\345\234\250\346\210\252\345\233\276\343\200\201\346\226\207\344\273\266\351\231\204\344\273\266\344\270\255\343\200\202</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\346\254\242\350\277\216\345\206\215\346\254\241\344\275\277\347\224\250\343\200\202</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class frmMain: public Ui_frmMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMMAIN_H
