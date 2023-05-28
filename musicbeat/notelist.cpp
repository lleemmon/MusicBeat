#include "notelist.h"
#include"updatagame.h"
#include <fstream>
#include <QMessageBox>

notelist::notelist()
{

}

void notelist::add(int a,int flag){//flag为0代表添加的是左右音符，flag为1代表添加的是上下音符
    ifstream ifs;//根据a的值打开铺面文件进行读入
    switch(a){
        case 0:
            ifs.open("darksambaland_4k_ez.txt",ios::in);
            break;
        case 1:
            ifs.open("darksambaland_4k_nm.txt",ios::in);
            break;
        case 2:
            ifs.open("darksambaland_4k_hd.txt",ios::in);
            break;
        case 3:
            ifs.open("StarofAndromeda_4k_ez.txt",ios::in);
            break;
        case 4:
            ifs.open("StarofAndromeda_4k_nm.txt",ios::in);
            break;
        case 5:
            ifs.open("StarofAndromeda_4k_hd.txt",ios::in);
            break;
        case 6:
            ifs.open("ParadigmShift_4k_ez.txt",ios::in);
            break;
        case 7:
            ifs.open("ParadigmShift_4k_nm.txt",ios::in);
            break;
        case 8:
            ifs.open("ParadigmShift_4k_hd.txt",ios::in);
            break;
        case 9:
        case 10:
        case 11:
            ifs.open("ParadigmShift1_4k_ez.txt",ios::in);
            break;
    }
    if(!ifs.is_open()){
        return;
    }//读取失败则返回
    ifs>>shichang;//获取该歌曲的时长
    updatagame u;//定义游戏设置类变量
    while(true){
        int temp_leixing,temp_xindex;//前者是音符类型，后者是音符的横坐标
        if(ifs>>temp_leixing>>temp_xindex){
            if((!flag)&&(temp_leixing/2==1)){//如果是左右音符，读入到容器中
                Notes *note = new Notes(temp_leixing,(temp_xindex+u.offest_value)*u.KeySpeed_value);//offest为偏移，KeySpeed为音符流速
                ver.push_back(*note);//将音符加入到容器中
            }
            if(flag&&(temp_leixing/2==0)){//如果是上下音符，读入到容器中
                Notes *note = new Notes(temp_leixing,(temp_xindex+u.offest_value)*u.KeySpeed_value);//offest为偏移，KeySpeed为音符流速
                ver.push_back(*note);//将音符加入到容器中
            }
        }
        else{
            break;
        }
    }
    ifs.close();
}
