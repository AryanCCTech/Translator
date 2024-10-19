#include "STLReader.h"
#include <sstream>
#include <fstream>

using namespace std;

void STLReader::read(const std::string& inputFile, Triangulation& triangulation) {
    ifstream myfile(inputFile);
    string line;
    int index = 0;
    int x1;
    int y1;
    int z1;
    if (myfile.is_open()) 
    {
        while (getline(myfile, line)) 
        {
            istringstream iss(line);
            string vertex;
            double x, y, z;
            if (iss >> vertex >> x >> y >> z) 
            {
                if (vertex == "vertex")
                {
                    x1 = findAddValues(uniquePointList, x);
                    y1 = findAddValues(uniquePointList, y);
                    z1 = findAddValues(uniquePointList, z);
                    pointList.push_back(Point(x1, y1, z1));
                }
            }
            if (pointList.size() == 3)
            {
                createTriangles(pointList[0], pointList[1], pointList[2], triangulation);
                pointList.clear();
            }
        }
    }
    else 
    {
        throw("File doesn't exist ");
    }
}

int STLReader::findAddValues(vector<double>& uniquePointList, double& value)
{
    for (int i = 0; i < uniquePointList.size(); i++) 
    {
        if (equalChecker(uniquePointList[i], value))
            return i;
    }
    uniquePointList.push_back(value);
    return uniquePointList.size()-1;
}

void STLReader::createTriangles(Point& p1, Point& p2, Point& p3, Triangulation& triangulation)
{
    Triangle tri(p1, p2, p3);
    triangulation.insertTriangles(tri);
}
