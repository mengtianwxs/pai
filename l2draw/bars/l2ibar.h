#ifndef L2IBAR_H
#define L2IBAR_H

#include<l2draw/core/l2bar.h>

class l2ibar : public l2bar
{
public:
    l2ibar(float lnd);
    void draw();
private:
    float lnd;
};

#endif // L2IBAR_H
