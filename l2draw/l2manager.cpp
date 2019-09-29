#include "l2manager.h"
#include "l2view.h"

l2manager::l2manager()
{

}

QGraphicsScene *l2manager::method_initViewAndBackScene(QWidget *widget)
{

    l2view* view=new l2view(widget);
    QGraphicsScene* scene=new QGraphicsScene();
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setRenderHint(QPainter::Antialiasing);
    view->setScene(scene);
    l2scene=scene;

    return scene;

}

QGraphicsItem *l2manager::method_addItem(QGraphicsItem *item)
{
    if(l2scene!=NULL){
        l2scene->addItem(item);
        return item;
    }
    return NULL;
}


