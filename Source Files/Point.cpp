#include "Point.h"

Point::Point(int x, int y, int z) :x(x), y(y), z(z)
{
}

Point::~Point() 
{
};

int Point::getXCoord() const
{
    return x;
}

int Point::getYCoord() const
{
    return y;
}

int Point::getZCoord() const
{
    return z;
}
