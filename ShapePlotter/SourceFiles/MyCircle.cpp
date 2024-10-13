#include "MyCircle.h"
#include <fstream>
#include <iostream>
#include <cmath>

MyCircle::MyCircle(MyPoint center, double radius) : center(center), radius(radius) {}

void MyCircle::generateCircle() {
    std::ofstream outFile("shapes.dat", std::ios::trunc);
    int numPoints = 100;

    for (int i = 0; i <= numPoints; ++i) {
        double theta = (2 * 3.14 * i) / numPoints;
        double x = center.coordX + radius * cos(theta);
        double y = center.coordY + radius * sin(theta);
        outFile << x << " " << y << std::endl;
    }

    outFile.close();
    std::cout << "Circle created and saved to shapes.dat" << std::endl;
}

MyCircle::~MyCircle() {
    std::cout << "MyCircle Destructor" << std::endl;
}
