#include <QPainter>
#include <QObject>

#include "constants.h"

#include "gamecontroller.h"

#include "kazuma.h"

Kazuma::Kazuma(GameController &controller) :
    NAME(QObject::tr("Sato Kazuma")),
    GENDER(1),
    PRO(0),
    LEV(1),
    HP(300),
    MAX_HP(300),
    MP(100),
    MAX_MP(100),
    SPD(3),
    STR(5),
    ITL(5),
    AGI(5),
    LUK(9),
    PHY_DEF(10),
    MAG_DEF(10)
{

}

void Kazuma::advance(int step)
{
    if (!step) {
        return;
    }
}

QRectF Kazuma::boundingRect() const
{
    return QRectF(0,0,0,0);
}

void Kazuma::paint(QPainter *painter, const QStyleOptionGraphicsItem *, QWidget *){
    painter->save();
    //血槽
    painter->setBrush(QBrush(Qt::green));
    painter->drawRect(chara_1_tl_x, chara_1_tl_y, hp_slot_width * HP / MAX_HP, hp_slot_height);

    QFont font;
    font.setFamily("Microsoft YaHei");
    font.setPointSize(8);
    painter->setFont(font);
    painter->drawText(chara_1_tl_x, chara_1_tl_y - 2, NAME);

    painter->restore();
}
