#include "mainwindow.h"
#include "battle.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    MainWindow w;
//    w.show();
    Battle b;
    b.show();

    return a.exec();
}
