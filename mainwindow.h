﻿#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QGraphicsScene>
#include <QGraphicsView>

class Battle;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
//    void initScene();
//    void initSceneBackgroud();

    QGraphicsScene *scene;
    QGraphicsView *view;

    Battle *battle;

    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
