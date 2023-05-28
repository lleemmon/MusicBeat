#ifndef NOTELIST_H
#define NOTELIST_H
#include<deque>
#include"notes.h"

using namespace std;
class notelist
{
public:
    deque<Notes>ver;
    notelist();
    void add(int,int);//将音符添加到ver容器中
    int shichang;//歌曲时长
};

#endif // NOTELIST_H
