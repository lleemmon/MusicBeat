#include "choosemusic.h"
#include "ui_choosemusic.h"
#include <QPainter>

choosemusic::choosemusic(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::choosemusic)
{
    ui->setupUi(this);
    this->resize(512,364);//设定窗口大小
    m_cQBg = new QPixmap(":/new/pumian/choosemusicui");//让指针指向该路径的图片
    displaylevel();//暂时默认的第一首歌曲简单难度的排行榜
}

choosemusic::~choosemusic()
{
    delete ui;
    delete m_cQBg;
}

/*
    确认选择的谱面并开始对应铺面的游戏
*/

void choosemusic::on_pushButton_5_clicked()
{
    int kindofmusic=ui->comboBox->currentIndex()*3+ui->comboBox_2->currentIndex();//根据选择的歌曲为kindofmusic加上编号
    this->close();//关闭当前窗口
    Gamecenter *g = new Gamecenter(kindofmusic);//将歌曲编号传入游戏中心
    g->nllr.add(kindofmusic,0);//获取对应编号所对应的铺面文件的所有左右音符
    g->nlud.add(kindofmusic,1);//获取对应编号所对应的铺面文件的所有上下音符
    g->show();//打开游戏中心窗口
}

/*
    关闭当前页面打开游戏主界面
*/

void choosemusic::on_pushButton_2_clicked()
{
    this->close();
    MainWindow *m = new MainWindow();
    m->show();
}

void choosemusic::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.drawPixmap(0, 0, 512, 364, *m_cQBg, 0, 0, 512, 364);//画出背景图
}

/*
    当前选取的歌曲发生变化时，更新歌曲难度
*/

void choosemusic::on_comboBox_currentIndexChanged()
{
    displaylevel();
}

/*
    当前选取的难度发生变化时，更新歌曲难度
*/

void choosemusic::on_comboBox_2_currentIndexChanged()
{
    displaylevel();
}

/*
    展示对应谱面的歌曲等级
*/

void choosemusic::displaylevel(){
    int kindofmusic=ui->comboBox->currentIndex()*3+ui->comboBox_2->currentIndex();
    switch(kindofmusic){
        case 0:
            kindofmusic = 3;
            break;
        case 1:
            kindofmusic = 5;
            break;
        case 2:
            kindofmusic = 8;
            break;
        case 3:
            kindofmusic = 4;
            break;
        case 4:
            kindofmusic = 6;
            break;
        case 5:
            kindofmusic = 9;
            break;
        case 6:
            kindofmusic = 5;
            break;
        case 7:
            kindofmusic = 7;
            break;
        case 8:
            kindofmusic = 10;
            break;
        case 9:
        case 10:
        case 11:
            kindofmusic = 6;
            break;
    }//获取歌曲等级
    if(kindofmusic<=3){
        ui->lineEdit->setStyleSheet("color:lime;background:transparent;border-width:0;border-style:outset");
    }//显示绿色的等级
    else if(kindofmusic<=6){
        ui->lineEdit->setStyleSheet("color:yellow;background:transparent;border-width:0;border-style:outset");
    }//显示黄色的等级
    else if(kindofmusic<=9){
        ui->lineEdit->setStyleSheet("color:tomato;background:transparent;border-width:0;border-style:outset");
    }//显示红色的等级
    else {
        ui->lineEdit->setStyleSheet("color:orangered;background:transparent;border-width:0;border-style:outset");
    }//显示深红色的等级
    ui->lineEdit->setText(QString::number(kindofmusic));//显示歌曲等级
}
