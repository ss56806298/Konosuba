#include <QPainter>

#include "boss.h"
#include "gamecontroller.h"
#include "constants.h"

Boss::Boss(GameController &controller) :
    hp(1000),
    speed(30),
    physical_attack(100),
    magic_attack(50),
    physical_defense(10),
    magic_defense(5),
    controller(controller)
{

}

void Boss::advance(int step)
{
    if (!step) {
        return;
    }
}

void Boss::paint(QPainter *painter, const QStyleOptionGraphicsItem *, QWidget *)
{
    painter->save();
    QPixmap image_boss;
    image_boss.load(":/images/boss_kfc");

    painter->drawPixmap(p_boss_tl_x, p_boss_tl_y, image_boss);

    painter->restore();
}

QRectF Boss::boundingRect() const
{
    return QRectF(0,0,0,0);
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
