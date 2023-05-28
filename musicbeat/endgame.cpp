#include "endgame.h"
#include "ui_endgame.h"
#include <QPainter>

endgame::endgame(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::endgame)
{
    ui->setupUi(this);
    this->resize(1024,726);//设定窗口大小
    m_cQBg = new QPixmap(":/new/pumian/endgameui");//让指针指向该路径的图片
}

endgame::~endgame()
{
    delete ui;
    delete m_cQBg;
}

void endgame::on_pushButton_clicked()
{
    this->close();
    MainWindow *m = new MainWindow();
    m->show();//关闭当前窗口打开主窗口
}

void endgame::on_pushButton_2_clicked()
{
    this->close();//关闭当前窗口
    Gamecenter *g = new Gamecenter(kindofmusic);//将歌曲编号传入游戏中心
    g->nllr.add(kindofmusic,0);//获取对应编号所对应的铺面文件的所有左右音符
    g->nlud.add(kindofmusic,1);//获取对应编号所对应的铺面文件的所有上下音符
    g->show();//打开游戏中心
}

void endgame::on_pushButton_3_clicked()
{
    this->close();
    choosemusic *c = new choosemusic();
    c->show();//关闭当前窗口打开选曲界面
}

void endgame::getgrade(float _acc,int _maxcombo,int _perfect,int _great,int _good,int _bad,int _miss){
    ui->ACC->setText(QString::number(_acc,'f',2));
    ui->Maxcombo->setText(QString::number(_maxcombo));
    ui->perfectnumber->setText(QString::number(_perfect));
    ui->greatnumber->setText(QString::number(_great));
    ui->goodnumber->setText(QString::number(_good));
    ui->badnumber->setText(QString::number(_bad));
    ui->missnumber->setText(QString::number(_miss));//将对应信息全部输出到对应控件中
}

void endgame::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.drawPixmap(0, 0, 1024, 726, *m_cQBg, 0, 0, 1024, 726);//画出背景图
}
