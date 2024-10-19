#include "Writer.h"
#include <fstream>

using namespace std;

vector<double>& unique_points;
void Writer::write(vector<Triangle>& triangles_list) {
	
	const string file = "output.dat";
	ofstream outfile(file);

	for (auto i : triangles_list) {
		outfile << unique_points[i.get_p1_point().get_x_coord()] << " " << unique_points[i.get_p1_point().get_y_coord()] << " " << unique_points[i.get_p1_point().get_z_coord()] << endl;
		outfile << unique_points[i.get_p2_point().get_x_coord()] << " " << unique_points[i.get_p2_point().get_y_coord()] << " " << unique_points[i.get_p2_point().get_z_coord()] << endl;
		outfile << unique_points[i.get_p3_point().get_x_coord()] << " " << unique_points[i.get_p3_point().get_y_coord()] << " " << unique_points[i.get_p3_point().get_z_coord()] << endl;
		outfile << unique_points[i.get_p1_point().get_x_coord()] << " " << unique_points[i.get_p1_point().get_y_coord()] << " " << unique_points[i.get_p1_point().get_z_coord()] << endl;
		outfile << endl;
		outfile << endl;
	}
	outfile.close();
}
