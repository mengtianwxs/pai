#include "l2scene.h"



void l2scene::mousePressEvent(QGraphicsSceneMouseEvent *event){
    if(event->button()==Qt::LeftButton){
        qDebug()<<"this is scene click btn";
        qDebug()<<QString::number(event->pos().x())<<QString::number(event->pos().y());

    }
  //  qDebug()<<QString::number(event->scenePos().x())<<QString::number(event->scenePos().y());
    int mx=event->scenePos().x();
    int my=event->scenePos().y();
    qDebug()<<this->itemAt(mx,my);

}

void l2scene::keyPressEvent(QKeyEvent *event){


}
