#ifndef BOSS_H
#define BOSS_H

#include <QGraphicsItem>
#include <QPixmap>

class GameController;

class Boss : public QGraphicsItem
{
public:
    enum Action {
        PhysicalAttackSingle,
        MagicAttackSingle,
        PhysicalAttackMultiple,
        MagicAttackMultiple,
        NoAction,
        Defense
    };

    Boss(GameController &controller);

    QRectF boundingRect() const;

    void paint(QPainter *painter, const QStyleOptionGraphicsItem *, QWidget *);
//    void setBossAction(Action action);

protected:
    void advance(int step);

private:
    GameController &controller;

    int hp;
    int speed;
    int physical_attack;
    int magic_attack;
    int physical_defense;
    int magic_defense;
    Action bossAction;
};

#endif // BOSS_H
