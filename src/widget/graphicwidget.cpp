#include "graphicwidget.h"

GraphicWidget::GraphicWidget(QWidget *parent)
    : QWidget{parent}
{
    qp = new QPainter();
}
void GraphicWidget::paintEvent(QPaintEvent *event){
    qp->begin(this);
    qp->fillRect(0,0,width(),height(),Qt::CrossPattern);
    qp->end();
}
