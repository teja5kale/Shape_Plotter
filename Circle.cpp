#include <iostream>
#include <fstream>
#include <cmath>
#include "Circle.h"
#include "Point.h"
using namespace std;

Circle::Circle(Point center,double radius)
{
    this->center=center;
    this->radius=radius;
}
void Circle::CreatCircle()
{
    cout<<"Circle Center Point x and y "<<center.x<<" "<<center.y<<endl;

    double x = center.x; // x-coordinate of center
    double y = center.y; // y-coordinate of center
    double r = this->radius; // radius
     int numPoints = 100; 
    std::ofstream outFile("output.dat");
    
    for (int i = 0; i <= numPoints; ++i) {
        double t = (2 * 3.14 * i) / numPoints; // Parameter t
        double x = x + r * cos(t);
        double y = y + r * sin(t);
        outFile << x << " " << y << std::endl; // Write points to the file
    }

    outFile.close();
    std::cout << "Circle data written to circle.dat" << std::endl;
}
void Circle::draw()
{
    cout<<"Draw Circle "<<endl;
}
//  Circle::Circle(int r)
// {
//     this->radius = r;
//     cout<<"Radius of Circle : "<<this->radius<<endl;
// }

// void Circle::Display() {
//     cout << "This is a circle" << endl;
// }
// void Circle::AreaOfCircle()
// {
//     float result = 3.14*this->radius*this->radius;
//     cout<<"Area Of Circle is : "<<result<<endl;
// }
Circle::~Circle() {  
    cout << "Circle Destructor called" << endl;
}
