#include <QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow pacman;
    //pacman;
    pacman.show();
    return a.exec();
}
