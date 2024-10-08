#include <fstream>
#include <iostream>
#include <string>
#include "Reader.h"

using namespace std;
vector<double> unique_points;

vector<Point> Reader::read_stl_file() {
    vector<Point> point_list;
    unordered_map<double, int> unique_value_map;
    ifstream myfile("cube-ascii.stl");
    string line;
    int index = 0, x1, y1, z1;
    if (myfile.is_open()) {
        while (getline(myfile, line)) {
            istringstream iss(line);
            string vertex;
            double x, y, z;
            if (iss >> vertex >> x >> y >> z) {
                if (vertex == "vertex") {
                    if (unique_value_map.find(x) == unique_value_map.end()) {
                        unique_value_map[x] = index;
                        x1 = index;
                        unique_points.push_back(x);
                        index++;
                    }
                    else {
                        x1 = unique_value_map[x];
                    }
                    if (unique_value_map.find(y) == unique_value_map.end()) {
                        unique_value_map[y] = index;
                        y1 = index;
                        unique_points.push_back(y);
                        index++;
                    }
                    else {
                        y1 = unique_value_map[y];
                    }
                    if (unique_value_map.find(z) == unique_value_map.end()) {
                        unique_value_map[z] = index;
                        z1 = index;
                        unique_points.push_back(z);
                        index++;
                    }
                    else {
                        z1 = unique_value_map[z];
                    }
                    Point p(x1, y1, z1);
                    point_list.push_back(p);
                }
            }
        }
    }
    return point_list;
}
vector<double> Reader::get_unique_points() {
    return unique_points;
}
