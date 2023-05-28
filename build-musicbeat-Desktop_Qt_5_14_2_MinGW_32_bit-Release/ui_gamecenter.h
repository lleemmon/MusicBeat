/********************************************************************************
** Form generated from reading UI file 'gamecenter.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMECENTER_H
#define UI_GAMECENTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Gamecenter
{
public:
    QLineEdit *grade;
    QLineEdit *ACC;
    QLineEdit *combonumber;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *jindu;
    QLabel *label;

    void setupUi(QDialog *Gamecenter)
    {
        if (Gamecenter->objectName().isEmpty())
            Gamecenter->setObjectName(QString::fromUtf8("Gamecenter"));
        Gamecenter->resize(1024, 768);
        grade = new QLineEdit(Gamecenter);
        grade->setObjectName(QString::fromUtf8("grade"));
        grade->setEnabled(false);
        grade->setGeometry(QRect(430, 230, 181, 71));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(36);
        grade->setFont(font);
        grade->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-width:0;\n"
"border-style:outset;\n"
"qproper-alignment:AlignHCenter"));
        ACC = new QLineEdit(Gamecenter);
        ACC->setObjectName(QString::fromUtf8("ACC"));
        ACC->setEnabled(false);
        ACC->setGeometry(QRect(860, 20, 101, 47));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(22);
        ACC->setFont(font1);
        ACC->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-width:0;\n"
"border-style:outset;\n"
"color:white;"));
        combonumber = new QLineEdit(Gamecenter);
        combonumber->setObjectName(QString::fromUtf8("combonumber"));
        combonumber->setEnabled(false);
        combonumber->setGeometry(QRect(430, 300, 181, 71));
        combonumber->setFont(font);
        combonumber->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-width:0;\n"
"border-style:outset;\n"
"qproperty-alignment:AlignHCenter;\n"
"color:hotpink"));
        pushButton = new QPushButton(Gamecenter);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(950, 100, 71, 61));
        pushButton->setStyleSheet(QString::fromUtf8("image: url(:/new/anniu/gpause);"));
        pushButton->setFlat(true);
        pushButton_2 = new QPushButton(Gamecenter);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(950, 180, 71, 61));
        pushButton_2->setStyleSheet(QString::fromUtf8("image: url(:/new/anniu/greply);"));
        pushButton_2->setFlat(true);
        pushButton_3 = new QPushButton(Gamecenter);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(950, 260, 71, 61));
        pushButton_3->setStyleSheet(QString::fromUtf8("image: url(:/new/anniu/gback);"));
        pushButton_3->setFlat(true);
        layoutWidget = new QWidget(Gamecenter);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(680, 110, 261, 39));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\346\226\260\345\256\213\344\275\223"));
        font2.setPointSize(20);
        label_3->setFont(font2);

        horizontalLayout->addWidget(label_3);

        jindu = new QLineEdit(layoutWidget);
        jindu->setObjectName(QString::fromUtf8("jindu"));
        jindu->setEnabled(false);
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font3.setPointSize(20);
        jindu->setFont(font3);
        jindu->setTabletTracking(false);
        jindu->setStyleSheet(QString::fromUtf8("background:transparent;border-width:0;border-style:outset;\n"
"color:white"));

        horizontalLayout->addWidget(jindu);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font3);

        horizontalLayout->addWidget(label);


        retranslateUi(Gamecenter);

        QMetaObject::connectSlotsByName(Gamecenter);
    } // setupUi

    void retranslateUi(QDialog *Gamecenter)
    {
        Gamecenter->setWindowTitle(QCoreApplication::translate("Gamecenter", "\346\270\270\346\210\217\344\270\255......", nullptr));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        label_3->setText(QCoreApplication::translate("Gamecenter", "\346\255\214\346\233\262\350\277\233\345\272\246\357\274\232", nullptr));
        label->setText(QCoreApplication::translate("Gamecenter", "%", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Gamecenter: public Ui_Gamecenter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMECENTER_H
