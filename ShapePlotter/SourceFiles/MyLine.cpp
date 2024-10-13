#include "MyLine.h"
#include <fstream>
#include <iostream>

MyLine::MyLine() {}

void MyLine::createLine(const MyPoint& start, const MyPoint& end) {
    std::ofstream outFile("shapes.dat", std::ios::trunc);
    outFile << start.coordX << " " << start.coordY << std::endl;
    outFile << end.coordX << " " << end.coordY << std::endl;
    outFile.close();
    std::cout << "Line created and saved to shapes.dat" << std::endl;
}

MyLine::~MyLine() {
    std::cout << "MyLine Destructor" << std::endl;
}
