#include "Triangle.h"

Triangle::Triangle(Point p1, Point p2, Point p3) : p1(p1), p2(p2), p3(p3) 
{
}

Point Triangle::getP1Point() const
{
    return p1;
}

Point Triangle::getP2Point() const
{
    return p2;
}

Point Triangle::getP3Point() const
{
    return p3;
}
