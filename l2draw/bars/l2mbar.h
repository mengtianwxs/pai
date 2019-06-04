#ifndef L2MBAR_H
#define L2MBAR_H

#include <l2draw/core/l2bar.h>

class l2mbar : public l2bar
{
public:
    l2mbar(float width,float height,float tod,float dod);
    void draw();

   private:

    float width;
    float height;
    float tod;
    float upd;
    float mwd;
    float dod;

};

#endif // L2MBAR_H
