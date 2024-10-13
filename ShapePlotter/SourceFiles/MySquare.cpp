#include "MySquare.h"
#include <fstream>
#include <iostream>

MySquare::MySquare() {}

void MySquare::createSquare(const MyPoint& center, double sideLength) {
    double halfSide = sideLength / 2.0;
    MyPoint bl(center.coordX - halfSide, center.coordY - halfSide);
    MyPoint tr(center.coordX + halfSide, center.coordY + halfSide);

    std::ofstream outFile("shapes.dat", std::ios::trunc);
    outFile << bl.coordX << " " << bl.coordY << std::endl;
    outFile << bl.coordX << " " << tr.coordY << std::endl;
    outFile << tr.coordX << " " << tr.coordY << std::endl;
    outFile << tr.coordX << " " << bl.coordY << std::endl;
    outFile << bl.coordX << " " << bl.coordY << std::endl;
    outFile.close();

    std::cout << "Square created and saved to shapes.dat" << std::endl;
}

MySquare::~MySquare() {
    std::cout << "MySquare Destructor" << std::endl;
}
