#ifndef BATTLE_H
#define BATTLE_H

#include <QWidget>

#include <QObject>
#include <QGraphicsScene>
#include <QPainter>
#include <QPaintEvent>

#include "member_list.h"

namespace Ui {
class Battle;
}

class Boss;

class Team;

class Member;

class Battle : public QWidget
{
    Q_OBJECT
public:
    Battle(QWidget *parent = 0);
    ~Battle();

protected:
    void paintEvent(QPaintEvent *);

private:
    Ui::Battle *ui;

//    QGraphicsScene &scene;

    Boss *boss;

    Team *team;
};

#endif // BATTLE_H
