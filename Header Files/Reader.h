#pragma once

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
        vector<double> unique_points;
        vector<Point> point_list;
        void read_stl_file();
        void get_unique_points();
        void get_all_points();
};
