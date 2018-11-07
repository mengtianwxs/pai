#ifndef L2UBAR_H
#define L2UBAR_H

#include<l2draw/core/l2bar.h>
class l2ubar : public l2bar
{
public:
    l2ubar(float lhd,float bdd,float rhd);
    void draw();
private:
    float lhd;
    float bdd;
    float rhd;
};

#endif // L2UBAR_H
