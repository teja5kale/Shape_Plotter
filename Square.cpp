#include "Square.h"
#include "Point.h"
#include <iostream>
#include<fstream>
using namespace std;
Square::Square()
{
    cout<<"Square Constructor Called"<<endl;
}
Square::~Square()
{
    cout<<" Square Destructor Called "<<endl;
}
void Square::createSquare(const Point & center, double sideLength) {
    double halfSide = sideLength / 2.0;
    double x1 = center.x - halfSide;
    double y1 = center.y - halfSide;
    double x2 = center.x + halfSide;
    double y2 = center.y + halfSide;
 
    std::ofstream outFile("square.dat");
   
    outFile << x1 << " " << y1 << std::endl; // Bottom-left
    outFile << x1 << " " << y2 << std::endl; // Top-left
    outFile << x2 << " " << y2 << std::endl; // Top-right
    outFile << x2 << " " << y1 << std::endl; // Bottom-right
    outFile << x1 << " " << y1 << std::endl; // Closing the square
 
    outFile.close();
    std::cout << "Square data written to square.dat" << std::endl;
    std::cout << "Square Create Function" << std::endl;
}
 