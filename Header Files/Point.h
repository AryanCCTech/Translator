#pragma once
#include <iostream>
using namespace std;
class Point{
public:
	int x;
	int y;
	int z;
	Point(int x, int y, int z);
	~Point();
	void get_coord();
};