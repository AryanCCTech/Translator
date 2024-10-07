#include <iostream>
#include "Point.h"
#include "Triangulation.h"
using namespace std;
Point::Point(int x, int y, int z) :x(x), y(y), z(z){}
Point::~Point() {};
void Point::get_coord() {
    cout << "(x = " << x << ", y = " << y << ", z = " << z << ")" << endl;
}