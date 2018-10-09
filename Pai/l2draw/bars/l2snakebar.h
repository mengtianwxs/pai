#ifndef L2SNAKEBAR_H
#define L2SNAKEBAR_H
#include <l2draw/core/l2bar.h>
#include<l2draw/methods/l2utils.h>
#include<QString>

class l2snakebar : public l2bar
{
public:

    void draw();
    explicit l2snakebar(float width,float height,float uHeight,float dHeight);
//    void mousePressEvent(QGraphicsSceneMouseEvent *event);
//    void keyPressEvent(QKeyEvent *event);

private:
    float upd;//上边距 up distance
    float dod;//下边距 down distance
    float mid;//中距
    float cend; //Centrifugal distance 离心距
    float bord;//border distance 边距
    float ins1;
    float ins2;

    float edgeC;

    float w;
    float h;//height
    float hu;// height up
    float hd;// height down
    float hm; // height middle



    

};

#endif // L2SNAKEBAR_H
