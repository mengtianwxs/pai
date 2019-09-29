#ifndef L2MANAGER_H
#define L2MANAGER_H

#include <QWidget>
#include<QGraphicsScene>



class l2manager
{
public:
    l2manager();
    QGraphicsScene* l2scene;

    QGraphicsScene* method_initViewAndBackScene(QWidget *widget);
    QGraphicsItem* method_addItem(QGraphicsItem* item);
};

#endif // L2MANAGER_H
