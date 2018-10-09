#include "l2snakebar.h"

l2snakebar::l2snakebar(float width, float height, float uHeight, float dHeight)
{


 this->w=width;
 this->h=height;
 this->hu=uHeight;
 this->hd=dHeight;
 this->hm=h-hu-hd;
 this->edgeC=l2utils::T_C(w*w,hm*hm);


 draw();
}


void l2snakebar::draw(){

   path.moveTo(0,0);
   path.lineTo(0,hu);
   path.lineTo(w,hu+hm);
   path.lineTo(w,h);


   this->setPath(path);
   qDebug("this is draw fun");
}

//void l2snakebar::mousePressEvent(QGraphicsSceneMouseEvent *event){

//}

//void l2snakebar::keyPressEvent(QKeyEvent *event){

//}

