// Triangulator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Point.h"
#include "Triangle.h"
#include "Triangulation.h"
#include "Reader.h"
#include "Writer.h"
using namespace std;
int main()
{
    Reader R;
    vector<Point> points_list = R.read_stl_file();
    vector<double> unique_points = R.get_unique_points();
    Triangulation TRI;
    vector<Triangle> triangle_list = TRI.get_triangles_list(points_list);
    Writer W;
    W.write(triangle_list,unique_points);
}
