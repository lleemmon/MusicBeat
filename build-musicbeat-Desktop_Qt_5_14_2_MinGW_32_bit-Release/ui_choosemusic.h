/********************************************************************************
** Form generated from reading UI file 'choosemusic.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSEMUSIC_H
#define UI_CHOOSEMUSIC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_choosemusic
{
public:
    QPushButton *pushButton_2;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QPushButton *pushButton_5;
    QLineEdit *lineEdit;

    void setupUi(QDialog *choosemusic)
    {
        if (choosemusic->objectName().isEmpty())
            choosemusic->setObjectName(QString::fromUtf8("choosemusic"));
        choosemusic->resize(512, 364);
        pushButton_2 = new QPushButton(choosemusic);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(340, 300, 61, 61));
        pushButton_2->setStyleSheet(QString::fromUtf8("image: url(:/new/anniu/gback);"));
        pushButton_2->setFlat(true);
        comboBox = new QComboBox(choosemusic);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(140, 170, 111, 22));
        comboBox->setStyleSheet(QString::fromUtf8(""));
        comboBox_2 = new QComboBox(choosemusic);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(320, 170, 69, 22));
        pushButton_5 = new QPushButton(choosemusic);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(120, 300, 61, 61));
        pushButton_5->setStyleSheet(QString::fromUtf8("image: url(:/new/anniu/usave);"));
        pushButton_5->setFlat(true);
        lineEdit = new QLineEdit(choosemusic);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(180, 129, 51, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(18);
        lineEdit->setFont(font);
        lineEdit->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-width:0;\n"
"border-style:outset;"));

        retranslateUi(choosemusic);

        QMetaObject::connectSlotsByName(choosemusic);
    } // setupUi

    void retranslateUi(QDialog *choosemusic)
    {
        choosemusic->setWindowTitle(QCoreApplication::translate("choosemusic", "\346\255\214\346\233\262\351\200\211\346\213\251", nullptr));
        pushButton_2->setText(QString());
        comboBox->setItemText(0, QCoreApplication::translate("choosemusic", "darksambaland", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("choosemusic", "StarofAndromeda", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("choosemusic", "ParadigmShift", nullptr));

        comboBox_2->setItemText(0, QCoreApplication::translate("choosemusic", "\347\256\200\345\215\225", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("choosemusic", "\346\231\256\351\200\232", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("choosemusic", "\345\233\260\351\232\276", nullptr));

        pushButton_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class choosemusic: public Ui_choosemusic {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSEMUSIC_H
