#ifndef L2LBAR_H
#define L2LBAR_H

#include<l2draw/core/l2bar.h>

class l2lbar : public l2bar
{
public:
    l2lbar(float width,float height);
    void draw();
private:
    float width;
    float height;

};

#endif // L2LBAR_H
