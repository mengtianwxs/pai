#ifndef L2SCENE_H
#define L2SCENE_H

#include <QGraphicsSceneMouseEvent>
#include<QKeyEvent>
#include<QMouseEvent>
#include<QGraphicsScene>
#include<QDebug>
#include<QString>

class l2scene : public QGraphicsScene
{


protected:

    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void keyPressEvent(QKeyEvent* event);
};

#endif // L2SCENE_H
