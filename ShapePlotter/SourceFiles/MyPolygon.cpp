#include "MyPolygon.h"

// Constructor
MyPolygon::MyPolygon() {}

// Add a vertex to the polygon
void MyPolygon::addVertex(const MyPoint& vertex) {
    vertices.push_back(vertex);
}

// Create and save the polygon to a file
void MyPolygon::createPolygon() {
    if (vertices.size() < 3) {
        std::cerr << "Polygon must have at least 3 vertices!" << std::endl;
        return;
    }

    std::ofstream outFile("shapes.dat", std::ios::trunc);

    for (const MyPoint& vertex : vertices) {
        outFile << vertex.coordX << " " << vertex.coordY << std::endl;
    }
    // Close the polygon by connecting the last vertex to the first
    outFile << vertices[0].coordX << " " << vertices[0].coordY << std::endl;

    outFile.close();
    std::cout << "Polygon created and saved to shapes.dat" << std::endl;
}

// Get vertices
const std::vector<MyPoint>& MyPolygon::getVertices() const {
    return vertices;
}

// Destructor
MyPolygon::~MyPolygon() {
    std::cout << "MyPolygon Destructor" << std::endl;
}
