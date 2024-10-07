#pragma once
#include "Point.h"
#include "Triangle.h"
#include <fstream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;
class Writer{
public:
    string file;
    void write(vector<Triangle> triangle_list,vector<double> upoints);
};