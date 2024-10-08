#pragma once
#include "Point.h"
#include <iostream>
using namespace std;
class Triangle {
private:
	Point p1;
	Point p2;
	Point p3;
public:
	Triangle(Point p1, Point p2, Point p3);
	~Triangle();
	int get_p1_x_coord();
	int get_p1_y_coord();
	int get_p1_z_coord();
	int get_p2_x_coord();
	int get_p2_y_coord();
	int get_p2_z_coord();
	int get_p3_x_coord();
	int get_p3_y_coord();
	int get_p3_z_coord();
};
