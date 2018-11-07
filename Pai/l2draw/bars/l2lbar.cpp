#include "l2lbar.h"

l2lbar::l2lbar(float width,float height)
{
   this->width=width;
    this->height=height;
    draw();
}

void l2lbar::draw(){
    path.moveTo(0,0);
    path.lineTo(0,height);
    path.lineTo(width,height);
    this->setPath(path);
}
