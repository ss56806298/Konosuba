#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class GameController;

class QGraphicsScene;
class QGraphicsView;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
//    void initScene();
//    void initSceneBackgroud();

    QGraphicsScene *scene;
    QGraphicsView *view;

    GameController *game;

};

#endif // MAINWINDOW_H
