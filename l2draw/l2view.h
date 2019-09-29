#ifndef L2VIEW_H
#define L2VIEW_H

#include <QGraphicsView>
#include<QMouseEvent>



class l2view : public QGraphicsView
{
    Q_OBJECT
public:
    l2view(QWidget *parent);
    void mousePressEvent(QMouseEvent* event);

signals:
    void onclickview(QPoint p);

};

#endif // L2VIEW_H
