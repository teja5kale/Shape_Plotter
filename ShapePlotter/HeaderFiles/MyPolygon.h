#ifndef MY_POLYGON_H
#define MY_POLYGON_H

#include "MyPoint.h"
#include <vector>
#include <iostream>
#include <fstream>

class MyPolygon {
private:
    std::vector<MyPoint> vertices; // Store vertices of the polygon

public:
    MyPolygon(); // Constructor
    void addVertex(const MyPoint& vertex); // Add a vertex to the polygon
    void createPolygon(); // Create and save the polygon to a file
    const std::vector<MyPoint>& getVertices() const; // Get vertices
    ~MyPolygon(); // Destructor
};

#endif // MY_POLYGON_H
