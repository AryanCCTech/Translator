// Triangulator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Triangulation.h"
#include "STLReader.h"
#include "Writer.h"
using namespace std;
int main()
{
    Triangulation TRI;
    STLReader R;
    R.read(TRI.Unique_Point_List,TRI.Point_list);
    TRI.make_triangles_list(TRI.Point_list);
    Writer W;
    W.write(TRI.triangles_list,TRI.Unique_Point_List);
}
