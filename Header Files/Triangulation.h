#pragma once

#include "Triangle.h"
#include <vector>

using namespace std;

class Triangulation 
{ 
public:
    vector<Triangle> trianglesList;
    vector<double> uniquePoints;
    Triangulation();
    ~Triangulation();
    void insertTriangles(Triangle& triangle);
};
