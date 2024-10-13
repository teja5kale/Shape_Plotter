#ifndef MY_SQUARE_H
#define MY_SQUARE_H

#include "MyPoint.h"

class MySquare {
public:
    MySquare();
    void createSquare(const MyPoint& center, double sideLength);
    ~MySquare();
};

#endif // MY_SQUARE_H
