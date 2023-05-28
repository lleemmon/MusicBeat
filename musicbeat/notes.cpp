#include "notes.h"

Notes::Notes(int _leixing,int _x){
    pt.setX(_x);//为音符设定横坐标
    leixing = _leixing;
    QString imgname;
    if(leixing == 0){
        imgname = ":new/prefix1/note_up";
    }//配上朝上图标
    else if(leixing == 1){
        imgname = ":new/prefix1/note_down";
    }//配上朝下图标
    else if(leixing == 2){
        imgname = ":new/prefix1/note_left";
    }//配上朝左图标
    else{
        imgname = ":new/prefix1/note_right";
    }//配上朝右图标
    imgVec = QPixmap(imgname);
}
