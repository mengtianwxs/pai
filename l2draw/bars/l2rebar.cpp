#include "l2rebar.h"

l2rebar::l2rebar(float width,float height,float upd,float dod,float bdd)
{
    this->width=width;
    this->height=height;
    this->upd=upd;
    this->dod=dod;
    this->bdd=bdd;
    this->mid=height-upd-dod;
    this->cbd=l2utils::T_C(mid*mid,width*width);
    draw();
    qDebug()<<"this is le click draw";
}

void l2rebar::draw(){

    path.moveTo(0,height);
    path.lineTo(bdd,height);
    path.lineTo(bdd,height-dod);
    path.lineTo(bdd+width,height-dod-mid);
    path.lineTo(bdd+width,0);
    this->setPath(path);
}
