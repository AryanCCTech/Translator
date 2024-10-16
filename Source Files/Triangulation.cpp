#include "Triangulation.h"

using namespace std;

vector<Triangle> triangles_list;
void  Triangulation::make_triangles_list(vector<Point> points) {
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
}

void Triangulation::get_triangles_list()
{
	cout << "Triangles List is:\n";
	for (auto i : triangles_list) {
		cout << "A: x:" << i.get_p1_point().get_x_coord() << " A: y:" << i.get_p1_point().get_y_coord() << " A: z:" << i.get_p1_point().get_z_coord();
		cout << "B: x:" << i.get_p2_point().get_x_coord() << " B: y:" << i.get_p2_point().get_y_coord() << " B: z:" << i.get_p2_point().get_z_coord();
		cout << "C: x:" << i.get_p3_point().get_x_coord() << " C: y:" << i.get_p3_point().get_y_coord() << " C: z:" << i.get_p3_point().get_z_coord();
	}
}