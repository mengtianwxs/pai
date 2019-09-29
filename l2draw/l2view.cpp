#include "l2view.h"

l2view::l2view(QWidget *parent):QGraphicsView (parent)
{

}

void l2view::mousePressEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton){
        QPoint pf=event->pos();
        emit onclickview(pf);
    }

    QGraphicsView::mousePressEvent(event);

}
