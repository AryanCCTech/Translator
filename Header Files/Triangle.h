#pragma once
#include "Point.h"

using namespace std;

class Triangle {

private:
	Point p1;
	Point p2;
	Point p3;
public:
	Triangle(Point p1, Point p2, Point p3);
	~Triangle();
	Point get_p1_point() const;
	Point get_p2_point() const;
	Point get_p3_point() const;
};
