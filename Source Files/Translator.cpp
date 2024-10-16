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
    R.read_stl_file();
    R.get_unique_points();
    Triangulation TRI;
    TRI.make_triangles_list(R.point_list);
    Writer W;
    W.write(TRI.triangles_list,R.unique_points);
}
