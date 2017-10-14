#ifndef MEMBER_LIST_H
#define MEMBER_LIST_H

#include <QString>

typedef struct member_info{
    QString NAME;   //名
    int GENDER; //性别,1男2女0不明
    int PRO;    //职业,0无职业,1为大祭司
    int LEV;    //等级

    int HP;     //血量
    int MP;     //蓝
    int SPD;    //速度
    int STR;    //力量
    int INT;    //智力
    int AGI;    //敏捷
    int LUK;    //幸运
    int PHY_DEF; //物理防御力
    int MAG_DEF; //魔法防御力
}mem_inf;

const int max_team_member = 2;


const mem_inf default_member_list[max_team_member] = {
    {
        "佐藤和真",   //名
        1, //性别,1男2女0不明
        0,    //职业
        1,    //等级
        300,     //血量
        100,     //蓝
        3,    //速度
        5,    //力量
        5,   //智力
        5,    //敏捷
        9,    //幸运
        10, //物理防御力
        10 //魔法防御力
    },
    {
        "阿库娅",   //名
        2, //性别,1男2女0不明
        1,    //职业
        1,    //等级
        200,     //血量
        300,     //蓝
        5,    //速度
        3,    //力量
        0,   //智力
        6,    //敏捷
        2,    //幸运
        20, //物理防御力
        50 //魔法防御力
    }
};

#endif // MEMBER_LIST_H
