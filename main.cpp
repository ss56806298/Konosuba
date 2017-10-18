#include "mainwindow.h"

#include <QApplication>
#include <QTranslator>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //加载翻译
    QTranslator translator;
    bool b =false;
    b = translator.load("konosuba_zh.qm");
    a.installTranslator(&translator);

    MainWindow w;
    w.show();


    return a.exec();
}
