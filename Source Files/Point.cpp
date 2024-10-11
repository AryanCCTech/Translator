#include "Point.h"
#include "Triangulation.h"

using namespace std;

Point::Point(int x, int y, int z) :x(x), y(y), z(z){}
Point::~Point() {};
int Point::get_x_coord() const{
    return x;
}
int Point::get_y_coord() const{
    return y;
}
int Point::get_z_coord() const{
    return z;
}
