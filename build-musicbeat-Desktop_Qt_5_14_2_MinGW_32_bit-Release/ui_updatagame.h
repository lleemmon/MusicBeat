/********************************************************************************
** Form generated from reading UI file 'updatagame.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATAGAME_H
#define UI_UPDATAGAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_updatagame
{
public:
    QSlider *GameVolume;
    QSlider *KeyVolume;
    QSlider *offest;
    QSlider *KeySpeed;
    QSpinBox *GameVolume1;
    QSpinBox *KeyVolume1;
    QSpinBox *offest1;
    QSpinBox *KeySpeed1;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;

    void setupUi(QDialog *updatagame)
    {
        if (updatagame->objectName().isEmpty())
            updatagame->setObjectName(QString::fromUtf8("updatagame"));
        updatagame->resize(1024, 683);
        GameVolume = new QSlider(updatagame);
        GameVolume->setObjectName(QString::fromUtf8("GameVolume"));
        GameVolume->setGeometry(QRect(380, 180, 160, 19));
        GameVolume->setMaximum(100);
        GameVolume->setValue(50);
        GameVolume->setOrientation(Qt::Horizontal);
        KeyVolume = new QSlider(updatagame);
        KeyVolume->setObjectName(QString::fromUtf8("KeyVolume"));
        KeyVolume->setGeometry(QRect(380, 270, 160, 19));
        KeyVolume->setMaximum(100);
        KeyVolume->setValue(50);
        KeyVolume->setOrientation(Qt::Horizontal);
        offest = new QSlider(updatagame);
        offest->setObjectName(QString::fromUtf8("offest"));
        offest->setGeometry(QRect(380, 360, 160, 19));
        offest->setMinimum(-100);
        offest->setMaximum(100);
        offest->setOrientation(Qt::Horizontal);
        KeySpeed = new QSlider(updatagame);
        KeySpeed->setObjectName(QString::fromUtf8("KeySpeed"));
        KeySpeed->setGeometry(QRect(380, 450, 160, 19));
        KeySpeed->setMinimum(1);
        KeySpeed->setMaximum(8);
        KeySpeed->setValue(5);
        KeySpeed->setOrientation(Qt::Horizontal);
        GameVolume1 = new QSpinBox(updatagame);
        GameVolume1->setObjectName(QString::fromUtf8("GameVolume1"));
        GameVolume1->setGeometry(QRect(590, 180, 42, 22));
        GameVolume1->setMaximum(100);
        KeyVolume1 = new QSpinBox(updatagame);
        KeyVolume1->setObjectName(QString::fromUtf8("KeyVolume1"));
        KeyVolume1->setGeometry(QRect(590, 270, 42, 22));
        KeyVolume1->setMaximum(100);
        offest1 = new QSpinBox(updatagame);
        offest1->setObjectName(QString::fromUtf8("offest1"));
        offest1->setGeometry(QRect(590, 360, 42, 22));
        offest1->setMinimum(-100);
        offest1->setMaximum(100);
        KeySpeed1 = new QSpinBox(updatagame);
        KeySpeed1->setObjectName(QString::fromUtf8("KeySpeed1"));
        KeySpeed1->setGeometry(QRect(590, 450, 42, 22));
        KeySpeed1->setMinimum(1);
        KeySpeed1->setMaximum(8);
        pushButton = new QPushButton(updatagame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(930, 0, 91, 91));
        pushButton->setStyleSheet(QString::fromUtf8("image: url(:/new/anniu/gback);"));
        pushButton->setFlat(true);
        pushButton_3 = new QPushButton(updatagame);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(930, 200, 91, 91));
        pushButton_3->setStyleSheet(QString::fromUtf8("image: url(:/new/anniu/greply);"));
        pushButton_3->setFlat(true);
        pushButton_2 = new QPushButton(updatagame);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(930, 100, 91, 91));
        pushButton_2->setStyleSheet(QString::fromUtf8("image: url(:/new/anniu/usave);"));
        pushButton_2->setAutoDefault(true);
        pushButton_2->setFlat(true);

        retranslateUi(updatagame);

        pushButton_2->setDefault(false);


        QMetaObject::connectSlotsByName(updatagame);
    } // setupUi

    void retranslateUi(QDialog *updatagame)
    {
        updatagame->setWindowTitle(QCoreApplication::translate("updatagame", "\346\270\270\346\210\217\350\256\276\347\275\256", nullptr));
        pushButton->setText(QString());
        pushButton_3->setText(QString());
        pushButton_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class updatagame: public Ui_updatagame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATAGAME_H
