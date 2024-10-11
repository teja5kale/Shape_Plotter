#ifndef POINT_H
#define POINT_H
#include"Shape.h"


class Point {
public:
    double x;
    double y;
   // Point();
    Point(double a=0,double b=0);
  //  double getPointX();
    //double getPointY();
    void CreatePoint();
    void draw();
    ~Point();
    //void Display1();
};

#endif // CIRCLE_H