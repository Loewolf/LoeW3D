#include "mainwindow.h"

#include <QDebug>
#include <QApplication>

int main(int argc, char *argv[])
{
    QDebug () << "hello";

    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
