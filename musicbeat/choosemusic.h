#ifndef CHOOSEMUSIC_H
#define CHOOSEMUSIC_H

#include <QDialog>
#include"gamecenter.h"
#include"mainwindow.h"
namespace Ui {
class choosemusic;
}

class choosemusic : public QDialog
{
    Q_OBJECT

public:
    explicit choosemusic(QWidget *parent = nullptr);
    ~choosemusic();
protected:
     virtual void paintEvent(QPaintEvent *event);//绘画事件
private slots:
    void on_pushButton_5_clicked();//确认歌曲

    void on_pushButton_2_clicked();//返回主界面

    void on_comboBox_currentIndexChanged();

    void on_comboBox_2_currentIndexChanged();

    void displaylevel();//显示歌曲等级
private:
    Ui::choosemusic *ui;
    QPixmap *m_cQBg;//背景图
};

#endif // CHOOSEMUSIC_H
