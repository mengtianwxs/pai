#include "l2bar.h"

l2bar::l2bar()
{
   pen=QPen();
   pen.setWidth(8);
   pen.setColor(QColor(255,0,0));



   this->setFlags(QGraphicsItem::ItemIsSelectable|QGraphicsItem::ItemIsMovable);
   this->setPen(pen);



}

void l2bar::mousePressEvent(QGraphicsSceneMouseEvent *event)
{

}

void l2bar::keyPressEvent(QKeyEvent *event)
{

}


