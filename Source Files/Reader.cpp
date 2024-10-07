#include <fstream>
#include <iostream>
#include <string>
#include "Reader.h"
using namespace std;
vector<double> points;
vector<Point> Reader::read() {
    vector<Point> pstack;
    unordered_map<double, int> umap;
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
                    if (umap.find(x) == umap.end()) {
                        umap[x] = index;
                        x1 = index;
                        points.push_back(x);
                        index++;
                    }
                    else {
                        x1 = umap[x];
                    }
                    if (umap.find(y) == umap.end()) {
                        umap[y] = index;
                        y1 = index;
                        points.push_back(y);
                        index++;
                    }
                    else {
                        y1 = umap[y];
                    }
                    if (umap.find(z) == umap.end()) {
                        umap[z] = index;
                        z1 = index;
                        points.push_back(z);
                        index++;
                    }
                    else {
                        z1 = umap[z];
                    }
                    //cout << "Point P x:" << x1 << " y:" << y1 << " z:" << z1 <<  endl;
                    Point p(x1, y1, z1);
                    pstack.push_back(p);
                    //triangles.push_back(Triangle t(Point p1(x1, y1, z1), Point p2(x2, y2, z2), Point p3(x3, y3, z3)));
                }
            }
        }
        /*cout << "points" << endl;
        for (auto i : pstack) {
            i.get_coord();
            cout << "x:" << i.x << " y:" << i.y << " x:" << i.z << endl;
        }*/
    }
    return pstack;
}
vector<double> Reader::get_points() {
    return points;
}