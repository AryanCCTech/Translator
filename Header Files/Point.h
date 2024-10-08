#pragma once
#include <iostream>
using namespace std;
class Point{
private:	
	int x;
	int y;
	int z;
public:
	Point(int x, int y, int z);
	~Point();
	int get_x_coord();
	int get_y_coord();
	int get_z_coord();
};
