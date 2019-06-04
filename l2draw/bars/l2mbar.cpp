#include "l2mbar.h"

l2mbar::l2mbar(float width,float height,float tod,float dod)
{

    this->width=width;
    this->height=height;
    this->tod=tod;
    this->dod=dod;
    this->upd=height-dod;
    this->mwd=width-tod;

    draw();

}

void l2mbar::draw(){

    path.moveTo(0,0);
    path.lineTo(tod,0);
    path.lineTo(tod,upd);
    path.lineTo(width,upd);
    path.lineTo(width,height);

    this->setPath(path);
}
