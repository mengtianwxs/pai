#ifndef L2SNAKEBAR_H
#define L2SNAKEBAR_H
#include <l2draw/core/l2bar.h>


class l2snakebar : public l2bar
{
public:

    explicit l2snakebar(float width,float height,float upd,float dod);
//    void mousePressEvent(QGraphicsSceneMouseEvent *event);
//    void keyPressEvent(QKeyEvent *event);
    void draw();

private:
    float upd;//上边距 up distance
    float dod;//下边距 down distance
    float mid;//中距
    float bod;//border distance 边距
    float width;
    float height;
    float cbd;





    

};

#endif // L2SNAKEBAR_H
