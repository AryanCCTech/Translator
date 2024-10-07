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
    vector<Point> tpoints = R.read();
    //for (auto i : tpoints) {
    //    i.get_coord();
    //}
    vector<double> upoints = R.get_points();
    //for (auto j : upoints) {
    //    cout << j << " ";
    //}
    Triangulation TRI;
    vector<Triangle> triangle_list = TRI.get_triangles(tpoints);
    Writer W;
    W.write(triangle_list,upoints);
}
