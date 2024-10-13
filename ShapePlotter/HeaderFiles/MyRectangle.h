#ifndef MY_RECTANGLE_H
#define MY_RECTANGLE_H

#include "MyPoint.h"

class MyRectangle {
public:
    MyRectangle(MyPoint bottomLeft, MyPoint topRight);
    void createRectangle();
    ~MyRectangle();

private:
    MyPoint bottomLeft;
    MyPoint topRight;
};

#endif // MY_RECTANGLE_H
