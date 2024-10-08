#include <iostream>
#include "Triangle.h"
using namespace std;
Triangle::Triangle(Point p1, Point p2, Point p3) : p1(p1), p2(p2), p3(p3) {}
Triangle::~Triangle() {};
int Triangle::get_p1_x_coord() {
    p1.get_x_coord();
}
int Triangle::get_p1_y_coord() {
    p1.get_y_coord();
}
int Triangle::get_p1_z_coord() {
    p1.get_z_coord();
}
int Triangle::get_p2_x_coord() {
    p2.get_x_coord();
}
int Triangle::get_p2_y_coord() {
    p2.get_y_coord();
}
int Triangle::get_p2_z_coord() {
    p2.get_z_coord();
}
int Triangle::get_p3_x_coord() {
    p3.get_x_coord();
}
int Triangle::get_p3_y_coord() {
    p3.get_y_coord();
}
int Triangle::get_p3_z_coord() {
    p3.get_z_coord();
}

