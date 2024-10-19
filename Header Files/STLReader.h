#pragma once

#include "Reader.h"
#include <vector>


class STLReader : private Reader{
    private:
        string inputFile = "cube-ascii.stl";
        vector<Point> pointList;
    public:
        STLReader() 
        {
        }
        ~STLReader() 
        {
        }
        vector<double> uniquePointList;
        void read(const std::string& inputFile, Triangulation& triangulation);
        int findAddValues(vector<double>& uniquePointList, double& value);
        void createTriangles(Point&p1,Point& p2,Point& p3,Triangulation& triangulation);
};
