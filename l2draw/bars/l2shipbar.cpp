#include "l2shipbar.h"

l2shipbar::l2shipbar(float wtd,float wdd,float height,float upd,float mtd,float mid,float dod)
{
    this->wtd=wtd;
    this->wdd=wdd;
    this->height=height;
    this->upd=upd;
    this->mtd=mtd;
    this->mid=mid;
    this->dod=dod;
    this->ctd=l2utils::T_C(wtd*wtd,mtd*mtd);
    this->mdd=height-upd-mtd-mid-dod;
    this->cdd=l2utils::T_C(mdd*mdd,wdd*wdd);

    draw();
}


void l2shipbar::draw(){

    path.moveTo(0,0);
    path.lineTo(0,upd);
    path.lineTo(wtd,upd+mtd);
    path.lineTo(wtd,upd+mtd+mid);
    path.lineTo(wtd-wdd,upd+mtd+mid+mdd);
    path.lineTo(wtd-wdd,height);

    this->setPath(path);

}
