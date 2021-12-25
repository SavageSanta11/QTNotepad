#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv); //creates application object
    MainWindow w;
    w.show(); //display object on screen
    return a.exec(); //puts object in event handling oop
}
