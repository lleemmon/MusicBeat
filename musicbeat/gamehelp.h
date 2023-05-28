#ifndef GAMEHELP_H
#define GAMEHELP_H

#include <QDialog>
#include"mainwindow.h"
namespace Ui {
class GameHelp;
}

class GameHelp : public QDialog
{
    Q_OBJECT

public:
    explicit GameHelp(QWidget *parent = nullptr);
    ~GameHelp();
protected:
    virtual void paintEvent(QPaintEvent *event);//有关绘画事件
private slots:
    void on_pushButton_clicked();//回到主界面
private:
    Ui::GameHelp *ui;
    QPixmap *m_gQBg;//背景图
};

#endif // GAMEHELP_H
