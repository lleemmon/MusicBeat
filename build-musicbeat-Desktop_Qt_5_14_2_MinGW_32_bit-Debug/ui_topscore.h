/********************************************************************************
** Form generated from reading UI file 'topscore.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOPSCORE_H
#define UI_TOPSCORE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_topscore
{
public:
    QPushButton *pushButton;
    QLineEdit *FIRST;
    QLineEdit *THIRD;
    QLineEdit *SECOND;
    QComboBox *comboBox;
    QComboBox *comboBox_2;

    void setupUi(QDialog *topscore)
    {
        if (topscore->objectName().isEmpty())
            topscore->setObjectName(QString::fromUtf8("topscore"));
        topscore->resize(1024, 726);
        pushButton = new QPushButton(topscore);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(930, 0, 91, 91));
        pushButton->setStyleSheet(QString::fromUtf8("image: url(:/new/anniu/gback);"));
        pushButton->setFlat(true);
        FIRST = new QLineEdit(topscore);
        FIRST->setObjectName(QString::fromUtf8("FIRST"));
        FIRST->setEnabled(false);
        FIRST->setGeometry(QRect(740, 350, 101, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(16);
        FIRST->setFont(font);
        FIRST->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-width:0;\n"
"border-style:outset;\n"
"color:white"));
        THIRD = new QLineEdit(topscore);
        THIRD->setObjectName(QString::fromUtf8("THIRD"));
        THIRD->setEnabled(false);
        THIRD->setGeometry(QRect(740, 550, 101, 31));
        THIRD->setFont(font);
        THIRD->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-width:0;\n"
"border-style:outset;\n"
"color:white"));
        SECOND = new QLineEdit(topscore);
        SECOND->setObjectName(QString::fromUtf8("SECOND"));
        SECOND->setEnabled(false);
        SECOND->setGeometry(QRect(740, 450, 101, 31));
        SECOND->setFont(font);
        SECOND->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-width:0;\n"
"border-style:outset;\n"
"color:white"));
        comboBox = new QComboBox(topscore);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(90, 180, 131, 22));
        comboBox_2 = new QComboBox(topscore);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(90, 320, 69, 22));

        retranslateUi(topscore);

        QMetaObject::connectSlotsByName(topscore);
    } // setupUi

    void retranslateUi(QDialog *topscore)
    {
        topscore->setWindowTitle(QCoreApplication::translate("topscore", "\346\270\270\346\210\217\346\216\222\350\241\214\346\246\234", nullptr));
        pushButton->setText(QString());
        comboBox->setItemText(0, QCoreApplication::translate("topscore", "darksambaland", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("topscore", "StarofAndromeda", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("topscore", "ParadigmShift", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("topscore", "\345\261\225\347\244\272\344\270\223\347\224\250", nullptr));

        comboBox_2->setItemText(0, QCoreApplication::translate("topscore", "\347\256\200\345\215\225", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("topscore", "\346\231\256\351\200\232", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("topscore", "\345\233\260\351\232\276", nullptr));

    } // retranslateUi

};

namespace Ui {
    class topscore: public Ui_topscore {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOPSCORE_H
