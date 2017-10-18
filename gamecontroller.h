#ifndef GAMECONTROLLER_H
#define GAMECONTROLLER_H

#include <QOBject>
#include <QTimer>

class QGraphicsScene;

class Kazuma;
class Boss;

class GameController : public QObject
{
    Q_OBJECT
public:
    GameController(QGraphicsScene &scene, QObject *parent = 0);
    ~GameController();

    void battleStart();

public slots:

private:
    QTimer timer;
    QGraphicsScene &scene;

    Boss *boss;
    Kazuma *kazuma;
};

#endif // GAMECONTROLLER_H
