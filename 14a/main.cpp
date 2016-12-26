#include "mainwindow.h"
#include <QApplication>
#include <QString>
#include <QTextEdit>
//#include <string.h>
#include<QtMultimedia/QSound>

int main(int argc, char *argv[])
{//QSound player;
    QSound *bell= new QSound("path");
    QSound::play("d:\\work1\\Beast and the Harlot.wav");
    QApplication a(argc, argv);
    MainWindow w;

    w.show();

    return a.exec();

}
