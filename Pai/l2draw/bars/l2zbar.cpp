#include "l2zbar.h"

l2zbar::l2zbar(float tod,float height,float bdd)
{
    this->tod=tod;
    this->height=height;
    this->bdd=bdd;
    draw();

}

void l2zbar::draw(){
    path.moveTo(0,0);
    path.lineTo(tod,0);
    path.lineTo(tod,height);
    path.lineTo(tod+bdd,height);
    this->setPath(path);
}
