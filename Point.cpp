#include "Point.h"
#include "Shape.h"
#include <iostream>
using namespace std;

Point::Point(double a,double b)
{
    this->x = a;
    this->y = b;
    cout<<"Point x : "<<this->x<<endl;
    cout<<"Point y : "<<this->y<<endl;
}
void Point::CreatePoint()
{
    cout<<"Point X and y "<<x<<" "<<y<<endl; 
}
void Point::draw()
{
    cout<<"Point draw "<<endl;
}
// double Point::getPointX()
// {
//     return this->x;
// }
// double Point::getPointY()
// {
//     return this->y;
// }
Point::~Point()
{
    cout<<"Point Destructor"<<endl;
}
// void Point::Display1() {
//     cout << "This is a Point " << endl;
// }