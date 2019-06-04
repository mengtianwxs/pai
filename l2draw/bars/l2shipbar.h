#ifndef L2SHIPBAR_H
#define L2SHIPBAR_H

#include<l2draw/core/l2bar.h>

class l2shipbar : public l2bar
{
public:
    l2shipbar(float wtd,float wdd,float height,float upd,float mtd,float mid,float dod);
    void draw();
private:
    float wtd;
    float wdd;
    float height;
    float upd;
    float mtd;
    float mid;
    float dod;

    float ctd;
    float cdd;
    float mdd;


};

#endif // L2SHIPBAR_H
