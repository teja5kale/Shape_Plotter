#ifndef RECTANGLE_H
#define RECTANGLE_H
 
// class Rectangle {
// public:
//     int x1,y1,x2,y2;
//   //  Rectangle();
//     Rectangle(int a, int b,int c,int d);
//     ~Rectangle();
//     void Display5();
// };
 
// #endif
 
#include"Shape.h"
#include "Point.h"
class Rectangle {
public:
Point p1;
Point p2;;
Rectangle(Point p1,Point p2);
void CreatRectangle(Point p1,Point p2);
void draw();
//Circle(Point center , int a);
~Rectangle();
// void Display();
// void getCenterOFCircle();
// void AreaOfCircle();
};
 
#endif
 
 
