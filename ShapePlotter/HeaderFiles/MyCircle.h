#ifndef MY_CIRCLE_H
#define MY_CIRCLE_H

#include "MyPoint.h"

class MyCircle {
public:
    MyPoint center;
    double radius;
    MyCircle(MyPoint center, double radius);
    void generateCircle();
    ~MyCircle();
};

#endif // MY_CIRCLE_H
