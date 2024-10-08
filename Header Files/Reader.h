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
private:
    string file;
public:
    vector<Point> read_stl_file();
    vector<double> get_unique_points();
};
