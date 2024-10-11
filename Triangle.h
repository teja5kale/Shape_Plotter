#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "Point.h"

class Triangle {
public:
int side;
void createTriangle(Point p1, Point p2, Point p3);
Triangle();
~Triangle();
    
};

#endif 