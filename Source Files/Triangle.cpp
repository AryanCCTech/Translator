#include <iostream>
#include "Triangle.h"
using namespace std;
Triangle::Triangle(Point p1, Point p2, Point p3) : p1(p1), p2(p2), p3(p3) {}
Triangle::~Triangle() {};
void Triangle::get_coord() {
    p1.get_coord();
    p2.get_coord();
    p3.get_coord();
}