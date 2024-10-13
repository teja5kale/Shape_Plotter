#include "MyManager.h"
#include "MyPolygon.h"
#include <iostream>

void MyManager::processUserInput() {
    int option;
    do {
        std::cout << "Menu Options:\n";
        std::cout << "1. Create Point\n";
        std::cout << "2. Create Line\n";
        std::cout << "3. Create Triangle\n";
        std::cout << "4. Create Square\n";
        std::cout << "5. Create Rectangle\n";
        std::cout << "6. Create Circle\n";
        std::cout << "7. Create Polygon\n";
        std::cout << "8. Exit\n"; // Updated exit case to 8
        std::cout << "Choose an option: ";
        std::cin >> option;

        switch (option) {
        case 1: { // Create Point
            MyPoint point; // Create a MyPoint object
            point.createPoint(); // Call createPoint to gather input and save to file
            break;
        }
        case 2: { // Create Line
            double x1, y1, x2, y2;
            std::cout << "Enter first point (x1, y1) and second point (x2, y2): ";
            std::cin >> x1 >> y1 >> x2 >> y2;
            MyLine line;
            line.createLine(MyPoint(x1, y1), MyPoint(x2, y2));
            break;
        }
        case 3: { // Create Triangle
            double x1, y1, x2, y2, x3, y3;
            std::cout << "Enter the three points (x1, y1), (x2, y2), (x3, y3) for the triangle: ";
            std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
            MyTriangle triangle(MyPoint(x1, y1), MyPoint(x2, y2), MyPoint(x3, y3));
            triangle.createTriangle();
            break;
        }
        case 4: { // Create Square
            double x, y, side;
            std::cout << "Enter center coordinates (x, y) and side length: ";
            std::cin >> x >> y >> side;
            MySquare square;
            square.createSquare(MyPoint(x, y), side);
            break;
        }
        case 5: { // Create Rectangle
            double x1, y1, x2, y2;
            std::cout << "Enter bottom-left (x1, y1) and top-right (x2, y2) coordinates: ";
            std::cin >> x1 >> y1 >> x2 >> y2;
            MyRectangle rect(MyPoint(x1, y1), MyPoint(x2, y2));
            rect.createRectangle();
            break;
        }
        case 6: { // Create Circle
            double x, y, radius;
            std::cout << "Enter center coordinates (x, y) and radius: ";
            std::cin >> x >> y >> radius;
            MyPoint center(x, y);
            MyCircle circle(center, radius);
            circle.generateCircle();
            break;
        }
        case 7: { // Create Polygon
            int numPoints;
            std::cout << "Enter the number of vertices for the polygon: ";
            std::cin >> numPoints;

            MyPolygon polygon; // Create a polygon object

            for (int i = 0; i < numPoints; ++i) {
                double x, y;
                std::cout << "Enter coordinates for vertex " << i + 1 << ": ";
                std::cin >> x >> y;
                polygon.addVertex(MyPoint(x, y)); // Add each vertex to the polygon
            }

            polygon.createPolygon(); // Create polygon from the vertices
            break;
        }
        case 8: // Exit the program
            std::cout << "Exiting program...\n";
            return;
        default:
            std::cout << "Invalid option, try again.\n";
        }
    } while (true);
}
