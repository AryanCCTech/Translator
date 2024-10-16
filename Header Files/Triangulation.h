#pragma once

#include "Triangle.h"
#include <fstream>
#include <string>
#include <sstream>
#include <unordered_map>
#include <vector>

using namespace std;

class Triangulation {
    public:
        vector<Triangle> triangles_list;
        void make_triangles_list(vector <Point> points);
        void get_triangles_list();
};
