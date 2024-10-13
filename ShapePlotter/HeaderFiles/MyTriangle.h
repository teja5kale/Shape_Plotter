#ifndef MYTRIANGLE_H
#define MYTRIANGLE_H

#include "MyPoint.h" // Include the MyPoint class
#include <iostream>
#include <fstream>

class MyTriangle {
public:
    MyPoint p1, p2, p3; // Vertices of the triangle

    // Constructor to initialize the triangle with three points
    MyTriangle(MyPoint p1, MyPoint p2, MyPoint p3);

    // Method to create the triangle and write its vertices to a file
    void createTriangle();

    // Destructor
    ~MyTriangle();
};

#endif // MYTRIANGLE_H
