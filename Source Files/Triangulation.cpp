#include <fstream>
#include <iostream>
#include <string>
#include "Triangulation.h"

using namespace std;
vector<Triangle> Triangulation::get_triangles(vector<Point> points) {
vector<Triangle> triangles;
	if (points.size()%3 == 0){
		int range = points.size() / 3;
		for (int i = 0;i < range;i++){
			Point p1( points[(i * 3) + 0].x, points[(i * 3) + 0].y, points[(i * 3) + 0].z);
			Point p2( points[(i * 3) + 1].x,  points[(i * 3) + 1].y,  points[(i * 3) + 1].z);
			Point p3( points[(i * 3) + 2].x,  points[(i * 3) + 2].y,  points[(i * 3) + 2].z);
			Triangle t(p1,p2,p3);
			triangles.push_back(t);
		}
	}
	return triangles;
}
