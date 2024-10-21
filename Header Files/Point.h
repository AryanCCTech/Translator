#pragma once
#include <iostream>

using namespace std;

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