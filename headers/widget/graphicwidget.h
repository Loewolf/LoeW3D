#ifndef GRAPHICWIDGET_H
#define GRAPHICWIDGET_H

#include <QWidget>
#include <QPainter>


class GraphicWidget : public QWidget
{
    Q_OBJECT
public:
    explicit GraphicWidget(QWidget *parent = nullptr);
    void paint();

private:
    QPainter *qp;
protected:
    void paintEvent(QPaintEvent *event);
signals:

};

#endif // GRAPHICWIDGET_H
