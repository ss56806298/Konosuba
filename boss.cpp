#include "boss.h"
#include "battle.h"
#include "ui_battle.h"

Boss::Boss(Battle &battle, Ui::Battle *ui) :
    ui(ui),
    hp(1000),
    speed(30),
    physical_attack(100),
    magic_attack(50),
    physical_defense(10),
    magic_defense(5)
{
}

//void Boss::paint()
//{
//    QPainter painter(ui->bossView);
//    QPixmap image;
////    painter->save(); //保存坐标系状态
//    image.load(":/images/boss_kfc");

//    int x = ui->bossView->pos().x();
//    int y = ui->bossView->pos().y();
//    painter.drawPixmap(x, y, image);

////    painter->restore(); //恢复以前的坐标系状态
//}
