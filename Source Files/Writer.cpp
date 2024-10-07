#include <fstream>
#include <iostream>
#include <string>
#include "Writer.h"
using namespace std;
void Writer::write(vector<Triangle> triangles,vector<double> upoints) {
	string file = "output.dat";
	/*for (auto i : triangles) {
		i.get_coord();
	}*/
	ofstream outfile(file);
	for (auto i : triangles) {
		outfile << upoints[i.p1.x] << " " << upoints[i.p1.y] << " " << upoints[i.p1.z] << endl;
		outfile << upoints[i.p2.x] << " " << upoints[i.p2.y] << " " << upoints[i.p2.z] << endl;
		outfile << upoints[i.p3.x] << " " << upoints[i.p3.y] << " " << upoints[i.p3.z] << endl;
		outfile << upoints[i.p1.x] << " " << upoints[i.p1.y] << " " << upoints[i.p1.z] << endl;
		outfile << endl;
		outfile << endl;
	}
	outfile.close();
}