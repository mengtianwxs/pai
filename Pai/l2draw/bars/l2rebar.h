#ifndef L2REBAR_H
#define L2REBAR_H

#include<l2draw/core/l2bar.h>


class l2rebar : public l2bar
{
public:
    l2rebar(float width,float height,float upd,float dod,float bdd );
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

#endif // L2REBAR_H
