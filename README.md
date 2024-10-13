# Shape-Plotter

Shape-Plotter is a C++ application designed to create and visualize various geometric shapes. Users can create points, lines, triangles, squares, rectangles, circles, and polygons, with the coordinates stored in separate data files.

## Features

- **Create Shapes**: The application allows users to create the following shapes:
  - Points
  - Lines
  - Triangles
  - Squares
  - Rectangles
  - Circles
  - Polygons
- **File Output**: Shape coordinates are saved in separate `.dat` files for each shape.

## Getting Started

### Prerequisites

- C++ Compiler (e.g., g++, clang++)
- Standard C++ Library

### Compilation

To compile the application, run the following command in your terminal:

```bash
g++ -o shape_plotter main.cpp MyPoint.cpp MyLine.cpp MyTriangle.cpp MySquare.cpp MyRectangle.cpp MyCircle.cpp MyPolygon.cpp MyManager.cpp
