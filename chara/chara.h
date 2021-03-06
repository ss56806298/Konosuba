﻿#ifndef CHARA_H
#define CHARA_H

#include <QGraphicsItem>

class Chara : public QGraphicsItem
{
public:
    QString NAME;   //名
    int GENDER; //性别,1男2女0不明
    int PRO;    //职业
    int LEV;    //等级

    int HP;     //血量
    int MAX_HP; //最大血量
    int MP;     //蓝
    int MAX_MP; //最大蓝量
    int SPD;    //速度
    int STR;    //力量
    int ITL;    //智力
    int AGI;    //敏捷
    int LUK;    //幸运
    int PHY_DEF; //物理防御力
    int MAG_DEF; //魔法防御力
};

#endif // CHARA_H
