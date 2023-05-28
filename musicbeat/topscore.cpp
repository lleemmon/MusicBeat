#include "topscore.h"
#include "ui_topscore.h"
#include<QPainter>
#include<fstream>

topscore::topscore(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::topscore)
{
    ui->setupUi(this);
    this->resize(1024,726);//调整窗口大小
    m_tQBg = new QPixmap(":/new/pumian/topscoreui");//让指针指向该路径对应的图片
    getgrade();
}

topscore::~topscore()
{
    delete ui;
    delete m_tQBg;
}

void topscore::on_pushButton_clicked()
{
    this->close();
    MainWindow *m = new MainWindow();
    m->show();//关闭自己打开主界面
}

void topscore::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.drawPixmap(0, 0, 1024, 726, *m_tQBg, 0, 0, 1024, 726);//画出背景图
}

void topscore::getgrade(){
    ifstream ifs;
    int kindofmusic = ui->comboBox->currentIndex()*3+ui->comboBox_2->currentIndex();//根据选择的歌曲为kindofmusic加上编号
    switch(kindofmusic){
        case 0:
            ifs.open("darksambaland_ez_top.txt",ios::in);
            break;
        case 1:
            ifs.open("darksambaland_nm_top.txt",ios::in);
            break;
        case 2:
            ifs.open("darksambaland_hd_top.txt",ios::in);
            break;
        case 3:
            ifs.open("StarofAndromeda_ez_top.txt",ios::in);
            break;
        case 4:
            ifs.open("StarofAndromeda_nm_top.txt",ios::in);
            break;
        case 5:
            ifs.open("StarofAndromeda_hd_top.txt",ios::in);
            break;
        case 6:
            ifs.open("ParadigmShift_ez_top.txt",ios::in);
            break;
        case 7:
            ifs.open("ParadigmShift_nm_top.txt",ios::in);
            break;
        case 8:
            ifs.open("ParadigmShift_hd_top.txt",ios::in);
            break;
        case 9:
        case 10:
        case 11:
            ifs.open("ParadigmShift1_ez_top.txt",ios::in);
            break;
    }//根据铺面编号打开排行榜文件
    ifs>>first>>second>>third;//获取保存的前三名成绩
    ifs.close();
    ui->FIRST->setText(QString::number(first,'f',2));//显示准确率
    ui->SECOND->setText(QString::number(second,'f',2));//显示准确率
    ui->THIRD->setText(QString::number(third,'f',2));//显示准确率
}

void topscore::on_comboBox_currentIndexChanged()
{
    getgrade();
}//当选中位置变化时更新对应的排行榜信息

void topscore::on_comboBox_2_currentIndexChanged()
{
    getgrade();
}//当选中位置变化时更新对应的的排行榜信息

void topscore::getnewscore(int _kindofmusic,float _grade){
    ifstream ifs;
    switch(_kindofmusic){
        case 0:
            ifs.open("darksambaland_ez_top.txt",ios::in);
            break;
        case 1:
            ifs.open("darksambaland_nm_top.txt",ios::in);
            break;
        case 2:
            ifs.open("darksambaland_hd_top.txt",ios::in);
            break;
        case 3:
            ifs.open("StarofAndromeda_ez_top.txt",ios::in);
            break;
        case 4:
            ifs.open("StarofAndromeda_nm_top.txt",ios::in);
            break;
        case 5:
            ifs.open("StarofAndromeda_hd_top.txt",ios::in);
            break;
        case 6:
            ifs.open("ParadigmShift_ez_top.txt",ios::in);
            break;
        case 7:
            ifs.open("ParadigmShift_nm_top.txt",ios::in);
            break;
        case 8:
            ifs.open("ParadigmShift_hd_top.txt",ios::in);
            break;
        case 9:
        case 10:
        case 11:
            ifs.open("ParadigmShift1_ez_top.txt",ios::in);
            break;
    }//根据铺面编号打开排行榜文件
    ifs>>first>>second>>third;//获取保存的前三名成绩
    ifs.close();
    if(_grade>=first){//如果成绩比第一大，新变一，一变二，二变三。
        third = second;
        second = first;
        first = _grade;
    }
    else if(_grade>=second){//如果成绩比第二大，新变二，二变三。
        third = second;
        second = _grade;
    }
    else if(_grade>third){//如果成绩比第三大，新变三。
        third = _grade;
    }
    ofstream ofs;
    switch(_kindofmusic){
        case 0:
            ofs.open("darksambaland_ez_top.txt",ios::out);
            break;
        case 1:
            ofs.open("darksambaland_nm_top.txt",ios::out);
            break;
        case 2:
            ofs.open("darksambaland_hd_top.txt",ios::out);
            break;
        case 3:
            ofs.open("StarofAndromeda_ez_top.txt",ios::out);
            break;
        case 4:
            ofs.open("StarofAndromeda_nm_top.txt",ios::out);
            break;
        case 5:
            ofs.open("StarofAndromeda_hd_top.txt",ios::out);
            break;
        case 6:
            ofs.open("ParadigmShift_ez_top.txt",ios::out);
            break;
        case 7:
            ofs.open("ParadigmShift_nm_top.txt",ios::out);
            break;
        case 8:
            ofs.open("ParadigmShift_hd_top.txt",ios::out);
            break;
        case 9:
        case 10:
        case 11:
            ifs.open("ParadigmShift1_ez_top.txt",ios::out);
            break;
    }//根据铺面编号打开排行榜文件
    ofs<<first<<" "<<second<<" "<<third<<endl;//将新的成绩读入到txt中
    ofs.close();//关闭文件
}
