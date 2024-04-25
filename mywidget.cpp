#include "mywidget.h"

MyWidget::MyWidget(QWidget *parent)
    : QWidget{parent}
{}

void MyWidget::paintEvent(QPaintEvent *event)
{
    QPainter paint(this);
    paint.setPen(Qt::blue);
    paint.setBrush(Qt::red);

    paint.drawEllipse(0,0,25,25);
}
