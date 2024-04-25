#ifndef M_WIDGET_H
#define M_WIDGET_H

#include <QWidget>
#include <QDebug>
#include <QMouseEvent>
#include <QPaintEvent>
#include <QPainter>

QT_BEGIN_NAMESPACE
namespace Ui {
class M_Widget;
}
QT_END_NAMESPACE

class M_Widget : public QWidget
{
    Q_OBJECT

public:
    M_Widget(QWidget *parent = nullptr);
    ~M_Widget();

    virtual void mousePressEvent(QMouseEvent *event) override;
    virtual void mouseReleaseEvent(QMouseEvent *event) override;

private:
    Ui::M_Widget *ui;
    int m_x;
    int m_y;
};
#endif // M_WIDGET_H
