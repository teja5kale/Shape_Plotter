#include "MyTriangle.h"

MyTriangle::MyTriangle(MyPoint p1, MyPoint p2, MyPoint p3)
    : p1(p1), p2(p2), p3(p3) {
    std::cout << "MyTriangle constructor called\n";
}

void MyTriangle::createTriangle() {
    // Open the file in append mode to write triangle vertices
    std::ofstream outFile("shapes.dat", std::ios::trunc);
    // Write the coordinates of the three vertices of the triangle
    outFile << p1.coordX << " " << p1.coordY << std::endl; // First vertex
    outFile << p2.coordX << " " << p2.coordY << std::endl; // Second vertex
    outFile << p3.coordX << " " << p3.coordY << std::endl; // Third vertex
    outFile << p1.coordX << " " << p1.coordY << std::endl; // Close triangle (back to the first vertex)
    outFile.close(); // Close the output file

    std::cout << "Triangle data written to shapes.dat\n";
}

MyTriangle::~MyTriangle() {
    std::cout << "MyTriangle destructor called\n";
}
