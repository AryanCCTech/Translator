#pragma once

#include "Reader.h"
#include <vector>
#include <string>

using namespace std;

class STLReader : private Reader
{
    private:
        vector<Point> pointList;
    public:
        STLReader();
        ~STLReader();
        vector<double> uniquePointList;
        void read(string& inputFile,Triangulation& triangulation);
        int findAddValues(double& value, Triangulation& triangulation);
        void createTriangles(Point&p1,Point& p2,Point& p3,Triangulation& triangulation);
};
