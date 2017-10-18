#include <QGraphicsScene>

#include "gamecontroller.h"
#include "boss.h"
#include "chara/kazuma.h"

GameController::GameController(QGraphicsScene &scene, QObject *parent) :
    QObject(parent),
    scene(scene)
{
    //30帧
    timer.start(1000/30);

    connect(&timer, &QTimer::timeout, &scene, &QGraphicsScene::advance);

    battleStart();
}

void GameController::battleStart(){
    boss = new Boss(*this);
    scene.addItem(boss);
    kazuma = new Kazuma(*this);
    scene.addItem(kazuma);
}


GameController::~GameController()
{
}
