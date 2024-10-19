#pragma once

#include "Triangle.h"
#include <vector>

using namespace std;

class Writer{
    const string outputFile;
    vector<double>& uniquePoints;
public:
    Writer()
    {
    }
    ~Writer() 
    {
    }
    void write(vector<Triangle>& triangle_list,vector<double>& upoints);
};
