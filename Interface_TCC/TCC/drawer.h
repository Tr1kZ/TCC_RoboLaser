#ifndef DRAWER_H
#define DRAWER_H
#include <QWidget>
#include <QPainter>
#include <QList>
#include <QPointF>
#include <QTransform>
#include <QtGlobal>

class Drawer : public QWidget
{
public:
    Drawer(QWidget *parent = 0);
    void setSegs(QList <QList<QPointF> > );

protected:
    void paintEvent(QPaintEvent *event);

private:
    QList <QList <QPointF>> Segments;
};

#endif // DRAWER_H
