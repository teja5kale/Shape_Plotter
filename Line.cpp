
#include "Line.h"
#include <iostream>
using namespace std;
Line::Line()
{
    cout<<"Line Constructor"<<endl;
}
Line::~Line()
{
    cout<<"Line Destructor "<<endl;
}
void Line::Display2() {
    cout <<"This is a Line" << endl;
}