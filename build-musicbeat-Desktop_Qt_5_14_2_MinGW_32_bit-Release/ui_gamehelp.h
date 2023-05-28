/********************************************************************************
** Form generated from reading UI file 'gamehelp.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEHELP_H
#define UI_GAMEHELP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_GameHelp
{
public:
    QPushButton *pushButton;

    void setupUi(QDialog *GameHelp)
    {
        if (GameHelp->objectName().isEmpty())
            GameHelp->setObjectName(QString::fromUtf8("GameHelp"));
        GameHelp->resize(842, 595);
        pushButton = new QPushButton(GameHelp);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(760, 0, 81, 81));
        pushButton->setStyleSheet(QString::fromUtf8("image: url(:/new/anniu/gback);"));
        pushButton->setFlat(true);

        retranslateUi(GameHelp);

        QMetaObject::connectSlotsByName(GameHelp);
    } // setupUi

    void retranslateUi(QDialog *GameHelp)
    {
        GameHelp->setWindowTitle(QCoreApplication::translate("GameHelp", "\346\270\270\346\210\217\345\270\256\345\212\251", nullptr));
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class GameHelp: public Ui_GameHelp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEHELP_H
