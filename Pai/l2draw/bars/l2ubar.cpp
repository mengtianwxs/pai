#include "l2ubar.h"

l2ubar::l2ubar(float lhd,float bdd,float rhd)
{
    this->lhd=lhd;
    this->bdd=bdd;
    this->rhd=rhd;
    draw();
}

void l2ubar::draw(){
    path.moveTo(0,0);
    path.lineTo(0,lhd);
    path.lineTo(bdd,lhd);
    path.lineTo(bdd,lhd-rhd);
    this->setPath(path);
}
