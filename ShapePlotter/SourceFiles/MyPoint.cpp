#include "MyPoint.h"
#include <iostream>
#include<Fstream>
MyPoint::MyPoint(double x, double y) : coordX(x), coordY(y) {}

void MyPoint::definePoint() {
    std::cout << "Point Coordinates: (" << coordX << ", " << coordY << ")" << std::endl;
}

void MyPoint::createPoint() {
    // Prompt for coordinates
    std::cout << "Enter coordinates for the point (x, y): ";
    std::cin >> coordX >> coordY; // Read x and y coordinates from the user

    // Open file in append mode to save the point
    std::ofstream outFile("shapes.dat", std::ios::trunc);
    if (outFile.is_open()) {
        outFile << coordX << " " << coordY << std::endl; // Write the coordinates to the file
        outFile.close(); // Close the file
        std::cout << "Point saved to shapes.dat: (" << coordX << ", " << coordY << ")" << std::endl;
    }
    else {
        std::cerr << "Error opening shapes.dat for writing." << std::endl;
    }
}

MyPoint::~MyPoint() {
    std::cout << "MyPoint Destructor" << std::endl;
}
