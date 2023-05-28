/********************************************************************************
** Form generated from reading UI file 'endgame.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENDGAME_H
#define UI_ENDGAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>

QT_BEGIN_NAMESPACE

class Ui_endgame
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QSplitter *splitter;
    QLineEdit *ACC;
    QLineEdit *Maxcombo;
    QLineEdit *perfectnumber;
    QLineEdit *greatnumber;
    QLineEdit *goodnumber;
    QLineEdit *badnumber;
    QLineEdit *missnumber;

    void setupUi(QDialog *endgame)
    {
        if (endgame->objectName().isEmpty())
            endgame->setObjectName(QString::fromUtf8("endgame"));
        endgame->resize(1024, 726);
        pushButton = new QPushButton(endgame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(140, 640, 91, 91));
        pushButton->setStyleSheet(QString::fromUtf8("image: url(:/new/anniu/gback);"));
        pushButton->setFlat(true);
        pushButton_2 = new QPushButton(endgame);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(450, 640, 91, 91));
        pushButton_2->setStyleSheet(QString::fromUtf8("image: url(:/new/anniu/greply);"));
        pushButton_2->setFlat(true);
        pushButton_3 = new QPushButton(endgame);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(760, 640, 101, 91));
        pushButton_3->setStyleSheet(QString::fromUtf8("image: url(:/new/anniu/cback);"));
        pushButton_3->setFlat(true);
        splitter = new QSplitter(endgame);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(490, 300, 133, 281));
        splitter->setOrientation(Qt::Vertical);
        ACC = new QLineEdit(splitter);
        ACC->setObjectName(QString::fromUtf8("ACC"));
        ACC->setEnabled(false);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(18);
        ACC->setFont(font);
        ACC->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-width:0;\n"
"border-style:outset;\n"
"color:white"));
        splitter->addWidget(ACC);
        Maxcombo = new QLineEdit(splitter);
        Maxcombo->setObjectName(QString::fromUtf8("Maxcombo"));
        Maxcombo->setEnabled(false);
        Maxcombo->setFont(font);
        Maxcombo->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-width:0;\n"
"border-style:outset;\n"
"color:white"));
        splitter->addWidget(Maxcombo);
        perfectnumber = new QLineEdit(splitter);
        perfectnumber->setObjectName(QString::fromUtf8("perfectnumber"));
        perfectnumber->setEnabled(false);
        perfectnumber->setFont(font);
        perfectnumber->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-width:0;\n"
"border-style:outset;\n"
"color:white"));
        splitter->addWidget(perfectnumber);
        greatnumber = new QLineEdit(splitter);
        greatnumber->setObjectName(QString::fromUtf8("greatnumber"));
        greatnumber->setEnabled(false);
        greatnumber->setFont(font);
        greatnumber->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-width:0;\n"
"border-style:outset;\n"
"color:white"));
        splitter->addWidget(greatnumber);
        goodnumber = new QLineEdit(splitter);
        goodnumber->setObjectName(QString::fromUtf8("goodnumber"));
        goodnumber->setEnabled(false);
        goodnumber->setFont(font);
        goodnumber->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-width:0;\n"
"border-style:outset;\n"
"color:white"));
        splitter->addWidget(goodnumber);
        badnumber = new QLineEdit(splitter);
        badnumber->setObjectName(QString::fromUtf8("badnumber"));
        badnumber->setEnabled(false);
        badnumber->setFont(font);
        badnumber->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-width:0;\n"
"border-style:outset;\n"
"color:white"));
        splitter->addWidget(badnumber);
        missnumber = new QLineEdit(splitter);
        missnumber->setObjectName(QString::fromUtf8("missnumber"));
        missnumber->setEnabled(false);
        missnumber->setFont(font);
        missnumber->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"border-width:0;\n"
"border-style:outset;\n"
"color:white"));
        splitter->addWidget(missnumber);

        retranslateUi(endgame);

        QMetaObject::connectSlotsByName(endgame);
    } // setupUi

    void retranslateUi(QDialog *endgame)
    {
        endgame->setWindowTitle(QCoreApplication::translate("endgame", "\346\270\270\346\210\217\347\273\223\347\256\227", nullptr));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class endgame: public Ui_endgame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENDGAME_H
