#ifndef L2LEBAR_H
#define L2LEBAR_H
#include<l2draw/core/l2bar.h>


class l2lebar : public l2bar
{
public:
    l2lebar(float width,float height,float upd,float dod,float bdd);
    void draw();
private:
    float width;
    float height;
    float upd;
    float dod;
    float bdd;
    float mid;
    float cbd;


};

#endif // L2LEBAR_H
