#ifndef ENDGAME_H
#define ENDGAME_H

#include <QDialog>
#include"choosemusic.h"
#include"gamecenter.h"
namespace Ui {
class endgame;
}

class endgame : public QDialog
{
    Q_OBJECT

public:
    explicit endgame(QWidget *parent = nullptr);
    void getgrade(float,int,int,int,int,int,int);//获取游玩结果
    int kindofmusic;//获取歌曲编号用于重新游戏
    ~endgame();
protected:
     virtual void paintEvent(QPaintEvent *event);//绘画事件
private slots:
    void on_pushButton_clicked();//返回主界面

    void on_pushButton_2_clicked();//重新本次游戏

    void on_pushButton_3_clicked();//返回选歌界面

private:
    Ui::endgame *ui;
    QPixmap *m_cQBg;//背景图
};

#endif // ENDGAME_H
