#pragma once
#include "Point.h"

class Triangle 
{
private:
	Point p1;
	Point p2;
	Point p3;
public:
	Triangle(Point p1, Point p2, Point p3);
	~Triangle() 
	{
	}
	Point getP1Point() const;
	Point getP2Point() const;
	Point getP3Point() const;
};
