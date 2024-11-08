/********************************************************************************
** Form generated from reading UI file 'profession.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFESSION_H
#define UI_PROFESSION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Profession
{
public:
    QComboBox *comboBoxMajor;
    QLabel *label;
    QTextEdit *textEdit;

    void setupUi(QWidget *Profession)
    {
        if (Profession->objectName().isEmpty())
            Profession->setObjectName("Profession");
        Profession->resize(1000, 779);
        comboBoxMajor = new QComboBox(Profession);
        comboBoxMajor->addItem(QString());
        comboBoxMajor->addItem(QString());
        comboBoxMajor->addItem(QString());
        comboBoxMajor->addItem(QString());
        comboBoxMajor->addItem(QString());
        comboBoxMajor->addItem(QString());
        comboBoxMajor->addItem(QString());
        comboBoxMajor->setObjectName("comboBoxMajor");
        comboBoxMajor->setGeometry(QRect(180, 80, 191, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font.setPointSize(11);
        comboBoxMajor->setFont(font);
        label = new QLabel(Profession);
        label->setObjectName("label");
        label->setGeometry(QRect(110, 70, 51, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font1.setPointSize(14);
        label->setFont(font1);
        textEdit = new QTextEdit(Profession);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(110, 150, 651, 371));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font2.setPointSize(10);
        textEdit->setFont(font2);

        retranslateUi(Profession);

        QMetaObject::connectSlotsByName(Profession);
    } // setupUi

    void retranslateUi(QWidget *Profession)
    {
        Profession->setWindowTitle(QCoreApplication::translate("Profession", "Form", nullptr));
        comboBoxMajor->setItemText(0, QCoreApplication::translate("Profession", "---------------", nullptr));
        comboBoxMajor->setItemText(1, QCoreApplication::translate("Profession", "\350\256\241\347\256\227\346\234\272\347\247\221\345\255\246\344\270\216\346\212\200\346\234\257", nullptr));
        comboBoxMajor->setItemText(2, QCoreApplication::translate("Profession", "\344\277\241\346\201\257\345\256\211\345\205\250", nullptr));
        comboBoxMajor->setItemText(3, QCoreApplication::translate("Profession", "\347\211\251\350\201\224\347\275\221\345\267\245\347\250\213", nullptr));
        comboBoxMajor->setItemText(4, QCoreApplication::translate("Profession", "\346\234\272\346\242\260\345\267\245\347\250\213", nullptr));
        comboBoxMajor->setItemText(5, QCoreApplication::translate("Profession", "\346\225\260\345\255\227\345\252\222\344\275\223\346\212\200\346\234\257", nullptr));
        comboBoxMajor->setItemText(6, QCoreApplication::translate("Profession", "\351\207\221\350\236\215\345\255\246", nullptr));

        label->setText(QCoreApplication::translate("Profession", "\344\270\223\344\270\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Profession: public Ui_Profession {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFESSION_H
