#ifndef L2BAR_H
#define L2BAR_H
#include <l2draw/l2headers.h>

class l2bar : public QGraphicsPathItem
{
public:
    l2bar();
    QPen pen;
    QPainterPath path;

    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void keyPressEvent(QKeyEvent *event);

};

#endif // L2BAR_H
