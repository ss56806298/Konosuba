#include <QGraphicsView>

#include "mainwindow.h"
#include "gamecontroller.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    scene(new QGraphicsScene(this)),
    view(new QGraphicsView(scene, this)),
    game(new GameController(*scene, this))
{
    setFixedSize(1024, 768);

    view->setFixedSize(1024, 768);

    setCentralWidget(view);

    scene->setSceneRect(0, 0, 1024, 768);


}

MainWindow::~MainWindow()
{
}
