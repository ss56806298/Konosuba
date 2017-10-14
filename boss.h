#ifndef BOSS_H
#define BOSS_H

#include <QGraphicsItem>
#include <QPixmap>

namespace Ui {
class Battle;
}

class Battle;

class Boss
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

    Boss(Battle &battle, Ui::Battle *ui);

//    void setBossAction(Action action);

private:
    Ui::Battle *ui;

    int hp;
    int speed;
    int physical_attack;
    int magic_attack;
    int physical_defense;
    int magic_defense;
    Action bossAction;
};

#endif // BOSS_H
