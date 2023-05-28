#ifndef NOTES_H
#define NOTES_H

#include<QPoint>
#include<QPixmap>
using namespace  std;
class Notes
{
public:
    Notes(int,int);//三参构造函数，分别是音符类型，音符横坐标
    QPoint pt;//音符的坐标
    int leixing;//0代表上，1代表下，2代表左，3代表右
    QPixmap imgVec;//每个音符的图片
};

#endif // NOTES_H

