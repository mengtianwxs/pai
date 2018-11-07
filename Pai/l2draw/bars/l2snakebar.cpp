#include "l2snakebar.h"

l2snakebar::l2snakebar(float width, float height, float upd, float dod)
{


    this->width=width;
    this->height=height;
    this->upd=upd;
    this->dod=dod;
    this->mid=height-upd-dod;
    this->cbd=l2utils::T_C(width*width,mid*mid);


   draw();

}


void l2snakebar::draw(){

   path.moveTo(0,0);
   path.lineTo(0,upd);
   path.lineTo(width,upd+mid);
   path.lineTo(width,height);


   this->setPath(path);
   //qDebug("this is draw fun");
}

//void l2snakebar::mousePressEvent(QGraphicsSceneMouseEvent *event){

//}

//void l2snakebar::keyPressEvent(QKeyEvent *event){

//}

