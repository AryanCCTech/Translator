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
	void get_coord();
};
