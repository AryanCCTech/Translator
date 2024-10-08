#include <fstream>
#include <iostream>
#include <string>
#include "Writer.h"
using namespace std;
void Writer::write(vector<Triangle> triangles_list,vector<double> unique_points) {
	string file = "output.dat";
	ofstream outfile(file);
	for (auto i : triangles_list) {
		outfile << unique_points[i.get_p1_x_coord()] << " " << unique_points[i.get_p1_y_coord()] << " " << unique_points[i.get_p1_z_coord()] << endl;
		outfile << unique_points[i.get_p2_x_coord()] << " " << unique_points[i.get_p2_y_coord()] << " " << unique_points[i.get_p2_z_coord()] << endl;
		outfile << unique_points[i.get_p3_x_coord()] << " " << unique_points[i.get_p3_y_coord()] << " " << unique_points[i.get_p3_z_coord()] << endl;
		outfile << unique_points[i.get_p1_x_coord()] << " " << unique_points[i.get_p1_y_coord()] << " " << unique_points[i.get_p1_z_coord()] << endl;
		outfile << endl;
		outfile << endl;
	}
	outfile.close();
}
