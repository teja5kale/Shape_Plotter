#include "MyRectangle.h"
#include <fstream>
#include <iostream>

MyRectangle::MyRectangle(MyPoint bl, MyPoint tr) : bottomLeft(bl), topRight(tr) {}

void MyRectangle::createRectangle() {
    std::ofstream outFile("shapes.dat", std::ios::trunc);
    outFile << bottomLeft.coordX << " " << bottomLeft.coordY << std::endl;
    outFile << bottomLeft.coordX << " " << topRight.coordY << std::endl;
    outFile << topRight.coordX << " " << topRight.coordY << std::endl;
    outFile << topRight.coordX << " " << bottomLeft.coordY << std::endl;
    outFile << bottomLeft.coordX << " " << bottomLeft.coordY << std::endl;
    outFile.close();
    std::cout << "Rectangle created and saved to shapes.dat" << std::endl;
}

MyRectangle::~MyRectangle() {
    std::cout << "MyRectangle Destructor" << std::endl;
}
