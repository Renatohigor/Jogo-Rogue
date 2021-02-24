#include "mainwindow.h"
#include <QApplication>
#include "menu.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Menu s;
    s.show();
    //MainWindow w;
    //w.show();

    return a.exec();
}
