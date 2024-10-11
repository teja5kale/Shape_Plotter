/*#ifndef Circle
#define Circle
class Circle {
public:
  //  double radius;
    void Display();
};

#endif */
#ifndef CIRCLE_H
#define CIRCLE_H
#include "Point.h"
#include "Shape.h"

class Circle {
public:
Point center;
double  radius;
Circle(Point center,double radius);
void CreatCircle();
void draw();
//Circle(Point center , int a);
~Circle();
// void Display();
// void getCenterOFCircle();
// void AreaOfCircle();
};

#endif // CIRCLE_H
