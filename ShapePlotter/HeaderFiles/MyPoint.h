#ifndef MY_POINT_H
#define MY_POINT_H

class MyPoint {
public:
    double coordX;
    double coordY;

    MyPoint(double x = 0, double y = 0);
    void definePoint();
    void createPoint(); // New function declaration
    ~MyPoint();
};

#endif // MY_POINT_H
