#pragma once

#include "Triangle.h"
#include <fstream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

class Writer{

private:
    string file;
public:
    void write(vector<Triangle> triangle_list,vector<double> upoints);
};
