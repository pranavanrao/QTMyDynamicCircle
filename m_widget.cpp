#include "m_widget.h"
#include "ui_m_widget.h"
#include "mywidget.h"

M_Widget::M_Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::M_Widget), m_x(0), m_y(0)
{
    ui->setupUi(this);
    m_x = {0};
    m_y = {0};
}

M_Widget::~M_Widget()
{
    delete ui;
}

void M_Widget::mousePressEvent(QMouseEvent *event)
{
    m_x = event->x();
    m_y = event->y();
    MyWidget *wid = new MyWidget(this);
    wid->setGeometry(m_x, m_y, 25, 25);
    wid->update();
    wid->show();
}

void M_Widget::mouseReleaseEvent(QMouseEvent *event)
{
    qDebug() << "Mouse relase event happend" << event->pos();
}
