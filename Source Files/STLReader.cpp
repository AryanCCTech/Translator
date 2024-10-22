#include "STLReader.h"
#include <sstream>
#include <iostream>
#include <fstream>
#include <map>

using namespace std;

STLReader::STLReader()
{
}

STLReader::~STLReader()
{
}

void STLReader::read(std::string& inputFile,Triangulation& triangulation) {
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
            double x;
            double y;
            double z;
            if (iss >> vertex >> x >> y >> z) 
            {
                if (vertex == "vertex")
                {
                    x1 = findAddValues(x, triangulation,index);
                    y1 = findAddValues(y, triangulation,index);
                    z1 = findAddValues(z, triangulation,index);
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

int STLReader::findAddValues (double& value, Triangulation& triangulation,int& index)
{
    if (doubleMap.find(value) == doubleMap.end()) 
    {
        doubleMap[value] = index;
        triangulation.uniquePoints.push_back(value);
        return index++;
    }
    else
    {
        return doubleMap[value];
    }
}

void STLReader::createTriangles(Point& p1, Point& p2, Point& p3, Triangulation& triangulation)
{
    Triangle tri(p1, p2, p3);
    triangulation.insertTriangles(tri);
}
