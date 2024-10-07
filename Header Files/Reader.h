#pragma once
#include "Point.h"
#include "Triangle.h"
#include <fstream>
#include <string>
#include <unordered_map>
#include <vector>
#include <sstream>
using namespace std;
class Reader {
public:
    string file;
    vector<Point> read();
    vector<double> get_points();
};