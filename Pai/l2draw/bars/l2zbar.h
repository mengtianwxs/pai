#ifndef L2ZBAR_H
#define L2ZBAR_H

#include<l2draw/core/l2bar.h>
class l2zbar : public l2bar
{
public:
    l2zbar(float tod,float height,float bdd);
    void draw();
private:
    float tod;
    float height;
    float bdd;

};

#endif // L2ZBAR_H
