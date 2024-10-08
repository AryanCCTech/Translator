#include <fstream>
#include <iostream>
#include <string>
#include "Triangulation.h"

using namespace std;
vector<Triangle> Triangulation::get_triangles_list(vector<Point> points) {
vector<Triangle> triangles_list;
	if (points.size()%3 == 0){
		int range = points.size() / 3;
		for (int i = 0;i < range;i++){
			Point p1( points[(i * 3) + 0].get_x_coord(), points[(i * 3) + 0].get_y_coord(), points[(i * 3) + 0].get_z_coord());
			Point p2( points[(i * 3) + 1].get_x_coord(),  points[(i * 3) + 1].get_y_coord(),  points[(i * 3) + 1].get_z_coord());
			Point p3( points[(i * 3) + 2].get_x_coord(),  points[(i * 3) + 2].get_y_coord(),  points[(i * 3) + 2].get_z_coord());
			Triangle t(p1,p2,p3);
			triangles_list.push_back(t);
		}
	}
	return triangles_list;
}
