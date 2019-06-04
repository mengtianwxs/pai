#include "l2ibar.h"

l2ibar::l2ibar(float lnd)
{
   this->lnd=lnd;

    draw();

}

void l2ibar::draw(){
    path.moveTo(0,0);
    path.lineTo(lnd,0);
    this->setPath(path);
}
