#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>
#include <QDebug>
#include <QMouseEvent>
#include <QPaintEvent>
#include <QPainter>

class MyWidget : public QWidget
{
    Q_OBJECT
public:
    explicit MyWidget(QWidget *parent = nullptr);

    virtual void paintEvent(QPaintEvent *event) override;

signals:
};

#endif // MYWIDGET_H
