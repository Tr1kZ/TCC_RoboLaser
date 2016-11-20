#include "drawer.h"


Drawer::Drawer(QWidget *parent) : QWidget(parent)
{

}
void Drawer::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.fillRect(QRectF(0, 0, width(), height()), QBrush(QColor(200, 200, 200), Qt::CrossPattern));
    if(!Segments.isEmpty())
    {
        painter.setTransform(QTransform(1,0,0,0,-1,0,0,0,1), false);

        double max_x = Segments.at(0).at(0).x(), min_x = Segments.at(0).at(0).x(), max_y = Segments.at(0).at(0).y(), min_y = Segments.at(0).at(0).y();
        for(int i = 0 ; i < Segments.size() ; i++)
        {
            for(int j = 0 ; j < Segments.at(i).size() ; j++)
            {
                max_x = qMax(max_x, Segments.at(i).at(j).x());
                min_x = qMin(min_x, Segments.at(i).at(j).x());
                max_y = qMax(max_y, Segments.at(i).at(j).y());
                min_y = qMin(min_y, Segments.at(i).at(j).y());
            }
        }

        float sc_h = (float)(width()-2)/(max_x-min_x); //-2 para tirar um pixel de um lado e do outro
        float sc_v = (float)(height()-2)/(max_y-min_y); //ou uma acima e um abaixo
        float sc_f = qMin(sc_v,sc_h);

        painter.translate(1-min_x*sc_f,1-min_y*sc_f-height());

        for(int i = 0 ; i < Segments.size() ; i++)
        {
            for(int j = 0 ; j < Segments.at(i).size() ; j++)
            {
                if(j!=0)
                {
                    painter.drawLine(Segments.at(i).at(j-1).x()*sc_f,Segments.at(i).at(j-1).y()*sc_f, Segments.at(i).at(j).x()*sc_f,Segments.at(i).at(j).y()*sc_f);
                }
            }
        }
    }
}

void Drawer::setSegs(QList<QList<QPointF> > Segs)
{
    Segments = Segs;
}
