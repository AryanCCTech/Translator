#pragma once

#include "Reader.h"
#include <vector>
#include <string>
#include <map>

using namespace std;

class STLReader : private Reader
{
    private:
        vector<Point> pointList;
    public:
        STLReader();
        ~STLReader();
        map<double, int, ToleranceComparator> doubleMap;
        vector<double> uniquePointList;
        void read(string& inputFile,Triangulation& triangulation);
        int findAddValues(double& value, Triangulation& triangulation,int& index);
        void createTriangles(Point&p1,Point& p2,Point& p3,Triangulation& triangulation);
};
