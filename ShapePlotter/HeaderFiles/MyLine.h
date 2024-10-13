#ifndef MY_LINE_H
#define MY_LINE_H

#include "MyPoint.h"

class MyLine {
public:
    MyLine();
    void createLine(const MyPoint& start, const MyPoint& end);
    ~MyLine();
};

#endif // MY_LINE_H
