#ifndef L2BAR_H
#define L2BAR_H


#include <l2draw/l2headers.h>
#include<l2draw/methods/l2utils.h>
#include<QString>



///////////////////////////////
/// \brief The l2bar class
///此排的类库单位按毫米(mm)设计
///
/// ///////////////////////////

class l2bar : public QGraphicsPathItem
{
public:
    l2bar();
    QPen pen;
    QPainterPath path;

    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void keyPressEvent(QKeyEvent *event);
    void draw();

    //bar thickness 排的厚度默认按10mm
    const float bth=10;
    const float bth8=8;
    const float bth6=6;
    const float bth5=5;
    const float bth4=4;
    const float bth3=3;

};

#endif // L2BAR_H
