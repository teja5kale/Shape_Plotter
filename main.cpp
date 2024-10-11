
#include "Circle.h"
#include "Point.h"
#include "Line.h"
#include "Input.h"
#include "Polygon.h"
#include "Rectangle.h"
#include "Square.h"
#include "Write.h"
#include "Read.h"
#include "Triangle.h"
#include "Comunicator.h"
#include "Shape.h"
#include "Manager.h"
#include <iostream>
using namespace std;

int main() {

    // Point p1(1,2);
    // p1.CreatePoint();
    // p1.draw();
    // Point p2(2,3);
    
    // Rectangle r1(p1,p2);
    // r1.CreatRectangle();
    // r1.draw();

    // Circle c1(p1,5);
    // c1.CreatCircle();
    // c1.draw();



    int choice;
    do {


        std::cout << "Menu:\n";
        std::cout << "1. Create Circle\n";
        std::cout << "2. Create Rectangle\n";
        std::cout << "3. Create Square\n";
        std::cout << "4. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:{
                          cout<<"Enter center Point (x,y) : "<<endl;
                int x,y;
                cin>>x>>y;
                Point p1(x,y);
                Circle c1(p1,5);
                c1.CreatCircle();
                c1.draw();
                break;
            }
      
            case 2:{
                cout<<"Enter Diagonal  Point (x1,y1,x2,y2) : "<<endl;
                int x1,y1,x2,y2;
                cin>>x1>>y1>>x2>>y2;
                Point p2(x1,y1);
                Point p3(x2,y2);
                Rectangle r1(p2,p3);
                r1.CreatRectangle(p2,p3);
                r1.draw();
                break;}
            case 3:{
                double x, y, side;
                cout << "Enter the Center point of Square" << endl;
                cin >> x >> y;
                cout << "Enter the Side of the Square :  " << endl;
                cin >> side;
                Point p1(x, y);
                Square s;
                s.createSquare(p1, side); //(const Point & center, double sideLength
                break;}
            case 5:{
                double x1,y1,x2,y2,x3,y3;
                cout<<"Enter First Point : "<<endl;
                cin>>x1>>y1;
                cout<<"Enter Second Point : "<<endl;
                cin>>x2>>y2;
                cout<<"Enter Third Point : "<<endl;
                cin>>x3>>y3;
                Point p1(x1,x2);
                Point p2(x2,y2);
                Point p3(x3,y3);
                Triangle t1;
                t1.createTriangle(p1,p2,p3);
                break;}
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
        }
    } while (choice != 4);
    // Point p(5,5);
    // Circle c1(2);
   
    // c1.AreaOfCircle();
    // c1.Display(); // Call the Display method
    //  Point p1(2,3);
    //  p1.Display1();
    //  Line l1;
    //  l1.Display2();
    // Input i1;
    // i1.Display3();
    // Polygon pl1;
    // pl1.Display4();
    //  Rectangle r1(2,3,4,5);
    //  r1.Display5();
    // Square s1;
    // s1.Display6();
    //  Write w1;
    //  w1.WriteFile();
    //  w1.Display7();
    //  Read rd1;
    //  rd1.ReadFile();
    //  rd1.Display8();
    // Triangle t1;
    cout << "3D Application" << endl;
    cout<<"Hello World"<<endl;
    return 0;
}

