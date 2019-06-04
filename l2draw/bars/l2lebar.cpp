#include "l2lebar.h"

l2lebar::l2lebar(float width,float height,float upd,float dod,float bdd)
{
    this->width=width;
    this->height=height;
    this->upd=upd;
    this->dod=dod;
    this->bdd=bdd;
    this->mid=height-upd-dod;
    this->cbd=l2utils::T_C(mid*mid,width*width);
    draw();

}

void l2lebar::draw(){

    path.moveTo(0,0);
    path.lineTo(0,upd);
    path.lineTo(width,upd+mid);
    path.lineTo(width,upd+mid+dod);
    path.lineTo(width-bdd,height);

    this->setPath(path);



}
