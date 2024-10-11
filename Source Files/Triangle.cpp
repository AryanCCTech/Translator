#include "Triangle.h"

using namespace std;

Triangle::Triangle(Point p1, Point p2, Point p3) : p1(p1), p2(p2), p3(p3) {}
Triangle::~Triangle() {};
Point Triangle::get_p1_point() const{
    return p1;
}
Point Triangle::get_p2_point() const{
    return p2;
}
Point Triangle::get_p3_point() const{
    return p3;
}
