#pragma once

#include "Triangle.h"
#include <vector>

class Triangulation 
{ 
    std::vector<Triangle> trianglesList;
public:
    std::vector<double> uniquePoints;
    Triangulation()
    {
    }
    ~Triangulation()
    {
    }
    void insertTriangles(Triangle& triangle);
};
