#include "mainwindow.h"
#include "graphicwidget.h"

#include <QDebug>
#include <QApplication>
#include <QGraphicsWidget>

int main(int argc, char *argv[])
{
    qDebug ( ) << " Hello, " << " this is debug output ";

    QApplication a(argc, argv);
    MainWindow *w = new MainWindow();
    w->show();
    GraphicWidget *gw = new GraphicWidget(w);
    gw->resize(800,600);
    gw->show();
    return a.exec();
}
