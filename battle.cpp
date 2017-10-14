#include "battle.h"
#include "boss.h"
#include "team.h"
#include "ui_battle.h"

//Battle::Battle(QGraphicsScene &scene) :
Battle::Battle(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Battle),
    boss(new Boss(*this, ui)),
    team(new Team())
{
    ui->setupUi(this);
//    scene.addItem(boss);
}

Battle::~Battle()
{
    delete ui;
}

//绘制
void Battle::paintEvent(QPaintEvent *) {
    //BOSS
    QPainter painter(this);
    int boss_x = ui->BossWidget->pos().x();
    int boss_y = ui->BossWidget->pos().y();

    QPixmap image_boss;
    image_boss.load(":/images/boss_kfc");

    painter.drawPixmap(boss_x, boss_y, image_boss);

    //团队成员相关

}
