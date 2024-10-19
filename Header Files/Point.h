#pragma once
#include <iostream>

class Point
{
private:
	int x;
	int y;
	int z;
public:
	Point( int x, int y, int z);
	~Point();
	int getXCoord() const;
	int getYCoord() const;
	int getZCoord() const;
};