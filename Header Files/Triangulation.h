#pragma once
#include "Point.h"
#include "Triangle.h"
#include <fstream>
#include <string>
#include <unordered_map>
#include <vector>
#include <sstream>
using namespace std;
class Triangulation {
public:
    vector<Triangle> get_triangles(vector <Point> points);
};